// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_9_new,"flixel.system.frontEnds.LogFrontEnd","new",0xf2533c4e,"flixel.system.frontEnds.LogFrontEnd.new","flixel/system/frontEnds/LogFrontEnd.hx",9,0x686ab8c3)
HX_DEFINE_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_19_add,"flixel.system.frontEnds.LogFrontEnd","add",0xf2495e0f,"flixel.system.frontEnds.LogFrontEnd.add","flixel/system/frontEnds/LogFrontEnd.hx",19,0x686ab8c3)
HX_DEFINE_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_26_warn,"flixel.system.frontEnds.LogFrontEnd","warn",0x1c716698,"flixel.system.frontEnds.LogFrontEnd.warn","flixel/system/frontEnds/LogFrontEnd.hx",26,0x686ab8c3)
HX_DEFINE_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_33_error,"flixel.system.frontEnds.LogFrontEnd","error",0x74ce8f36,"flixel.system.frontEnds.LogFrontEnd.error","flixel/system/frontEnds/LogFrontEnd.hx",33,0x686ab8c3)
HX_DEFINE_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_40_notice,"flixel.system.frontEnds.LogFrontEnd","notice",0xa03f14ea,"flixel.system.frontEnds.LogFrontEnd.notice","flixel/system/frontEnds/LogFrontEnd.hx",40,0x686ab8c3)
HX_DEFINE_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_54_advanced,"flixel.system.frontEnds.LogFrontEnd","advanced",0x05a7fef4,"flixel.system.frontEnds.LogFrontEnd.advanced","flixel/system/frontEnds/LogFrontEnd.hx",54,0x686ab8c3)
HX_DEFINE_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_102_clear,"flixel.system.frontEnds.LogFrontEnd","clear",0x4a0034fb,"flixel.system.frontEnds.LogFrontEnd.clear","flixel/system/frontEnds/LogFrontEnd.hx",102,0x686ab8c3)
HX_DEFINE_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_115_set_redirectTraces,"flixel.system.frontEnds.LogFrontEnd","set_redirectTraces",0xf7f71199,"flixel.system.frontEnds.LogFrontEnd.set_redirectTraces","flixel/system/frontEnds/LogFrontEnd.hx",115,0x686ab8c3)
HX_DEFINE_STACK_FRAME(_hx_pos_ba09e0c9e62cea6b_127_processTraceData,"flixel.system.frontEnds.LogFrontEnd","processTraceData",0x5a916632,"flixel.system.frontEnds.LogFrontEnd.processTraceData","flixel/system/frontEnds/LogFrontEnd.hx",127,0x686ab8c3)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void LogFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_9_new)
            	HX_STACK_THIS(this)
HXLINE(  14)		this->redirectTraces = false;
HXLINE( 111)		this->_standardTraceFunction = ::haxe::Log_obj::trace;
            	}

Dynamic LogFrontEnd_obj::__CreateEmpty() { return new LogFrontEnd_obj; }

void *LogFrontEnd_obj::_hx_vtable = 0;

Dynamic LogFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LogFrontEnd_obj > _hx_result = new LogFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LogFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5f2a1584;
}

void LogFrontEnd_obj::add( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_19_add)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Data,"Data")
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,add,(void))

void LogFrontEnd_obj::warn( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_26_warn)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Data,"Data")
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,warn,(void))

void LogFrontEnd_obj::error( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_33_error)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Data,"Data")
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,error,(void))

void LogFrontEnd_obj::notice( ::Dynamic Data){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_40_notice)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Data,"Data")
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,notice,(void))

void LogFrontEnd_obj::advanced( ::Dynamic Data, ::flixel::_hx_system::debug::log::LogStyle Style,hx::Null< bool >  __o_FireOnce){
bool FireOnce = __o_FireOnce.Default(false);
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_54_advanced)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Data,"Data")
            	HX_STACK_ARG(Style,"Style")
            	HX_STACK_ARG(FireOnce,"FireOnce")
            	}


HX_DEFINE_DYNAMIC_FUNC3(LogFrontEnd_obj,advanced,(void))

void LogFrontEnd_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_102_clear)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(LogFrontEnd_obj,clear,(void))

bool LogFrontEnd_obj::set_redirectTraces(bool Redirect){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_115_set_redirectTraces)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Redirect,"Redirect")
HXLINE( 116)		 ::Dynamic _hx_tmp;
HXDLIN( 116)		if (Redirect) {
HXLINE( 116)			_hx_tmp = this->processTraceData_dyn();
            		}
            		else {
HXLINE( 116)			_hx_tmp = this->_standardTraceFunction;
            		}
