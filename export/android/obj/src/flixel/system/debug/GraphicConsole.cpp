// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3608a2beee3554fd_45_new,"flixel.system.debug.GraphicConsole","new",0x7eeec0a9,"flixel.system.debug.GraphicConsole.new","flixel/system/debug/FlxDebugger.hx",45,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicConsole_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_3608a2beee3554fd_45_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(transparent,"transparent")
            	HX_STACK_ARG(fillColor,"fillColor")
HXLINE(  45)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicConsole_obj::__CreateEmpty() { return new GraphicConsole_obj; }

void *GraphicConsole_obj::_hx_vtable = 0;

Dynamic GraphicConsole_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicConsole_obj > _hx_result = new GraphicConsole_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicConsole_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c6b0073;
}


hx::ObjectPtr< GraphicConsole_obj > GraphicConsole_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	hx::ObjectPtr< GraphicConsole_obj > __this = new GraphicConsole_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

hx::ObjectPtr< GraphicConsole_obj > GraphicConsole_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicConsole_obj *__this = (GraphicConsole_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicConsole_obj), true, "flixel.system.debug.GraphicConsole"));
	*(void **)__this = GraphicConsole_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicConsole_obj::GraphicConsole_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicConsole_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GraphicConsole_obj_sStaticStorageInfo = 0;
#endif

static void GraphicConsole_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicConsole_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicConsole_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicConsole_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicConsole_obj::__mClass;

void GraphicConsole_obj::__register()
{
	hx::Object *dummy = new GraphicConsole_obj;
	GraphicConsole_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.GraphicConsole","\x37","\x38","\x2d","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GraphicConsole_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicConsole_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicConsole_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicConsole_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicConsole_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
