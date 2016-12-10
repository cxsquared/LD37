// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime_app_Application
#define INCLUDED_lime_app_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(lime,_backend,native,NativeApplication)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,Event_Int_Void)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,ui,Joystick)
HX_DECLARE_CLASS2(lime,ui,Touch)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Application_obj : public  ::lime::app::Module_obj
{
	public:
		typedef  ::lime::app::Module_obj super;
		typedef Application_obj OBJ_;
		Application_obj();

	public:
		enum { _hx_ClassId = 0x31cfae44 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app.Application")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.app.Application"); }
		static hx::ObjectPtr< Application_obj > __new();
		static hx::ObjectPtr< Application_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Application_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Application","\x30","\x43","\x71","\x0e"); }

		static  ::lime::app::Application current;
		 ::Dynamic config;
		::Array< ::Dynamic> modules;
		 ::lime::app::Preloader preloader;
		 ::lime::app::Event_Int_Void onUpdate;
		 ::lime::graphics::Renderer renderer;
		::Array< ::Dynamic> renderers;
		 ::lime::ui::Window window;
		::Array< ::Dynamic> windows;
		 ::lime::_backend::native::NativeApplication backend;
		 ::haxe::ds::IntMap windowByID;
		void addModule(::Dynamic module);
		::Dynamic addModule_dyn();

		void addRenderer( ::lime::graphics::Renderer renderer);
		::Dynamic addRenderer_dyn();

		virtual void create( ::Dynamic config);
		::Dynamic create_dyn();

		void createWindow( ::lime::ui::Window window);
		::Dynamic createWindow_dyn();

		int exec();
		::Dynamic exec_dyn();

		void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);

		void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);

		void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);

		void onGamepadConnect( ::lime::ui::Gamepad gamepad);

		void onGamepadDisconnect( ::lime::ui::Gamepad gamepad);

		void onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value);

		void onJoystickButtonDown( ::lime::ui::Joystick joystick,int button);

		void onJoystickButtonUp( ::lime::ui::Joystick joystick,int button);

		void onJoystickConnect( ::lime::ui::Joystick joystick);

		void onJoystickDisconnect( ::lime::ui::Joystick joystick);

		void onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position);

		void onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float value);

		void onKeyDown( ::lime::ui::Window window,int keyCode,int modifier);

		void onKeyUp( ::lime::ui::Window window,int keyCode,int modifier);

		void onModuleExit(int code);

		void onMouseDown( ::lime::ui::Window window,Float x,Float y,int button);

		void onMouseMove( ::lime::ui::Window window,Float x,Float y);

		void onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y);

		void onMouseUp( ::lime::ui::Window window,Float x,Float y,int button);

		void onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY);

		void onPreloadComplete();

		void onPreloadProgress(int loaded,int total);

		void onRenderContextLost( ::lime::graphics::Renderer renderer);

		void onRenderContextRestored( ::lime::graphics::Renderer renderer, ::lime::graphics::RenderContext context);

		void onTextEdit( ::lime::ui::Window window,::String text,int start,int length);

		void onTextInput( ::lime::ui::Window window,::String text);

		void onTouchEnd( ::lime::ui::Touch touch);

		void onTouchMove( ::lime::ui::Touch touch);

		void onTouchStart( ::lime::ui::Touch touch);

		void onWindowActivate( ::lime::ui::Window window);

		void onWindowClose( ::lime::ui::Window window);

		void onWindowCreate( ::lime::ui::Window window);

		void onWindowDeactivate( ::lime::ui::Window window);

		void onWindowDropFile( ::lime::ui::Window window,::String file);

		void onWindowEnter( ::lime::ui::Window window);

		void onWindowFocusIn( ::lime::ui::Window window);

		void onWindowFocusOut( ::lime::ui::Window window);

		void onWindowFullscreen( ::lime::ui::Window window);

		void onWindowLeave( ::lime::ui::Window window);

		void onWindowMinimize( ::lime::ui::Window window);

		void onWindowMove( ::lime::ui::Window window,Float x,Float y);

		void onWindowResize( ::lime::ui::Window window,int width,int height);

		void onWindowRestore( ::lime::ui::Window window);

		void removeModule(::Dynamic module);
		::Dynamic removeModule_dyn();

		void removeRenderer( ::lime::graphics::Renderer renderer);
		::Dynamic removeRenderer_dyn();

		void removeWindow( ::lime::ui::Window window);
		::Dynamic removeWindow_dyn();

		void render( ::lime::graphics::Renderer renderer);

		void setPreloader( ::lime::app::Preloader preloader);
		::Dynamic setPreloader_dyn();

		void update(int deltaTime);

		void _hx___onGamepadConnect( ::lime::ui::Gamepad gamepad);
		::Dynamic _hx___onGamepadConnect_dyn();

		void _hx___onJoystickConnect( ::lime::ui::Joystick joystick);
		::Dynamic _hx___onJoystickConnect_dyn();

		Float get_frameRate();
		::Dynamic get_frameRate_dyn();

		Float set_frameRate(Float value);
		::Dynamic set_frameRate_dyn();

		 ::lime::graphics::Renderer get_renderer();
		::Dynamic get_renderer_dyn();

		 ::lime::ui::Window get_window();
		::Dynamic get_window_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Application */ 
