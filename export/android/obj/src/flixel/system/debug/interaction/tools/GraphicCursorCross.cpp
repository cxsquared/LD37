// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicCursorCross
#include <flixel/system/debug/interaction/tools/GraphicCursorCross.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ef1b3e6d9529fe01_13_new,"flixel.system.debug.interaction.tools.GraphicCursorCross","new",0x7ff5abab,"flixel.system.debug.interaction.tools.GraphicCursorCross.new","flixel/system/debug/interaction/tools/Pointer.hx",13,0x6c93613b)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void GraphicCursorCross_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_ef1b3e6d9529fe01_13_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(transparent,"transparent")
            	HX_STACK_ARG(fillColor,"fillColor")
HXLINE(  13)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicCursorCross_obj::__CreateEmpty() { return new GraphicCursorCross_obj; }

void *GraphicCursorCross_obj::_hx_vtable = 0;

Dynamic GraphicCursorCross_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicCursorCross_obj > _hx_result = new GraphicCursorCross_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicCursorCross_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x621990ef;
}


hx::ObjectPtr< GraphicCursorCross_obj > GraphicCursorCross_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	hx::ObjectPtr< GraphicCursorCross_obj > __this = new GraphicCursorCross_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

hx::ObjectPtr< GraphicCursorCross_obj > GraphicCursorCross_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicCursorCross_obj *__this = (GraphicCursorCross_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicCursorCross_obj), true, "flixel.system.debug.interaction.tools.GraphicCursorCross"));
	*(void **)__this = GraphicCursorCross_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicCursorCross_obj::GraphicCursorCross_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicCursorCross_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GraphicCursorCross_obj_sStaticStorageInfo = 0;
#endif

static void GraphicCursorCross_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicCursorCross_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicCursorCross_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicCursorCross_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicCursorCross_obj::__mClass;

void GraphicCursorCross_obj::__register()
{
	hx::Object *dummy = new GraphicCursorCross_obj;
	GraphicCursorCross_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.tools.GraphicCursorCross","\x39","\xfa","\xdd","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GraphicCursorCross_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicCursorCross_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicCursorCross_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicCursorCross_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicCursorCross_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
