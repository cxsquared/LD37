// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime_system_ThreadPool
#define INCLUDED_lime_system_ThreadPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Deque)
HX_DECLARE_CLASS2(lime,app,Event_Dynamic_Void)
HX_DECLARE_CLASS2(lime,_hx_system,ThreadPool)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES ThreadPool_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ThreadPool_obj OBJ_;
		ThreadPool_obj();

	public:
		enum { _hx_ClassId = 0x3ef61f6a };

		void __construct(hx::Null< int >  __o_minThreads,hx::Null< int >  __o_maxThreads);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system.ThreadPool")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.system.ThreadPool"); }
		static hx::ObjectPtr< ThreadPool_obj > __new(hx::Null< int >  __o_minThreads,hx::Null< int >  __o_maxThreads);
		static hx::ObjectPtr< ThreadPool_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_minThreads,hx::Null< int >  __o_maxThreads);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ThreadPool_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ThreadPool","\xe6","\x58","\xd6","\x3c"); }

		int currentThreads;
		 ::lime::app::Event_Dynamic_Void doWork;
		int maxThreads;
		int minThreads;
		 ::lime::app::Event_Dynamic_Void onComplete;
		 ::lime::app::Event_Dynamic_Void onError;
		 ::lime::app::Event_Dynamic_Void onProgress;
		int _hx___workCompleted;
		 ::cpp::vm::Deque _hx___workIncoming;
		int _hx___workQueued;
		 ::cpp::vm::Deque _hx___workResult;
		void queue( ::Dynamic state);
		::Dynamic queue_dyn();

		void sendComplete( ::Dynamic state);
		::Dynamic sendComplete_dyn();

		void sendError( ::Dynamic state);
		::Dynamic sendError_dyn();

		void sendProgress( ::Dynamic state);
		::Dynamic sendProgress_dyn();

		void _hx___doWork();
		::Dynamic _hx___doWork_dyn();

		void _hx___update(int deltaTime);
		::Dynamic _hx___update_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_ThreadPool */ 
