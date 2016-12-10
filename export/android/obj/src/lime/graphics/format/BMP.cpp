// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ec97b87f3ed1dc6b_12_encode,"lime.graphics.format.BMP","encode",0xdcae556c,"lime.graphics.format.BMP.encode","lime/graphics/format/BMP.hx",12,0xe68a6e47)
namespace lime{
namespace graphics{
namespace format{

void BMP_obj::__construct() { }

Dynamic BMP_obj::__CreateEmpty() { return new BMP_obj; }

void *BMP_obj::_hx_vtable = 0;

Dynamic BMP_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BMP_obj > _hx_result = new BMP_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BMP_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5328312e;
}

 ::haxe::io::Bytes BMP_obj::encode( ::lime::graphics::Image image, ::lime::graphics::format::BMPType type){
            	HX_GC_STACKFRAME(&_hx_pos_ec97b87f3ed1dc6b_12_encode)
            	HX_STACK_ARG(image,"image")
            	HX_STACK_ARG(type,"type")
HXLINE(  14)		bool _hx_tmp;
HXDLIN(  14)		if (!(image->get_premultiplied())) {
HXLINE(  14)			_hx_tmp = (image->get_format() != (int)0);
            		}
            		else {
HXLINE(  14)			_hx_tmp = true;
            		}
HXDLIN(  14)		if (_hx_tmp) {
HXLINE(  18)			image = image->clone();
HXLINE(  19)			image->set_premultiplied(false);
HXLINE(  20)			image->set_format((int)0);
            		}
HXLINE(  24)		if (hx::IsNull( type )) {
HXLINE(  26)			type = ::lime::graphics::format::BMPType_obj::RGB_dyn();
            		}
HXLINE(  30)		HX_VARI( int,fileHeaderLength) = (int)14;
HXLINE(  31)		HX_VARI( int,infoHeaderLength) = (int)40;
HXLINE(  32)		HX_VARI( int,pixelValuesLength) = ((image->width * image->height) * (int)4);
HXLINE(  34)		if (hx::IsNotNull( type )) {
HXLINE(  34)			switch((int)(_hx_getEnumValueIndex(type))){
            				case (int)0: {
HXLINE(  47)					pixelValuesLength = ((((image->width * (int)3) + hx::Mod((image->width * (int)3),(int)4)) + (image->height * (int)3)) + (image->height * (int)3));
            				}
            				break;
            				case (int)1: {
HXLINE(  38)					infoHeaderLength = (int)108;
            				}
            				break;
            				case (int)2: {
HXLINE(  42)					fileHeaderLength = (int)0;
HXLINE(  43)					pixelValuesLength = (pixelValuesLength + (image->width * image->height));
            				}
            				break;
            			}
            		}
HXLINE(  53)		HX_VARI(  ::haxe::io::Bytes,data) = ::haxe::io::Bytes_obj::alloc(((fileHeaderLength + infoHeaderLength) + pixelValuesLength));
HXLINE(  54)		HX_VARI( int,position) = (int)0;
HXLINE(  56)		if ((fileHeaderLength > (int)0)) {
HXLINE(  58)			{
HXLINE(  58)				position = (int)1;
HXDLIN(  58)				data->b[(int)0] = (int)66;
            			}
HXLINE(  59)			{
HXLINE(  59)				position = (int)2;
HXDLIN(  59)				data->b[(int)1] = (int)77;
            			}
HXLINE(  60)			{
HXLINE(  60)				HX_VARI( int,v) = data->length;
HXDLIN(  60)				data->b[(int)2] = v;
HXDLIN(  60)				data->b[(int)3] = ((int)v >> (int)(int)8);
HXDLIN(  60)				data->b[(int)4] = ((int)v >> (int)(int)16);
HXDLIN(  60)				data->b[(int)5] = hx::UShr(v,(int)24);
            			}
HXDLIN(  60)			position = (int)6;
HXLINE(  61)			{
HXLINE(  61)				data->b[(int)6] = (int)0;
HXDLIN(  61)				data->b[(int)7] = (int)0;
            			}
HXDLIN(  61)			position = (int)8;
HXLINE(  62)			{
HXLINE(  62)				data->b[(int)8] = (int)0;
HXDLIN(  62)				data->b[(int)9] = (int)0;
            			}
HXDLIN(  62)			position = (int)10;
HXLINE(  63)			{
HXLINE(  63)				HX_VARI_NAME( int,v1,"v") = (fileHeaderLength + infoHeaderLength);
HXDLIN(  63)				data->b[(int)10] = v1;
HXDLIN(  63)				data->b[(int)11] = ((int)v1 >> (int)(int)8);
HXDLIN(  63)				data->b[(int)12] = ((int)v1 >> (int)(int)16);
HXDLIN(  63)				data->b[(int)13] = hx::UShr(v1,(int)24);
            			}
HXDLIN(  63)			position = (int)14;
            		}
HXLINE(  67)		{
HXLINE(  67)			data->b[position] = infoHeaderLength;
HXDLIN(  67)			data->b[(position + (int)1)] = ((int)infoHeaderLength >> (int)(int)8);
HXDLIN(  67)			data->b[(position + (int)2)] = ((int)infoHeaderLength >> (int)(int)16);
HXDLIN(  67)			data->b[(position + (int)3)] = hx::UShr(infoHeaderLength,(int)24);
            		}
HXDLIN(  67)		position = (position + (int)4);
HXLINE(  68)		{
HXLINE(  68)			HX_VARI_NAME( int,v2,"v") = image->width;
HXDLIN(  68)			data->b[position] = v2;
HXDLIN(  68)			data->b[(position + (int)1)] = ((int)v2 >> (int)(int)8);
HXDLIN(  68)			data->b[(position + (int)2)] = ((int)v2 >> (int)(int)16);
HXDLIN(  68)			data->b[(position + (int)3)] = hx::UShr(v2,(int)24);
            		}
HXDLIN(  68)		position = (position + (int)4);
HXLINE(  69)		{
HXLINE(  69)			HX_VAR_NAME( int,v3,"v");
HXDLIN(  69)			if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::ICO_dyn() )) {
HXLINE(  69)				v3 = (image->height * (int)2);
            			}
            			else {
HXLINE(  69)				v3 = image->height;
            			}
HXDLIN(  69)			data->b[position] = v3;
HXDLIN(  69)			data->b[(position + (int)1)] = ((int)v3 >> (int)(int)8);
HXDLIN(  69)			data->b[(position + (int)2)] = ((int)v3 >> (int)(int)16);
HXDLIN(  69)			data->b[(position + (int)3)] = hx::UShr(v3,(int)24);
            		}
HXDLIN(  69)		position = (position + (int)4);
HXLINE(  70)		{
HXLINE(  70)			data->b[position] = (int)1;
HXDLIN(  70)			data->b[(position + (int)1)] = (int)0;
            		}
HXDLIN(  70)		position = (position + (int)2);
HXLINE(  71)		{
HXLINE(  71)			HX_VAR_NAME( int,v4,"v");
HXDLIN(  71)			if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::RGB_dyn() )) {
HXLINE(  71)				v4 = (int)24;
            			}
            			else {
HXLINE(  71)				v4 = (int)32;
            			}
