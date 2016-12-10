// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_SensorEventInfo
#include <lime/_backend/native/_NativeApplication/SensorEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_07695e5bd07fa57d_930_new,"lime._backend.native._NativeApplication.SensorEventInfo","new",0x51c6b8a3,"lime._backend.native._NativeApplication.SensorEventInfo.new","lime/_backend/native/NativeApplication.hx",930,0xb13849fd)
HX_DEFINE_STACK_FRAME(_hx_pos_07695e5bd07fa57d_943_clone,"lime._backend.native._NativeApplication.SensorEventInfo","clone",0x0a92d260,"lime._backend.native._NativeApplication.SensorEventInfo.clone","lime/_backend/native/NativeApplication.hx",943,0xb13849fd)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

void SensorEventInfo_obj::__construct( ::Dynamic type,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z){
int id = __o_id.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
            	HX_STACKFRAME(&_hx_pos_07695e5bd07fa57d_930_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(z,"z")
HXLINE( 932)		this->type = type;
HXLINE( 933)		this->id = id;
HXLINE( 934)		this->x = x;
HXLINE( 935)		this->y = y;
HXLINE( 936)		this->z = z;
            	}

Dynamic SensorEventInfo_obj::__CreateEmpty() { return new SensorEventInfo_obj; }

void *SensorEventInfo_obj::_hx_vtable = 0;

Dynamic SensorEventInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SensorEventInfo_obj > _hx_result = new SensorEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool SensorEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4fb57bf3;
}

 ::lime::_backend::native::_NativeApplication::SensorEventInfo SensorEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_07695e5bd07fa57d_943_clone)
            	HX_STACK_THIS(this)
HXLINE( 943)		return  ::lime::_backend::native::_NativeApplication::SensorEventInfo_obj::__alloc( HX_CTX ,this->type,this->id,this->x,this->y,this->z);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SensorEventInfo_obj,clone,return )


SensorEventInfo_obj::SensorEventInfo_obj()
{
}

hx::Val SensorEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		if (HX_FIELD_EQ(inName,"z") ) { return hx::Val( z); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SensorEventInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SensorEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SensorEventInfo_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SensorEventInfo_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(SensorEventInfo_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(SensorEventInfo_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(SensorEventInfo_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SensorEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SensorEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String SensorEventInfo_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void SensorEventInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SensorEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SensorEventInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SensorEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class SensorEventInfo_obj::__mClass;

void SensorEventInfo_obj::__register()
{
	hx::Object *dummy = new SensorEventInfo_obj;
	SensorEventInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.SensorEventInfo","\x31","\x2b","\xf7","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SensorEventInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SensorEventInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SensorEventInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SensorEventInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SensorEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SensorEventInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