HXDLIN( 116)		::haxe::Log_obj::trace = _hx_tmp;
HXLINE( 117)		return (this->redirectTraces = Redirect);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,set_redirectTraces,return )

void LogFrontEnd_obj::processTraceData( ::Dynamic Data, ::Dynamic Info){
            	HX_STACKFRAME(&_hx_pos_ba09e0c9e62cea6b_127_processTraceData)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Data,"Data")
            	HX_STACK_ARG(Info,"Info")
HXLINE( 128)		HX_VARI( ::cpp::VirtualArray,paramArray) = ::cpp::VirtualArray_obj::__new(1)->init(0,Data);
HXLINE( 130)		if (hx::IsNotNull( ( (::cpp::VirtualArray)(Info->__Field(HX_("customParams",d7,51,18,ed),hx::paccDynamic)) ) )) {
HXLINE( 132)			HX_VARI( int,_g) = (int)0;
HXDLIN( 132)			HX_VARI( ::cpp::VirtualArray,_g1) = ( (::cpp::VirtualArray)(Info->__Field(HX_("customParams",d7,51,18,ed),hx::paccDynamic)) );
HXDLIN( 132)			while((_g < _g1->get_length())){
HXLINE( 132)				HX_VARI(  ::Dynamic,i) = _g1->__get(_g);
HXDLIN( 132)				_g = (_g + (int)1);
HXLINE( 134)				paramArray->push(i);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(LogFrontEnd_obj,processTraceData,(void))


hx::ObjectPtr< LogFrontEnd_obj > LogFrontEnd_obj::__new() {
	hx::ObjectPtr< LogFrontEnd_obj > __this = new LogFrontEnd_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< LogFrontEnd_obj > LogFrontEnd_obj::__alloc(hx::Ctx *_hx_ctx) {
	LogFrontEnd_obj *__this = (LogFrontEnd_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LogFrontEnd_obj), true, "flixel.system.frontEnds.LogFrontEnd"));
	*(void **)__this = LogFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LogFrontEnd_obj::LogFrontEnd_obj()
{
}

void LogFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogFrontEnd);
	HX_MARK_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_MARK_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
	HX_MARK_END_CLASS();
}

void LogFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_VISIT_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
}

hx::Val LogFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"warn") ) { return hx::Val( warn_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return hx::Val( error_dyn()); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { return hx::Val( notice_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advanced") ) { return hx::Val( advanced_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { return hx::Val( redirectTraces); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processTraceData") ) { return hx::Val( processTraceData_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_redirectTraces") ) { return hx::Val( set_redirectTraces_dyn()); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { return hx::Val( _standardTraceFunction); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val LogFrontEnd_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_redirectTraces(inValue) );redirectTraces=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { _standardTraceFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("redirectTraces","\x8a","\xce","\xd6","\x0a"));
	outFields->push(HX_HCSTRING("_standardTraceFunction","\x81","\xb2","\x89","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo LogFrontEnd_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(LogFrontEnd_obj,redirectTraces),HX_HCSTRING("redirectTraces","\x8a","\xce","\xd6","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LogFrontEnd_obj,_standardTraceFunction),HX_HCSTRING("_standardTraceFunction","\x81","\xb2","\x89","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *LogFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String LogFrontEnd_obj_sMemberFields[] = {
	HX_HCSTRING("redirectTraces","\x8a","\xce","\xd6","\x0a"),
	HX_HCSTRING("_standardTraceFunction","\x81","\xb2","\x89","\x66"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("warn","\x46","\x62","\xf2","\x4e"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("notice","\x18","\xd8","\xb8","\x31"),
	HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("set_redirectTraces","\xc7","\xe1","\x1f","\x83"),
	HX_HCSTRING("processTraceData","\xe0","\x2e","\xf4","\x70"),
	::String(null()) };

static void LogFrontEnd_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LogFrontEnd_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class LogFrontEnd_obj::__mClass;

void LogFrontEnd_obj::__register()
{
	hx::Object *dummy = new LogFrontEnd_obj;
	LogFrontEnd_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.LogFrontEnd","\x5c","\xbd","\x97","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LogFrontEnd_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LogFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LogFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LogFrontEnd_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