HXDLIN(  71)			data->b[position] = v4;
HXDLIN(  71)			data->b[(position + (int)1)] = ((int)v4 >> (int)(int)8);
            		}
HXDLIN(  71)		position = (position + (int)2);
HXLINE(  72)		{
HXLINE(  72)			HX_VAR_NAME( int,v5,"v");
HXDLIN(  72)			if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::BITFIELD_dyn() )) {
HXLINE(  72)				v5 = (int)3;
            			}
            			else {
HXLINE(  72)				v5 = (int)0;
            			}
HXDLIN(  72)			data->b[position] = v5;
HXDLIN(  72)			data->b[(position + (int)1)] = ((int)v5 >> (int)(int)8);
HXDLIN(  72)			data->b[(position + (int)2)] = ((int)v5 >> (int)(int)16);
HXDLIN(  72)			data->b[(position + (int)3)] = hx::UShr(v5,(int)24);
            		}
HXDLIN(  72)		position = (position + (int)4);
HXLINE(  73)		{
HXLINE(  73)			data->b[position] = pixelValuesLength;
HXDLIN(  73)			data->b[(position + (int)1)] = ((int)pixelValuesLength >> (int)(int)8);
HXDLIN(  73)			data->b[(position + (int)2)] = ((int)pixelValuesLength >> (int)(int)16);
HXDLIN(  73)			data->b[(position + (int)3)] = hx::UShr(pixelValuesLength,(int)24);
            		}
