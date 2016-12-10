// Generated by Haxe 3.4.0
#ifndef INCLUDED_flixel_input_gamepad_mappings_XInputMapping
#define INCLUDED_flixel_input_gamepad_mappings_XInputMapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,XInputMapping)

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class HXCPP_CLASS_ATTRIBUTES XInputMapping_obj : public  ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj
{
	public:
		typedef  ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj super;
		typedef XInputMapping_obj OBJ_;
		XInputMapping_obj();

	public:
		enum { _hx_ClassId = 0x12065d74 };

		void __construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.mappings.XInputMapping")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.mappings.XInputMapping"); }
		static hx::ObjectPtr< XInputMapping_obj > __new( ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static hx::ObjectPtr< XInputMapping_obj > __alloc(hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XInputMapping_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("XInputMapping","\x9c","\x44","\xe4","\x9e"); }

		void initValues();

		int getID(int rawID);

		int getRawID(int ID);

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

#endif /* INCLUDED_flixel_input_gamepad_mappings_XInputMapping */ 
