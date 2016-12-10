// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Event_Dynamic_Void
#include <lime/app/Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_27_new,"lime.app.Future","new",0xc0e3b2bb,"lime.app.Future.new","lime/app/Future.hx",27,0x058e0853)
HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_48_onComplete,"lime.app.Future","onComplete",0x3a7dc3fd,"lime.app.Future.onComplete","lime/app/Future.hx",48,0x058e0853)
HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_75_onError,"lime.app.Future","onError",0xb2071604,"lime.app.Future.onError","lime/app/Future.hx",75,0x058e0853)
HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_102_onProgress,"lime.app.Future","onProgress",0x40e0baf1,"lime.app.Future.onProgress","lime/app/Future.hx",102,0x058e0853)
HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_123_then,"lime.app.Future","then",0x0a523022,"lime.app.Future.then","lime/app/Future.hx",123,0x058e0853)
HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_140_then,"lime.app.Future","then",0x0a523022,"lime.app.Future.then","lime/app/Future.hx",140,0x058e0853)
HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_201_get_isCompleted,"lime.app.Future","get_isCompleted",0x83e28eb3,"lime.app.Future.get_isCompleted","lime/app/Future.hx",201,0x058e0853)
HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_164_threadPool_doWork,"lime.app.Future","threadPool_doWork",0x65b25430,"lime.app.Future.threadPool_doWork","lime/app/Future.hx",164,0x058e0853)
HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_180_threadPool_onComplete,"lime.app.Future","threadPool_onComplete",0x93e12c2c,"lime.app.Future.threadPool_onComplete","lime/app/Future.hx",180,0x058e0853)
HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_187_threadPool_onError,"lime.app.Future","threadPool_onError",0x9e2d4a75,"lime.app.Future.threadPool_onError","lime/app/Future.hx",187,0x058e0853)
namespace lime{
namespace app{

void Future_obj::__construct( ::Dynamic work){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_27_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(work,"work")
HXLINE(  27)		if (hx::IsNotNull( work )) {
HXLINE(  29)			if (hx::IsNull( ::lime::app::Future_obj::_hx___threadPool )) {
HXLINE(  31)				::lime::app::Future_obj::_hx___threadPool =  ::lime::_hx_system::ThreadPool_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  32)				::lime::app::Future_obj::_hx___threadPool->doWork->add(::lime::app::Future_obj::threadPool_doWork_dyn(),null(),null());
HXLINE(  33)				::lime::app::Future_obj::_hx___threadPool->onComplete->add(::lime::app::Future_obj::threadPool_onComplete_dyn(),null(),null());
HXLINE(  34)				::lime::app::Future_obj::_hx___threadPool->onError->add(::lime::app::Future_obj::threadPool_onError_dyn(),null(),null());
            			}
HXLINE(  38)			HX_VARI(  ::lime::app::Promise,promise) =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE(  39)			promise->future = hx::ObjectPtr<OBJ_>(this);
HXLINE(  41)			::lime::app::Future_obj::_hx___threadPool->queue( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("promise",9b,cd,e9,f7),promise)
            				->setFixed(1,HX_("work",d1,01,fd,4e),work)));
            		}
            	}

Dynamic Future_obj::__CreateEmpty() { return new Future_obj; }

void *Future_obj::_hx_vtable = 0;

Dynamic Future_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Future_obj > _hx_result = new Future_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Future_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29c479cf;
}

 ::lime::app::Future Future_obj::onComplete( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_48_onComplete)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(listener,"listener")
HXLINE(  50)		if (hx::IsNotNull( listener )) {
HXLINE(  52)			if (this->_hx___completed) {
HXLINE(  54)				listener(this->value);
            			}
            			else {
HXLINE(  56)				if (!(this->_hx___errored)) {
HXLINE(  58)					if (hx::IsNull( this->_hx___completeListeners )) {
HXLINE(  60)						this->_hx___completeListeners = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE(  64)					this->_hx___completeListeners->push(listener);
            				}
            			}
            		}
HXLINE(  70)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onComplete,return )

 ::lime::app::Future Future_obj::onError( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_75_onError)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(listener,"listener")
HXLINE(  77)		if (hx::IsNotNull( listener )) {
HXLINE(  79)			if (this->_hx___errored) {
HXLINE(  81)				listener(this->_hx___errorMessage);
            			}
            			else {
HXLINE(  83)				if (!(this->_hx___completed)) {
HXLINE(  85)					if (hx::IsNull( this->_hx___errorListeners )) {
HXLINE(  87)						this->_hx___errorListeners = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE(  91)					this->_hx___errorListeners->push(listener);
            				}
            			}
            		}
HXLINE(  97)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onError,return )

 ::lime::app::Future Future_obj::onProgress( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_102_onProgress)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(listener,"listener")
