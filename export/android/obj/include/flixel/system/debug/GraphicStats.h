// Generated by Haxe 3.4.0
#ifndef INCLUDED_flixel_system_debug_GraphicStats
#define INCLUDED_flixel_system_debug_GraphicStats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,debug,GraphicStats)

namespace flixel{
namespace _hx_system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES GraphicStats_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicStats_obj OBJ_;
		GraphicStats_obj();

	public:
		enum { _hx_ClassId = 0x6ed2861f };

		void __construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.GraphicStats")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.GraphicStats"); }
		static hx::ObjectPtr< GraphicStats_obj > __new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		static hx::ObjectPtr< GraphicStats_obj > __alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicStats_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GraphicStats","\x77","\x36","\x52","\xbc"); }

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_GraphicStats */ 
