// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_stats__Stats_GraphicMaximizeButton
#include <flixel/system/debug/stats/_Stats/GraphicMaximizeButton.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c0c36020df569a7c_19_new,"flixel.system.debug.stats._Stats.GraphicMaximizeButton","new",0xed299781,"flixel.system.debug.stats._Stats.GraphicMaximizeButton.new","flixel/system/debug/stats/Stats.hx",19,0xc15f23b8)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace stats{
namespace _Stats{

void GraphicMaximizeButton_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_c0c36020df569a7c_19_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(transparent,"transparent")
            	HX_STACK_ARG(fillColor,"fillColor")
HXLINE(  19)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicMaximizeButton_obj::__CreateEmpty() { return new GraphicMaximizeButton_obj; }

void *GraphicMaximizeButton_obj::_hx_vtable = 0;

Dynamic GraphicMaximizeButton_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicMaximizeButton_obj > _hx_result = new GraphicMaximizeButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicMaximizeButton_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1447fc9f;
}


hx::ObjectPtr< GraphicMaximizeButton_obj > GraphicMaximizeButton_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	hx::ObjectPtr< GraphicMaximizeButton_obj > __this = new GraphicMaximizeButton_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

hx::ObjectPtr< GraphicMaximizeButton_obj > GraphicMaximizeButton_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicMaximizeButton_obj *__this = (GraphicMaximizeButton_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicMaximizeButton_obj), true, "flixel.system.debug.stats._Stats.GraphicMaximizeButton"));
	*(void **)__this = GraphicMaximizeButton_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicMaximizeButton_obj::GraphicMaximizeButton_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicMaximizeButton_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GraphicMaximizeButton_obj_sStaticStorageInfo = 0;
#endif

static void GraphicMaximizeButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicMaximizeButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicMaximizeButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicMaximizeButton_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicMaximizeButton_obj::__mClass;

void GraphicMaximizeButton_obj::__register()
{
	hx::Object *dummy = new GraphicMaximizeButton_obj;
	GraphicMaximizeButton_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.stats._Stats.GraphicMaximizeButton","\x0f","\xc3","\xcd","\x9d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GraphicMaximizeButton_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicMaximizeButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicMaximizeButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicMaximizeButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicMaximizeButton_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats
} // end namespace _Stats