HXLINE( 104)		if (hx::IsNotNull( listener )) {
HXLINE( 106)			if (hx::IsNull( this->_hx___progressListeners )) {
HXLINE( 108)				this->_hx___progressListeners = ::Array_obj< ::Dynamic>::__new();
            			}
HXLINE( 112)			this->_hx___progressListeners->push(listener);
            		}
HXLINE( 116)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onProgress,return )

 ::lime::app::Future Future_obj::then( ::Dynamic next){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_123_then)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(next,"next")
HXLINE( 123)		if (this->_hx___completed) {
HXLINE( 125)			return next(this->value);
            		}
            		else {
HXLINE( 127)			if (this->_hx___errored) {
HXLINE( 129)				HX_VARI(  ::lime::app::Future,future) =  ::lime::app::Future_obj::__alloc( HX_CTX ,null());
HXLINE( 130)				future->onError(this->_hx___errorMessage);
HXLINE( 131)				return future;
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,next, ::lime::app::Promise,promise) HXARGC(1)
            				void _hx_run( ::Dynamic val){
            					HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_140_then)
            					HX_STACK_ARG(val,"val")
HXLINE( 142)					HX_VARI_NAME(  ::lime::app::Future,future1,"future") = ( ( ::lime::app::Future)(next(val)) );
HXLINE( 143)					future1->onError(promise->error_dyn());
HXLINE( 144)					future1->onComplete(promise->complete_dyn());
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 135)				HX_VARI(  ::lime::app::Promise,promise) =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 137)				this->onError(promise->error_dyn());
HXLINE( 138)				this->onProgress(promise->progress_dyn());
HXLINE( 140)				this->onComplete( ::Dynamic(new _hx_Closure_0(next,promise)));
HXLINE( 148)				return promise->future;
            			}
            		}
HXLINE( 123)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,then,return )

bool Future_obj::get_isCompleted(){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_201_get_isCompleted)
            	HX_STACK_THIS(this)
HXLINE( 201)		if (!(this->_hx___completed)) {
HXLINE( 201)			return this->_hx___errored;
            		}
            		else {
HXLINE( 201)			return true;
            		}
HXDLIN( 201)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,get_isCompleted,return )

 ::lime::_hx_system::ThreadPool Future_obj::_hx___threadPool;

void Future_obj::threadPool_doWork( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_164_threadPool_doWork)
            	HX_STACK_ARG(state,"state")
HXLINE( 164)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 166)			HX_VARI(  ::Dynamic,result) = state->__Field(HX_("work",d1,01,fd,4e),hx::paccDynamic)();
HXLINE( 167)			::lime::app::Future_obj::_hx___threadPool->sendComplete( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("promise",9b,cd,e9,f7), ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),hx::paccDynamic)))
            				->setFixed(1,HX_("result",dd,68,84,08),result)));
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE( 171)				::lime::app::Future_obj::_hx___threadPool->sendError( ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("promise",9b,cd,e9,f7), ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),hx::paccDynamic)))
            					->setFixed(1,HX_("error",c8,cb,29,73),e)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,threadPool_doWork,(void))

void Future_obj::threadPool_onComplete( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_180_threadPool_onComplete)
            	HX_STACK_ARG(state,"state")
HXLINE( 180)		 ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),hx::paccDynamic))->__Field(HX_("complete",b9,00,c8,7f),hx::paccDynamic)( ::Dynamic(state->__Field(HX_("result",dd,68,84,08),hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,threadPool_onComplete,(void))

void Future_obj::threadPool_onError( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_187_threadPool_onError)
            	HX_STACK_ARG(state,"state")
HXLINE( 187)		 ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),hx::paccDynamic))->__Field(HX_("error",c8,cb,29,73),hx::paccDynamic)( ::Dynamic(state->__Field(HX_("error",c8,cb,29,73),hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,threadPool_onError,(void))


hx::ObjectPtr< Future_obj > Future_obj::__new( ::Dynamic work) {
	hx::ObjectPtr< Future_obj > __this = new Future_obj();
	__this->__construct(work);
	return __this;
}

hx::ObjectPtr< Future_obj > Future_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic work) {
	Future_obj *__this = (Future_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Future_obj), true, "lime.app.Future"));
	*(void **)__this = Future_obj::_hx_vtable;
	__this->__construct(work);
	return __this;
}

Future_obj::Future_obj()
{
}