HXDLIN(  73)		position = (position + (int)4);
HXLINE(  74)		{
HXLINE(  74)			data->b[position] = (int)11824;
HXDLIN(  74)			data->b[(position + (int)1)] = (int)46;
HXDLIN(  74)			data->b[(position + (int)2)] = (int)0;
HXDLIN(  74)			data->b[(position + (int)3)] = (int)0;
            		}
HXDLIN(  74)		position = (position + (int)4);
HXLINE(  75)		{
HXLINE(  75)			data->b[position] = (int)11824;
HXDLIN(  75)			data->b[(position + (int)1)] = (int)46;
HXDLIN(  75)			data->b[(position + (int)2)] = (int)0;
HXDLIN(  75)			data->b[(position + (int)3)] = (int)0;
            		}
HXDLIN(  75)		position = (position + (int)4);
HXLINE(  76)		{
HXLINE(  76)			data->b[position] = (int)0;
HXDLIN(  76)			data->b[(position + (int)1)] = (int)0;
HXDLIN(  76)			data->b[(position + (int)2)] = (int)0;
HXDLIN(  76)			data->b[(position + (int)3)] = (int)0;
            		}
HXDLIN(  76)		position = (position + (int)4);
HXLINE(  77)		{
HXLINE(  77)			data->b[position] = (int)0;
HXDLIN(  77)			data->b[(position + (int)1)] = (int)0;
HXDLIN(  77)			data->b[(position + (int)2)] = (int)0;
HXDLIN(  77)			data->b[(position + (int)3)] = (int)0;
            		}
HXDLIN(  77)		position = (position + (int)4);
HXLINE(  79)		if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::BITFIELD_dyn() )) {
HXLINE(  81)			{
HXLINE(  81)				data->b[position] = (int)16711680;
HXDLIN(  81)				data->b[(position + (int)1)] = (int)65280;
HXDLIN(  81)				data->b[(position + (int)2)] = (int)255;
HXDLIN(  81)				data->b[(position + (int)3)] = (int)0;
            			}
HXDLIN(  81)			position = (position + (int)4);
HXLINE(  82)			{
HXLINE(  82)				data->b[position] = (int)65280;
HXDLIN(  82)				data->b[(position + (int)1)] = (int)255;
HXDLIN(  82)				data->b[(position + (int)2)] = (int)0;
HXDLIN(  82)				data->b[(position + (int)3)] = (int)0;
            			}
HXDLIN(  82)			position = (position + (int)4);
HXLINE(  83)			{
HXLINE(  83)				data->b[position] = (int)255;
HXDLIN(  83)				data->b[(position + (int)1)] = (int)0;
HXDLIN(  83)				data->b[(position + (int)2)] = (int)0;
HXDLIN(  83)				data->b[(position + (int)3)] = (int)0;
            			}
HXDLIN(  83)			position = (position + (int)4);
HXLINE(  84)			{
HXLINE(  84)				data->b[position] = (int)-16777216;
HXDLIN(  84)				data->b[(position + (int)1)] = (int)-65536;
HXDLIN(  84)				data->b[(position + (int)2)] = (int)-256;
HXDLIN(  84)				data->b[(position + (int)3)] = (int)255;
            			}
HXDLIN(  84)			position = (position + (int)4);
HXLINE(  86)			{
HXLINE(  86)				position = (position + (int)1);
HXDLIN(  86)				data->b[(position - (int)1)] = (int)32;
            			}
HXLINE(  87)			{
HXLINE(  87)				position = (position + (int)1);
HXDLIN(  87)				data->b[(position - (int)1)] = (int)110;
            			}
HXLINE(  88)			{
HXLINE(  88)				position = (position + (int)1);
HXDLIN(  88)				data->b[(position - (int)1)] = (int)105;
            			}
HXLINE(  89)			{
HXLINE(  89)				position = (position + (int)1);
HXDLIN(  89)				data->b[(position - (int)1)] = (int)87;
            			}
HXLINE(  91)			{
HXLINE(  91)				HX_VARI( int,_g) = (int)0;
HXDLIN(  91)				while((_g < (int)48)){
HXLINE(  91)					_g = (_g + (int)1);
HXLINE(  93)					{
HXLINE(  93)						position = (position + (int)1);
HXDLIN(  93)						data->b[(position - (int)1)] = (int)0;
            					}
            				}
            			}
            		}
