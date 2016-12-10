// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_LZMA
#include <lime/utils/LZMA.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b044b816d486edd3_14_decode,"lime.utils.LZMA","decode",0x452a0d64,"lime.utils.LZMA.decode","lime/utils/LZMA.hx",14,0x8b46fdc4)
HX_DEFINE_STACK_FRAME(_hx_pos_b044b816d486edd3_26_encode,"lime.utils.LZMA","encode",0xda20a24c,"lime.utils.LZMA.encode","lime/utils/LZMA.hx",26,0x8b46fdc4)
HX_DEFINE_STACK_FRAME(_hx_pos_b044b816d486edd3_46_lime_lzma_decode,"lime.utils.LZMA","lime_lzma_decode",0x5fcea1f7,"lime.utils.LZMA.lime_lzma_decode","lime/utils/LZMA.hx",46,0x8b46fdc4)
HX_DEFINE_STACK_FRAME(_hx_pos_b044b816d486edd3_47_lime_lzma_encode,"lime.utils.LZMA","lime_lzma_encode",0xf4c536df,"lime.utils.LZMA.lime_lzma_encode","lime/utils/LZMA.hx",47,0x8b46fdc4)
namespace lime{
namespace utils{

void LZMA_obj::__construct() { }

Dynamic LZMA_obj::__CreateEmpty() { return new LZMA_obj; }

void *LZMA_obj::_hx_vtable = 0;

Dynamic LZMA_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LZMA_obj > _hx_result = new LZMA_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LZMA_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0664e21e;
}

 ::haxe::io::Bytes LZMA_obj::decode( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_b044b816d486edd3_14_decode)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  17)		HX_VARI(  ::Dynamic,data) = null();
HXLINE(  18)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX , ::Dynamic(data->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)), ::Dynamic(data->__Field(HX_("b",62,00,00,00),hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,decode,return )

 ::haxe::io::Bytes LZMA_obj::encode( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_b044b816d486edd3_26_encode)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  29)		HX_VARI(  ::Dynamic,data) = null();
HXLINE(  30)		return  ::haxe::io::Bytes_obj::__alloc( HX_CTX , ::Dynamic(data->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)), ::Dynamic(data->__Field(HX_("b",62,00,00,00),hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,encode,return )

 ::Dynamic LZMA_obj::lime_lzma_decode( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_b044b816d486edd3_46_lime_lzma_decode)
            	HX_STACK_ARG(data,"data")
HXLINE(  46)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,lime_lzma_decode,return )

 ::Dynamic LZMA_obj::lime_lzma_encode( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_b044b816d486edd3_47_lime_lzma_encode)
            	HX_STACK_ARG(data,"data")
HXLINE(  47)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,lime_lzma_encode,return )


LZMA_obj::LZMA_obj()
{
}

bool LZMA_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { outValue = lime_lzma_decode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { outValue = lime_lzma_encode_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LZMA_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LZMA_obj_sStaticStorageInfo = 0;
#endif

static void LZMA_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LZMA_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
};

#endif

hx::Class LZMA_obj::__mClass;

static ::String LZMA_obj_sStaticFields[] = {
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43"),
	HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8"),
	::String(null())
};

void LZMA_obj::__register()
{
	hx::Object *dummy = new LZMA_obj;
	LZMA_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.LZMA","\x78","\xc5","\xd6","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LZMA_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LZMA_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LZMA_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LZMA_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LZMA_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LZMA_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LZMA_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