void Future_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Future);
	HX_MARK_MEMBER_NAME(isCompleted,"isCompleted");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_hx___completed,"__completed");
	HX_MARK_MEMBER_NAME(_hx___completeListeners,"__completeListeners");
	HX_MARK_MEMBER_NAME(_hx___errored,"__errored");
	HX_MARK_MEMBER_NAME(_hx___errorListeners,"__errorListeners");
	HX_MARK_MEMBER_NAME(_hx___errorMessage,"__errorMessage");
	HX_MARK_MEMBER_NAME(_hx___progressListeners,"__progressListeners");
	HX_MARK_END_CLASS();
}

void Future_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isCompleted,"isCompleted");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_hx___completed,"__completed");
	HX_VISIT_MEMBER_NAME(_hx___completeListeners,"__completeListeners");
	HX_VISIT_MEMBER_NAME(_hx___errored,"__errored");
	HX_VISIT_MEMBER_NAME(_hx___errorListeners,"__errorListeners");
	HX_VISIT_MEMBER_NAME(_hx___errorMessage,"__errorMessage");
	HX_VISIT_MEMBER_NAME(_hx___progressListeners,"__progressListeners");
}

hx::Val Future_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return hx::Val( then_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return hx::Val( onError_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__errored") ) { return hx::Val( _hx___errored); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete_dyn()); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return hx::Val( onProgress_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isCompleted() : isCompleted); }
		if (HX_FIELD_EQ(inName,"__completed") ) { return hx::Val( _hx___completed); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__errorMessage") ) { return hx::Val( _hx___errorMessage); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isCompleted") ) { return hx::Val( get_isCompleted_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { return hx::Val( _hx___errorListeners); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { return hx::Val( _hx___completeListeners); }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { return hx::Val( _hx___progressListeners); }
	}
	return super::__Field(inName,inCallProp);
}

bool Future_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__threadPool") ) { outValue = _hx___threadPool; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"threadPool_doWork") ) { outValue = threadPool_doWork_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"threadPool_onError") ) { outValue = threadPool_onError_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"threadPool_onComplete") ) { outValue = threadPool_onComplete_dyn(); return true; }
	}
	return false;
}

hx::Val Future_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__errored") ) { _hx___errored=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { isCompleted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__completed") ) { _hx___completed=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__errorMessage") ) { _hx___errorMessage=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { _hx___errorListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { _hx___completeListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { _hx___progressListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Future_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__threadPool") ) { _hx___threadPool=ioValue.Cast<  ::lime::_hx_system::ThreadPool >(); return true; }
	}
	return false;
}

void Future_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d"));
	outFields->push(HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"));
	outFields->push(HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b"));
	outFields->push(HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"));
	outFields->push(HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c"));
	outFields->push(HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Future_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Future_obj,isCompleted),HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsBool,(int)offsetof(Future_obj,_hx___completed),HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,_hx___completeListeners),HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85")},
	{hx::fsBool,(int)offsetof(Future_obj,_hx___errored),HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,_hx___errorListeners),HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,_hx___errorMessage),HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,_hx___progressListeners),HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Future_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::_hx_system::ThreadPool*/ ,(void *) &Future_obj::_hx___threadPool,HX_HCSTRING("__threadPool","\xe6","\xcf","\xb8","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Future_obj_sMemberFields[] = {
	HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d"),
	HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"),
	HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b"),
	HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"),
	HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c"),
	HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	HX_HCSTRING("get_isCompleted","\xd8","\x0f","\x9b","\xee"),
	::String(null()) };

static void Future_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Future_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Future_obj::_hx___threadPool,"__threadPool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Future_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Future_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Future_obj::_hx___threadPool,"__threadPool");
};

#endif

hx::Class Future_obj::__mClass;

static ::String Future_obj_sStaticFields[] = {
	HX_HCSTRING("__threadPool","\xe6","\xcf","\xb8","\x7e"),
	HX_HCSTRING("threadPool_doWork","\x95","\x28","\x69","\x50"),
	HX_HCSTRING("threadPool_onComplete","\x11","\x97","\x0a","\x2c"),
	HX_HCSTRING("threadPool_onError","\x70","\x4e","\x70","\x13"),
	::String(null())
};

void Future_obj::__register()
{
	hx::Object *dummy = new Future_obj;
	Future_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Future","\x49","\x39","\x57","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Future_obj::__GetStatic;
	__mClass->mSetStaticField = &Future_obj::__SetStatic;
	__mClass->mMarkFunc = Future_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Future_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Future_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Future_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Future_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Future_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Future_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
