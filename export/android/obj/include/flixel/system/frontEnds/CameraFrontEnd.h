// Generated by Haxe 3.4.0
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#define INCLUDED_flixel_system_frontEnds_CameraFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,CameraFrontEnd)
HX_DECLARE_CLASS2(flixel,util,FlxAxes)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES CameraFrontEnd_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CameraFrontEnd_obj OBJ_;
		CameraFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x3c1a01ed };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.CameraFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.frontEnds.CameraFrontEnd"); }
		static hx::ObjectPtr< CameraFrontEnd_obj > __new();
		static hx::ObjectPtr< CameraFrontEnd_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CameraFrontEnd_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CameraFrontEnd","\x97","\xf6","\x1c","\xf3"); }

		::Array< ::Dynamic> list;
		 ::flixel::util::_FlxSignal::FlxSignal1 cameraAdded;
		 ::flixel::util::_FlxSignal::FlxSignal1 cameraRemoved;
		 ::flixel::util::_FlxSignal::FlxSignal1 cameraResized;
		bool useBufferLocking;
		 ::openfl::geom::Rectangle _cameraRect;
		 ::Dynamic add( ::Dynamic NewCamera);
		::Dynamic add_dyn();

		void remove( ::flixel::FlxCamera Camera,hx::Null< bool >  Destroy);
		::Dynamic remove_dyn();

		void reset( ::flixel::FlxCamera NewCamera);
		::Dynamic reset_dyn();

		void flash(hx::Null< int >  Color,hx::Null< Float >  Duration, ::Dynamic OnComplete,hx::Null< bool >  Force);
		::Dynamic flash_dyn();

		void fade(hx::Null< int >  Color,hx::Null< Float >  Duration,hx::Null< bool >  FadeIn, ::Dynamic OnComplete,hx::Null< bool >  Force);
		::Dynamic fade_dyn();

		void shake(hx::Null< Float >  Intensity,hx::Null< Float >  Duration, ::Dynamic OnComplete,hx::Null< bool >  Force, ::flixel::util::FlxAxes Axes);
		::Dynamic shake_dyn();

		void lock();
		::Dynamic lock_dyn();

		void render();
		::Dynamic render_dyn();

		void unlock();
		::Dynamic unlock_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		void resize();
		::Dynamic resize_dyn();

		int get_bgColor();
		::Dynamic get_bgColor_dyn();

		int set_bgColor(int Color);
		::Dynamic set_bgColor_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_CameraFrontEnd */ 
