// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a915f6dcce8b5bed_24___init__,"::lime::_hx_system::CFFI_obj","__init__",0xd08dc78c,"::lime::_hx_system::CFFI_obj.__init__","lime/system/CFFI.hx",24,0x441ad672)
HX_DEFINE_STACK_FRAME(_hx_pos_9b11a74d7222574a_45_load,"lime.system.CFFI","load",0x60b2e828,"lime.system.CFFI.load","lime/system/CFFI.hx",45,0x441ad672)
HX_DEFINE_STACK_FRAME(_hx_pos_9b11a74d7222574a_61_load,"lime.system.CFFI","load",0x60b2e828,"lime.system.CFFI.load","lime/system/CFFI.hx",61,0x441ad672)
HX_DEFINE_STACK_FRAME(_hx_pos_9b11a74d7222574a_205___findHaxelib,"lime.system.CFFI","__findHaxelib",0xf1a39a44,"lime.system.CFFI.__findHaxelib","lime/system/CFFI.hx",205,0x441ad672)
HX_DEFINE_STACK_FRAME(_hx_pos_9b11a74d7222574a_260___loaderTrace,"lime.system.CFFI","__loaderTrace",0x9278b410,"lime.system.CFFI.__loaderTrace","lime/system/CFFI.hx",260,0x441ad672)
HX_DEFINE_STACK_FRAME(_hx_pos_9b11a74d7222574a_328___sysName,"lime.system.CFFI","__sysName",0x178f5196,"lime.system.CFFI.__sysName","lime/system/CFFI.hx",328,0x441ad672)
HX_DEFINE_STACK_FRAME(_hx_pos_9b11a74d7222574a_339___tryLoad,"lime.system.CFFI","__tryLoad",0xe7c4e49f,"lime.system.CFFI.__tryLoad","lime/system/CFFI.hx",339,0x441ad672)
HX_DEFINE_STACK_FRAME(_hx_pos_9b11a74d7222574a_12_boot,"lime.system.CFFI","boot",0x5a16d234,"lime.system.CFFI.boot","lime/system/CFFI.hx",12,0x441ad672)
namespace lime{
namespace _hx_system{

void CFFI_obj::__construct() { }

Dynamic CFFI_obj::__CreateEmpty() { return new CFFI_obj; }

void *CFFI_obj::_hx_vtable = 0;

Dynamic CFFI_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CFFI_obj > _hx_result = new CFFI_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CFFI_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x68c2f22a;
}

void CFFI_obj::__init__(){
            	HX_STACKFRAME(&_hx_pos_a915f6dcce8b5bed_24___init__)
HXLINE(  27)		::lime::_hx_system::CFFI_obj::available = true;
HXLINE(  28)		::lime::_hx_system::CFFI_obj::enabled = true;
            	}


 ::haxe::ds::StringMap CFFI_obj::_hx___moduleNames;

bool CFFI_obj::available;

bool CFFI_obj::enabled;

 ::Dynamic CFFI_obj::load(::String library,::String method,hx::Null< int >  __o_args,hx::Null< bool >  __o_lazy){
int args = __o_args.Default(0);
bool lazy = __o_lazy.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_9b11a74d7222574a_45_load)
            	HX_STACK_ARG(library,"library")
            	HX_STACK_ARG(method,"method")
            	HX_STACK_ARG(args,"args")
            	HX_STACK_ARG(lazy,"lazy")
HXLINE(  59)		if (!(::lime::_hx_system::CFFI_obj::enabled)) {
            			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::Dynamic _hx_run(::cpp::VirtualArray _hx___){
            				HX_STACKFRAME(&_hx_pos_9b11a74d7222574a_61_load)
            				HX_STACK_ARG(_hx___,"_hx___")
HXLINE(  61)				return  ::Dynamic(hx::Anon_obj::Create(0));
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  61)			return ::Reflect_obj::makeVarArgs( ::Dynamic(new _hx_Closure_0()));
            		}
HXLINE(  65)		HX_VARI(  ::Dynamic,result) = null();
HXLINE(  70)		if (hx::IsNull( ::lime::_hx_system::CFFI_obj::_hx___moduleNames )) {
HXLINE(  70)			::lime::_hx_system::CFFI_obj::_hx___moduleNames =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  72)		if (lazy) {
HXLINE(  74)			::lime::_hx_system::CFFI_obj::_hx___moduleNames->set(library,library);
HXLINE(  76)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  81)				if ((library == HX_("lime-legacy",c1,7f,b9,87))) {
HXLINE(  81)					return null();
            				}
HXLINE(  87)				result = ::cpp::Lib_obj::loadLazy(library,method,args);
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e = _hx_e;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		else {
HXLINE(  95)			return ::cpp::Lib_obj::load(library,method,args);
            		}
HXLINE( 181)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CFFI_obj,load,return )

