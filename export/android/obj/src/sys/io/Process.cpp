// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
#ifndef INCLUDED_sys_io__Process_Stdin
#include <sys/io/_Process/Stdin.h>
#endif
#ifndef INCLUDED_sys_io__Process_Stdout
#include <sys/io/_Process/Stdout.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b7d5a95d2caa5c3_96_new,"sys.io.Process","new",0x849b4c7a,"sys.io.Process.new","/usr/local/lib/haxe/std/cpp/_std/sys/io/Process.hx",96,0x8244a714)
HX_DEFINE_STACK_FRAME(_hx_pos_7b7d5a95d2caa5c3_112_close,"sys.io.Process","close",0x0a954e52,"sys.io.Process.close","/usr/local/lib/haxe/std/cpp/_std/sys/io/Process.hx",112,0x8244a714)
namespace sys{
namespace io{

void Process_obj::__construct(::String cmd,::Array< ::String > args){
            	HX_GC_STACKFRAME(&_hx_pos_7b7d5a95d2caa5c3_96_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(cmd,"cmd")
            	HX_STACK_ARG(args,"args")
HXLINE(  97)		 ::Dynamic _hx_tmp;
HXDLIN(  97)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  97)			_hx_tmp = _hx_std_process_run(cmd,args);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  97)				HX_STACK_DO_THROW((HX_("Process creation failure : ",cc,fa,44,a5) + cmd));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN(  97)		this->p = _hx_tmp;
HXLINE(  98)		this->_hx_stdin =  ::sys::io::_Process::Stdin_obj::__alloc( HX_CTX ,this->p);
HXLINE(  99)		this->_hx_stdout =  ::sys::io::_Process::Stdout_obj::__alloc( HX_CTX ,this->p,true);
HXLINE( 100)		this->_hx_stderr =  ::sys::io::_Process::Stdout_obj::__alloc( HX_CTX ,this->p,false);
            	}

Dynamic Process_obj::__CreateEmpty() { return new Process_obj; }

void *Process_obj::_hx_vtable = 0;

Dynamic Process_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Process_obj > _hx_result = new Process_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Process_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15242bc4;
}

void Process_obj::close(){
            	HX_STACKFRAME(&_hx_pos_7b7d5a95d2caa5c3_112_close)
            	HX_STACK_THIS(this)
HXLINE( 112)		_hx_std_process_close(this->p);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Process_obj,close,(void))


hx::ObjectPtr< Process_obj > Process_obj::__new(::String cmd,::Array< ::String > args) {
	hx::ObjectPtr< Process_obj > __this = new Process_obj();
	__this->__construct(cmd,args);
	return __this;
}

hx::ObjectPtr< Process_obj > Process_obj::__alloc(hx::Ctx *_hx_ctx,::String cmd,::Array< ::String > args) {
	Process_obj *__this = (Process_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Process_obj), true, "sys.io.Process"));
	*(void **)__this = Process_obj::_hx_vtable;
	__this->__construct(cmd,args);
	return __this;
}

Process_obj::Process_obj()
{
}

void Process_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Process);
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(_hx_stdout,"stdout");
	HX_MARK_MEMBER_NAME(_hx_stderr,"stderr");
	HX_MARK_MEMBER_NAME(_hx_stdin,"stdin");
	HX_MARK_END_CLASS();
}

void Process_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(_hx_stdout,"stdout");
	HX_VISIT_MEMBER_NAME(_hx_stderr,"stderr");
	HX_VISIT_MEMBER_NAME(_hx_stdin,"stdin");
}

hx::Val Process_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return hx::Val( p); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stdin") ) { return hx::Val( _hx_stdin); }
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stdout") ) { return hx::Val( _hx_stdout); }
		if (HX_FIELD_EQ(inName,"stderr") ) { return hx::Val( _hx_stderr); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Process_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stdin") ) { _hx_stdin=inValue.Cast<  ::haxe::io::Output >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stdout") ) { _hx_stdout=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stderr") ) { _hx_stderr=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Process_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("stdout","\xcb","\xbf","\xf3","\x07"));
	outFields->push(HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07"));
	outFields->push(HX_HCSTRING("stdin","\x48","\xb3","\x0d","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Process_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Process_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Process_obj,_hx_stdout),HX_HCSTRING("stdout","\xcb","\xbf","\xf3","\x07")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Process_obj,_hx_stderr),HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07")},
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(Process_obj,_hx_stdin),HX_HCSTRING("stdin","\x48","\xb3","\x0d","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Process_obj_sStaticStorageInfo = 0;
#endif

static ::String Process_obj_sMemberFields[] = {
	HX_HCSTRING("p","\x70","\x00","\x00","\x00"),
	HX_HCSTRING("stdout","\xcb","\xbf","\xf3","\x07"),
	HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07"),
	HX_HCSTRING("stdin","\x48","\xb3","\x0d","\x84"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void Process_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Process_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Process_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Process_obj::__mClass,"__mClass");
};

#endif

hx::Class Process_obj::__mClass;

void Process_obj::__register()
{
	hx::Object *dummy = new Process_obj;
	Process_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io.Process","\x88","\x47","\xb1","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Process_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Process_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Process_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Process_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Process_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Process_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace io