HXLINE(  99)		HX_VARI(  ::haxe::io::Bytes,pixels) = image->getPixels( ::lime::math::Rectangle_obj::__alloc( HX_CTX ,(int)0,(int)0,image->width,image->height),(int)1);
HXLINE( 100)		HX_VARI( int,readPosition) = (int)0;
HXLINE( 101)		HX_VAR( int,a);
HXDLIN( 101)		HX_VAR( int,r);
HXDLIN( 101)		HX_VAR( int,g);
HXDLIN( 101)		HX_VAR( int,b);
HXLINE( 103)		if (hx::IsNotNull( type )) {
HXLINE( 103)			switch((int)(_hx_getEnumValueIndex(type))){
            				case (int)0: {
HXLINE( 166)					HX_VARI( int,_g1) = (int)0;
HXDLIN( 166)					HX_VARI_NAME( int,_g2,"_g") = image->height;
HXDLIN( 166)					while((_g1 < _g2)){
HXLINE( 166)						_g1 = (_g1 + (int)1);
HXLINE( 168)						readPosition = ((((image->height - (int)1) - (_g1 - (int)1)) * (int)4) * image->width);
HXLINE( 170)						{
HXLINE( 170)							HX_VARI( int,_g3) = (int)0;
HXDLIN( 170)							HX_VARI_NAME( int,_g21,"_g2") = image->width;
HXDLIN( 170)							while((_g3 < _g21)){
HXLINE( 170)								_g3 = (_g3 + (int)1);
HXLINE( 172)								readPosition = (readPosition + (int)1);
HXLINE( 173)								readPosition = (readPosition + (int)1);
HXDLIN( 173)								r = pixels->b->__get((readPosition - (int)1));
HXLINE( 174)								readPosition = (readPosition + (int)1);
HXDLIN( 174)								g = pixels->b->__get((readPosition - (int)1));
HXLINE( 175)								readPosition = (readPosition + (int)1);
HXDLIN( 175)								b = pixels->b->__get((readPosition - (int)1));
HXLINE( 177)								{
HXLINE( 177)									position = (position + (int)1);
HXDLIN( 177)									data->b[(position - (int)1)] = b;
            								}
HXLINE( 178)								{
HXLINE( 178)									position = (position + (int)1);
HXDLIN( 178)									data->b[(position - (int)1)] = g;
            								}
HXLINE( 179)								{
HXLINE( 179)									position = (position + (int)1);
HXDLIN( 179)									data->b[(position - (int)1)] = r;
            								}
            							}
            						}
HXLINE( 183)						{
HXLINE( 183)							HX_VARI_NAME( int,_g31,"_g3") = (int)0;
HXDLIN( 183)							HX_VARI_NAME( int,_g22,"_g2") = hx::Mod((image->width * (int)3),(int)4);
HXDLIN( 183)							while((_g31 < _g22)){
HXLINE( 183)								_g31 = (_g31 + (int)1);
HXLINE( 185)								{
HXLINE( 185)									position = (position + (int)1);
HXDLIN( 185)									data->b[(position - (int)1)] = (int)0;
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 107)					HX_VARI_NAME( int,_g11,"_g1") = (int)0;
HXDLIN( 107)					HX_VARI_NAME( int,_g4,"_g") = image->height;
HXDLIN( 107)					while((_g11 < _g4)){
HXLINE( 107)						_g11 = (_g11 + (int)1);
HXLINE( 109)						readPosition = ((((image->height - (int)1) - (_g11 - (int)1)) * (int)4) * image->width);
HXLINE( 111)						{
HXLINE( 111)							HX_VARI_NAME( int,_g32,"_g3") = (int)0;
HXDLIN( 111)							HX_VARI_NAME( int,_g23,"_g2") = image->width;
HXDLIN( 111)							while((_g32 < _g23)){
HXLINE( 111)								_g32 = (_g32 + (int)1);
HXLINE( 113)								readPosition = (readPosition + (int)1);
HXDLIN( 113)								a = pixels->b->__get((readPosition - (int)1));
HXLINE( 114)								readPosition = (readPosition + (int)1);
HXDLIN( 114)								r = pixels->b->__get((readPosition - (int)1));
HXLINE( 115)								readPosition = (readPosition + (int)1);
HXDLIN( 115)								g = pixels->b->__get((readPosition - (int)1));
HXLINE( 116)								readPosition = (readPosition + (int)1);
HXDLIN( 116)								b = pixels->b->__get((readPosition - (int)1));
HXLINE( 118)								{
HXLINE( 118)									position = (position + (int)1);
HXDLIN( 118)									data->b[(position - (int)1)] = b;
            								}
HXLINE( 119)								{
HXLINE( 119)									position = (position + (int)1);
HXDLIN( 119)									data->b[(position - (int)1)] = g;
            								}
HXLINE( 120)								{
HXLINE( 120)									position = (position + (int)1);
HXDLIN( 120)									data->b[(position - (int)1)] = r;
            								}
HXLINE( 121)								{
HXLINE( 121)									position = (position + (int)1);
HXDLIN( 121)									data->b[(position - (int)1)] = a;
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 129)					HX_VARI(  ::haxe::io::Bytes,andMask) = ::haxe::io::Bytes_obj::alloc((image->width * image->height));
HXLINE( 130)					HX_VARI( int,maskPosition) = (int)0;
HXLINE( 132)					{
HXLINE( 132)						HX_VARI_NAME( int,_g12,"_g1") = (int)0;
HXDLIN( 132)						HX_VARI_NAME( int,_g5,"_g") = image->height;
HXDLIN( 132)						while((_g12 < _g5)){
HXLINE( 132)							_g12 = (_g12 + (int)1);
HXLINE( 134)							readPosition = ((((image->height - (int)1) - (_g12 - (int)1)) * (int)4) * image->width);
HXLINE( 136)							{
HXLINE( 136)								HX_VARI_NAME( int,_g33,"_g3") = (int)0;
HXDLIN( 136)								HX_VARI_NAME( int,_g24,"_g2") = image->width;
HXDLIN( 136)								while((_g33 < _g24)){
HXLINE( 136)									_g33 = (_g33 + (int)1);
HXLINE( 138)									readPosition = (readPosition + (int)1);
HXDLIN( 138)									a = pixels->b->__get((readPosition - (int)1));
HXLINE( 139)									readPosition = (readPosition + (int)1);
HXDLIN( 139)									r = pixels->b->__get((readPosition - (int)1));
HXLINE( 140)									readPosition = (readPosition + (int)1);
HXDLIN( 140)									g = pixels->b->__get((readPosition - (int)1));
HXLINE( 141)									readPosition = (readPosition + (int)1);
HXDLIN( 141)									b = pixels->b->__get((readPosition - (int)1));
HXLINE( 143)									{
HXLINE( 143)										position = (position + (int)1);
HXDLIN( 143)										data->b[(position - (int)1)] = b;
            									}
HXLINE( 144)									{
HXLINE( 144)										position = (position + (int)1);
HXDLIN( 144)										data->b[(position - (int)1)] = g;
            									}
HXLINE( 145)									{
HXLINE( 145)										position = (position + (int)1);
HXDLIN( 145)										data->b[(position - (int)1)] = r;
            									}
HXLINE( 146)									{
HXLINE( 146)										position = (position + (int)1);
HXDLIN( 146)										data->b[(position - (int)1)] = a;
            									}
HXLINE( 154)									{
HXLINE( 154)										maskPosition = (maskPosition + (int)1);
HXDLIN( 154)										andMask->b[(maskPosition - (int)1)] = (int)0;
            									}
            								}
            							}
            						}
            					}
HXLINE( 162)					data->blit(position,andMask,(int)0,(image->width * image->height));
            				}
            				break;
            			}
            		}
HXLINE( 195)		return data;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMP_obj,encode,return )


BMP_obj::BMP_obj()
{
}

bool BMP_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BMP_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BMP_obj_sStaticStorageInfo = 0;
#endif

static void BMP_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BMP_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#endif

hx::Class BMP_obj::__mClass;

static ::String BMP_obj_sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	::String(null())
};

void BMP_obj::__register()
{
	hx::Object *dummy = new BMP_obj;
	BMP_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.BMP","\x58","\xee","\xa1","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMP_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BMP_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BMP_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BMP_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BMP_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMP_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMP_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