::String CFFI_obj::_hx___findHaxelib(::String library){
            	HX_GC_STACKFRAME(&_hx_pos_9b11a74d7222574a_205___findHaxelib)
            	HX_STACK_ARG(library,"library")
HXLINE( 209)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 211)			HX_VARI(  ::sys::io::Process,proc) =  ::sys::io::Process_obj::__alloc( HX_CTX ,HX_("haxelib",df,b6,80,08),::Array_obj< ::String >::__new(2)->init(0,HX_("path",a5,e5,51,4a))->init(1,library));
HXLINE( 213)			if (hx::IsNotNull( proc )) {
HXLINE( 215)				HX_VARI(  ::haxe::io::Input,stream) = proc->_hx_stdout;
HXLINE( 217)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 219)					while(true){
HXLINE( 221)						HX_VARI( ::String,s) = stream->readLine();
HXLINE( 223)						if ((s.substr((int)0,(int)1) != HX_("-",2d,00,00,00))) {
HXLINE( 225)							stream->close();
HXLINE( 226)							proc->close();
HXLINE( 227)							::lime::_hx_system::CFFI_obj::_hx___loaderTrace((HX_("Found haxelib ",1f,a6,4d,c9) + s));
HXLINE( 228)							return s;
            						}
            					}
            				}
            				catch( ::Dynamic _hx_e){
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic e = _hx_e;
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 236)				stream->close();
HXLINE( 237)				proc->close();
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e1 = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 245)		return HX_("",00,00,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFI_obj,_hx___findHaxelib,return )

void CFFI_obj::_hx___loaderTrace(::String message){
            	HX_STACKFRAME(&_hx_pos_9b11a74d7222574a_260___loaderTrace)
            	HX_STACK_ARG(message,"message")
HXLINE( 260)		if (hx::IsNotNull( ::cpp::Lib_obj::load(HX_("std",a3,a8,57,00),HX_("get_env",84,cc,c1,26),(int)1)(HX_("OPENFL_LOAD_DEBUG",a9,1b,ff,9b)) )) {
HXLINE( 262)			::Sys_obj::println(message);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFI_obj,_hx___loaderTrace,(void))

::String CFFI_obj::_hx___sysName(){
            	HX_STACKFRAME(&_hx_pos_9b11a74d7222574a_328___sysName)
HXLINE( 328)		return ::cpp::Lib_obj::load(HX_("std",a3,a8,57,00),HX_("sys_string",03,f9,de,46),(int)0)();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CFFI_obj,_hx___sysName,return )

 ::Dynamic CFFI_obj::_hx___tryLoad(::String name,::String library,::String func,int args){
            	HX_STACKFRAME(&_hx_pos_9b11a74d7222574a_339___tryLoad)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(library,"library")
            	HX_STACK_ARG(func,"func")
            	HX_STACK_ARG(args,"args")
HXLINE( 343)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 346)			HX_VARI(  ::Dynamic,result) = ::cpp::Lib_obj::load(name,func,args);
HXLINE( 355)			if (hx::IsNotNull( result )) {
HXLINE( 357)				::lime::_hx_system::CFFI_obj::_hx___loaderTrace((HX_("Got result ",af,e9,02,45) + name));
HXLINE( 358)				::lime::_hx_system::CFFI_obj::_hx___moduleNames->set(library,name);
HXLINE( 359)				return result;
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE( 365)				::lime::_hx_system::CFFI_obj::_hx___loaderTrace((HX_("Failed to load : ",1e,ca,38,9b) + name));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 371)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CFFI_obj,_hx___tryLoad,return )


CFFI_obj::CFFI_obj()
{
}

bool CFFI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { outValue = enabled; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { outValue = available; return true; }
		if (HX_FIELD_EQ(inName,"__sysName") ) { outValue = _hx___sysName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__tryLoad") ) { outValue = _hx___tryLoad_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { outValue = _hx___moduleNames; return true; }
		if (HX_FIELD_EQ(inName,"__findHaxelib") ) { outValue = _hx___findHaxelib_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__loaderTrace") ) { outValue = _hx___loaderTrace_dyn(); return true; }
	}
	return false;
}

bool CFFI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { available=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { _hx___moduleNames=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CFFI_obj_sMemberStorageInfo = 0;
static hx::StaticInfo CFFI_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &CFFI_obj::_hx___moduleNames,HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28")},
	{hx::fsBool,(void *) &CFFI_obj::available,HX_HCSTRING("available","\xc9","\x59","\x83","\x77")},
	{hx::fsBool,(void *) &CFFI_obj::enabled,HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void CFFI_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CFFI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CFFI_obj::_hx___moduleNames,"__moduleNames");
	HX_MARK_MEMBER_NAME(CFFI_obj::available,"available");
	HX_MARK_MEMBER_NAME(CFFI_obj::enabled,"enabled");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CFFI_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CFFI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CFFI_obj::_hx___moduleNames,"__moduleNames");
	HX_VISIT_MEMBER_NAME(CFFI_obj::available,"available");
	HX_VISIT_MEMBER_NAME(CFFI_obj::enabled,"enabled");
};

#endif

hx::Class CFFI_obj::__mClass;

static ::String CFFI_obj_sStaticFields[] = {
	HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28"),
	HX_HCSTRING("available","\xc9","\x59","\x83","\x77"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("__findHaxelib","\x86","\xb8","\xe3","\x50"),
	HX_HCSTRING("__loaderTrace","\x52","\xd2","\xb8","\xf1"),
	HX_HCSTRING("__sysName","\xd8","\xa6","\x8e","\xfb"),
	HX_HCSTRING("__tryLoad","\xe1","\x39","\xc4","\xcb"),
	::String(null())
};

void CFFI_obj::__register()
{
	hx::Object *dummy = new CFFI_obj;
	CFFI_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.CFFI","\xac","\xd1","\xdf","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CFFI_obj::__GetStatic;
	__mClass->mSetStaticField = &CFFI_obj::__SetStatic;
	__mClass->mMarkFunc = CFFI_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CFFI_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CFFI_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CFFI_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CFFI_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CFFI_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CFFI_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9b11a74d7222574a_12_boot)
HXLINE(  12)		_hx___moduleNames = null();
            	}
}

} // end namespace lime
} // end namespace system
