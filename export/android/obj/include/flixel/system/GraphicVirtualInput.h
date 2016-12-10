// Generated by Haxe 3.4.0
#ifndef INCLUDED_flixel_system_GraphicVirtualInput
#define INCLUDED_flixel_system_GraphicVirtualInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS2(flixel,_hx_system,GraphicVirtualInput)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES GraphicVirtualInput_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicVirtualInput_obj OBJ_;
		GraphicVirtualInput_obj();

	public:
		enum { _hx_ClassId = 0x2c603434 };

		void __construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.GraphicVirtualInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.GraphicVirtualInput"); }
		static hx::ObjectPtr< GraphicVirtualInput_obj > __new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		static hx::ObjectPtr< GraphicVirtualInput_obj > __alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicVirtualInput_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GraphicVirtualInput","\xa7","\x48","\xf2","\x40"); }

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_GraphicVirtualInput */ 
