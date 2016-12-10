// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime_utils_Bytes
#define INCLUDED_lime_utils_Bytes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,Bytes)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES Bytes_obj : public  ::haxe::io::Bytes_obj
{
	public:
		typedef  ::haxe::io::Bytes_obj super;
		typedef Bytes_obj OBJ_;
		Bytes_obj();

	public:
		enum { _hx_ClassId = 0x7d1d2ceb };

		void __construct(int length,::Array< unsigned char > bytesData);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.utils.Bytes")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.utils.Bytes"); }
		static hx::ObjectPtr< Bytes_obj > __new(int length,::Array< unsigned char > bytesData);
		static hx::ObjectPtr< Bytes_obj > __alloc(hx::Ctx *_hx_ctx,int length,::Array< unsigned char > bytesData);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bytes_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Bytes","\x4b","\x78","\xc5","\x50"); }

		static  ::lime::utils::Bytes alloc(int length);
		static ::Dynamic alloc_dyn();

		static int fastGet(::Array< unsigned char > b,int pos);
		static ::Dynamic fastGet_dyn();

		static  ::lime::utils::Bytes ofData(::Array< unsigned char > b);
		static ::Dynamic ofData_dyn();

		static  ::lime::utils::Bytes ofString(::String s);
		static ::Dynamic ofString_dyn();

		static  ::lime::utils::Bytes readFile(::String path);
		static ::Dynamic readFile_dyn();

		static  ::lime::utils::Bytes _hx___fromNativePointer( ::Dynamic data,int length);
		static ::Dynamic _hx___fromNativePointer_dyn();

		static  ::Dynamic lime_bytes_from_data_pointer(Float data,int length);
		static ::Dynamic lime_bytes_from_data_pointer_dyn();

		static Float lime_bytes_get_data_pointer( ::Dynamic data);
		static ::Dynamic lime_bytes_get_data_pointer_dyn();

		static  ::Dynamic lime_bytes_read_file(::String path);
		static ::Dynamic lime_bytes_read_file_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_Bytes */ 
