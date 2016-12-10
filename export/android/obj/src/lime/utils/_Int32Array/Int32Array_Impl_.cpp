// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__Int32Array_Int32Array_Impl_
#include <lime/utils/_Int32Array/Int32Array_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_95_subarray,"lime.utils._Int32Array.Int32Array_Impl_","subarray",0x0650d8e2,"lime.utils._Int32Array.Int32Array_Impl_.subarray","lime/utils/Int32Array.hx",95,0x9a557d3b)
HX_DEFINE_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_100_fromBytes,"lime.utils._Int32Array.Int32Array_Impl_","fromBytes",0x68e59db8,"lime.utils._Int32Array.Int32Array_Impl_.fromBytes","lime/utils/Int32Array.hx",100,0x9a557d3b)
HX_DEFINE_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_104_toBytes,"lime.utils._Int32Array.Int32Array_Impl_","toBytes",0xaed73c47,"lime.utils._Int32Array.Int32Array_Impl_.toBytes","lime/utils/Int32Array.hx",104,0x9a557d3b)
HX_DEFINE_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_109_get_length,"lime.utils._Int32Array.Int32Array_Impl_","get_length",0x84e00db8,"lime.utils._Int32Array.Int32Array_Impl_.get_length","lime/utils/Int32Array.hx",109,0x9a557d3b)
HX_DEFINE_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_115___get,"lime.utils._Int32Array.Int32Array_Impl_","__get",0x0da8750d,"lime.utils._Int32Array.Int32Array_Impl_.__get","lime/utils/Int32Array.hx",115,0x9a557d3b)
HX_DEFINE_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_121___set,"lime.utils._Int32Array.Int32Array_Impl_","__set",0x0db19019,"lime.utils._Int32Array.Int32Array_Impl_.__set","lime/utils/Int32Array.hx",121,0x9a557d3b)
HX_DEFINE_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_124_toString,"lime.utils._Int32Array.Int32Array_Impl_","toString",0x373e5575,"lime.utils._Int32Array.Int32Array_Impl_.toString","lime/utils/Int32Array.hx",124,0x9a557d3b)
HX_DEFINE_STACK_FRAME(_hx_pos_0d29a7d2e6a1bcbb_68_boot,"lime.utils._Int32Array.Int32Array_Impl_","boot",0x1da4b07b,"lime.utils._Int32Array.Int32Array_Impl_.boot","lime/utils/Int32Array.hx",68,0x9a557d3b)
namespace lime{
namespace utils{
namespace _Int32Array{

void Int32Array_Impl__obj::__construct() { }

Dynamic Int32Array_Impl__obj::__CreateEmpty() { return new Int32Array_Impl__obj; }

void *Int32Array_Impl__obj::_hx_vtable = 0;

Dynamic Int32Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Int32Array_Impl__obj > _hx_result = new Int32Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Int32Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x304c4419;
}

int Int32Array_Impl__obj::BYTES_PER_ELEMENT;

 ::lime::utils::ArrayBufferView Int32Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_95_subarray)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(begin,"begin")
            	HX_STACK_ARG(end,"end")
HXLINE(  95)		HX_VARI( int,len) = (end - begin);
HXDLIN(  95)		HX_VARI( int,byte_offset) = (begin * this1->bytesPerElement);
HXDLIN(  95)		HX_VAR(  ::lime::utils::ArrayBufferView,view);
HXDLIN(  95)		switch((int)(this1->type)){
            			case (int)0: {
HXLINE(  95)				HX_STACK_DO_THROW(HX_("subarray on a blank ArrayBufferView",39,87,fd,19));
            			}
            			break;
            			case (int)1: {
HXLINE(  95)				HX_VARI(  ::haxe::io::Bytes,buffer) = this1->buffer;
HXDLIN(  95)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this2,"this");
HXDLIN(  95)				if (hx::IsNotNull( buffer )) {
HXLINE(  95)					HX_VARI(  ::lime::utils::ArrayBufferView,_this) =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)1);
HXDLIN(  95)					if ((byte_offset < (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					if ((hx::Mod(byte_offset,_this->bytesPerElement) != (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					HX_VARI( int,bufferByteLength) = buffer->length;
HXDLIN(  95)					HX_VARI( int,newByteLength) = bufferByteLength;
HXDLIN(  95)					if (hx::IsNull( len )) {
HXLINE(  95)						newByteLength = (bufferByteLength - byte_offset);
HXDLIN(  95)						if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  95)						if ((newByteLength < (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  95)						newByteLength = (len * _this->bytesPerElement);
HXDLIN(  95)						if (((byte_offset + newByteLength) > bufferByteLength)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  95)					_this->buffer = buffer;
HXDLIN(  95)					_this->byteOffset = byte_offset;
HXDLIN(  95)					_this->byteLength = newByteLength;
HXDLIN(  95)					_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN(  95)					this2 = _this;
            				}
            				else {
HXLINE(  95)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int8Array",40,53,da,77));
            				}
HXDLIN(  95)				view = this2;
            			}
            			break;
            			case (int)2: {
HXLINE(  95)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer1,"buffer") = this1->buffer;
HXDLIN(  95)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this3,"this");
HXDLIN(  95)				if (hx::IsNotNull( buffer1 )) {
HXLINE(  95)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this1,"_this") =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)2);
HXDLIN(  95)					if ((byte_offset < (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					if ((hx::Mod(byte_offset,_this1->bytesPerElement) != (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					HX_VARI_NAME( int,bufferByteLength1,"bufferByteLength") = buffer1->length;
HXDLIN(  95)					HX_VARI_NAME( int,newByteLength1,"newByteLength") = bufferByteLength1;
HXDLIN(  95)					if (hx::IsNull( len )) {
HXLINE(  95)						newByteLength1 = (bufferByteLength1 - byte_offset);
HXDLIN(  95)						if ((hx::Mod(bufferByteLength1,_this1->bytesPerElement) != (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  95)						if ((newByteLength1 < (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  95)						newByteLength1 = (len * _this1->bytesPerElement);
HXDLIN(  95)						if (((byte_offset + newByteLength1) > bufferByteLength1)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  95)					_this1->buffer = buffer1;
HXDLIN(  95)					_this1->byteOffset = byte_offset;
HXDLIN(  95)					_this1->byteLength = newByteLength1;
HXDLIN(  95)					_this1->length = ::Std_obj::_hx_int(((Float)newByteLength1 / (Float)_this1->bytesPerElement));
HXDLIN(  95)					this3 = _this1;
            				}
            				else {
HXLINE(  95)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7));
            				}
HXDLIN(  95)				view = this3;
            			}
            			break;
            			case (int)3: {
HXLINE(  95)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer2,"buffer") = this1->buffer;
HXDLIN(  95)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this4,"this");
HXDLIN(  95)				if (hx::IsNotNull( buffer2 )) {
HXLINE(  95)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this2,"_this") =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)3);
HXDLIN(  95)					if ((byte_offset < (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					if ((hx::Mod(byte_offset,_this2->bytesPerElement) != (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					HX_VARI_NAME( int,bufferByteLength2,"bufferByteLength") = buffer2->length;
HXDLIN(  95)					HX_VARI_NAME( int,newByteLength2,"newByteLength") = bufferByteLength2;
HXDLIN(  95)					if (hx::IsNull( len )) {
HXLINE(  95)						newByteLength2 = (bufferByteLength2 - byte_offset);
HXDLIN(  95)						if ((hx::Mod(bufferByteLength2,_this2->bytesPerElement) != (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  95)						if ((newByteLength2 < (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  95)						newByteLength2 = (len * _this2->bytesPerElement);
HXDLIN(  95)						if (((byte_offset + newByteLength2) > bufferByteLength2)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  95)					_this2->buffer = buffer2;
HXDLIN(  95)					_this2->byteOffset = byte_offset;
HXDLIN(  95)					_this2->byteLength = newByteLength2;
HXDLIN(  95)					_this2->length = ::Std_obj::_hx_int(((Float)newByteLength2 / (Float)_this2->bytesPerElement));
HXDLIN(  95)					this4 = _this2;
            				}
            				else {
HXLINE(  95)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61));
            				}
HXDLIN(  95)				view = this4;
            			}
            			break;
            			case (int)4: {
HXLINE(  95)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer3,"buffer") = this1->buffer;
HXDLIN(  95)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this5,"this");
HXDLIN(  95)				if (hx::IsNotNull( buffer3 )) {
HXLINE(  95)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this3,"_this") =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN(  95)					if ((byte_offset < (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					if ((hx::Mod(byte_offset,_this3->bytesPerElement) != (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					HX_VARI_NAME( int,bufferByteLength3,"bufferByteLength") = buffer3->length;
HXDLIN(  95)					HX_VARI_NAME( int,newByteLength3,"newByteLength") = bufferByteLength3;
HXDLIN(  95)					if (hx::IsNull( len )) {
HXLINE(  95)						newByteLength3 = (bufferByteLength3 - byte_offset);
HXDLIN(  95)						if ((hx::Mod(bufferByteLength3,_this3->bytesPerElement) != (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  95)						if ((newByteLength3 < (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  95)						newByteLength3 = (len * _this3->bytesPerElement);
HXDLIN(  95)						if (((byte_offset + newByteLength3) > bufferByteLength3)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  95)					_this3->buffer = buffer3;
HXDLIN(  95)					_this3->byteOffset = byte_offset;
HXDLIN(  95)					_this3->byteLength = newByteLength3;
HXDLIN(  95)					_this3->length = ::Std_obj::_hx_int(((Float)newByteLength3 / (Float)_this3->bytesPerElement));
HXDLIN(  95)					this5 = _this3;
            				}
            				else {
HXLINE(  95)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Uint8Array",8b,64,02,e4));
            				}
HXDLIN(  95)				view = this5;
            			}
            			break;
            			case (int)5: {
HXLINE(  95)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer4,"buffer") = this1->buffer;
HXDLIN(  95)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this6,"this");
HXDLIN(  95)				if (hx::IsNotNull( buffer4 )) {
HXLINE(  95)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this4,"_this") =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)5);
HXDLIN(  95)					if ((byte_offset < (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					if ((hx::Mod(byte_offset,_this4->bytesPerElement) != (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					HX_VARI_NAME( int,bufferByteLength4,"bufferByteLength") = buffer4->length;
HXDLIN(  95)					HX_VARI_NAME( int,newByteLength4,"newByteLength") = bufferByteLength4;
HXDLIN(  95)					if (hx::IsNull( len )) {
HXLINE(  95)						newByteLength4 = (bufferByteLength4 - byte_offset);
HXDLIN(  95)						if ((hx::Mod(bufferByteLength4,_this4->bytesPerElement) != (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  95)						if ((newByteLength4 < (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  95)						newByteLength4 = (len * _this4->bytesPerElement);
HXDLIN(  95)						if (((byte_offset + newByteLength4) > bufferByteLength4)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  95)					_this4->buffer = buffer4;
HXDLIN(  95)					_this4->byteOffset = byte_offset;
HXDLIN(  95)					_this4->byteLength = newByteLength4;
HXDLIN(  95)					_this4->length = ::Std_obj::_hx_int(((Float)newByteLength4 / (Float)_this4->bytesPerElement));
HXDLIN(  95)					this6 = _this4;
            				}
            				else {
HXLINE(  95)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Uint8ClampedArray",6d,2a,7c,f9));
            				}
HXDLIN(  95)				view = this6;
            			}
            			break;
            			case (int)6: {
HXLINE(  95)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer5,"buffer") = this1->buffer;
HXDLIN(  95)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this7,"this");
HXDLIN(  95)				if (hx::IsNotNull( buffer5 )) {
HXLINE(  95)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this5,"_this") =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)6);
HXDLIN(  95)					if ((byte_offset < (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					if ((hx::Mod(byte_offset,_this5->bytesPerElement) != (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					HX_VARI_NAME( int,bufferByteLength5,"bufferByteLength") = buffer5->length;
HXDLIN(  95)					HX_VARI_NAME( int,newByteLength5,"newByteLength") = bufferByteLength5;
HXDLIN(  95)					if (hx::IsNull( len )) {
HXLINE(  95)						newByteLength5 = (bufferByteLength5 - byte_offset);
HXDLIN(  95)						if ((hx::Mod(bufferByteLength5,_this5->bytesPerElement) != (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  95)						if ((newByteLength5 < (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  95)						newByteLength5 = (len * _this5->bytesPerElement);
HXDLIN(  95)						if (((byte_offset + newByteLength5) > bufferByteLength5)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  95)					_this5->buffer = buffer5;
HXDLIN(  95)					_this5->byteOffset = byte_offset;
HXDLIN(  95)					_this5->byteLength = newByteLength5;
HXDLIN(  95)					_this5->length = ::Std_obj::_hx_int(((Float)newByteLength5 / (Float)_this5->bytesPerElement));
HXDLIN(  95)					this7 = _this5;
            				}
            				else {
HXLINE(  95)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Uint16Array",ea,c2,7c,de));
            				}
HXDLIN(  95)				view = this7;
            			}
            			break;
            			case (int)7: {
HXLINE(  95)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer6,"buffer") = this1->buffer;
HXDLIN(  95)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this8,"this");
HXDLIN(  95)				if (hx::IsNotNull( buffer6 )) {
HXLINE(  95)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this6,"_this") =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)7);
HXDLIN(  95)					if ((byte_offset < (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					if ((hx::Mod(byte_offset,_this6->bytesPerElement) != (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					HX_VARI_NAME( int,bufferByteLength6,"bufferByteLength") = buffer6->length;
HXDLIN(  95)					HX_VARI_NAME( int,newByteLength6,"newByteLength") = bufferByteLength6;
HXDLIN(  95)					if (hx::IsNull( len )) {
HXLINE(  95)						newByteLength6 = (bufferByteLength6 - byte_offset);
HXDLIN(  95)						if ((hx::Mod(bufferByteLength6,_this6->bytesPerElement) != (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  95)						if ((newByteLength6 < (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  95)						newByteLength6 = (len * _this6->bytesPerElement);
HXDLIN(  95)						if (((byte_offset + newByteLength6) > bufferByteLength6)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  95)					_this6->buffer = buffer6;
HXDLIN(  95)					_this6->byteOffset = byte_offset;
HXDLIN(  95)					_this6->byteLength = newByteLength6;
HXDLIN(  95)					_this6->length = ::Std_obj::_hx_int(((Float)newByteLength6 / (Float)_this6->bytesPerElement));
HXDLIN(  95)					this8 = _this6;
            				}
            				else {
HXLINE(  95)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Uint32Array",f0,3e,3a,98));
            				}
HXDLIN(  95)				view = this8;
            			}
            			break;
            			case (int)8: {
HXLINE(  95)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer7,"buffer") = this1->buffer;
HXDLIN(  95)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this9,"this");
HXDLIN(  95)				if (hx::IsNotNull( buffer7 )) {
HXLINE(  95)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this7,"_this") =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)8);
HXDLIN(  95)					if ((byte_offset < (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					if ((hx::Mod(byte_offset,_this7->bytesPerElement) != (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					HX_VARI_NAME( int,bufferByteLength7,"bufferByteLength") = buffer7->length;
HXDLIN(  95)					HX_VARI_NAME( int,newByteLength7,"newByteLength") = bufferByteLength7;
HXDLIN(  95)					if (hx::IsNull( len )) {
HXLINE(  95)						newByteLength7 = (bufferByteLength7 - byte_offset);
HXDLIN(  95)						if ((hx::Mod(bufferByteLength7,_this7->bytesPerElement) != (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  95)						if ((newByteLength7 < (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  95)						newByteLength7 = (len * _this7->bytesPerElement);
HXDLIN(  95)						if (((byte_offset + newByteLength7) > bufferByteLength7)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  95)					_this7->buffer = buffer7;
HXDLIN(  95)					_this7->byteOffset = byte_offset;
HXDLIN(  95)					_this7->byteLength = newByteLength7;
HXDLIN(  95)					_this7->length = ::Std_obj::_hx_int(((Float)newByteLength7 / (Float)_this7->bytesPerElement));
HXDLIN(  95)					this9 = _this7;
            				}
            				else {
HXLINE(  95)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            				}
HXDLIN(  95)				view = this9;
            			}
            			break;
            			case (int)9: {
HXLINE(  95)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer8,"buffer") = this1->buffer;
HXDLIN(  95)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this10,"this");
HXDLIN(  95)				if (hx::IsNotNull( buffer8 )) {
HXLINE(  95)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this8,"_this") =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)9);
HXDLIN(  95)					if ((byte_offset < (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					if ((hx::Mod(byte_offset,_this8->bytesPerElement) != (int)0)) {
HXLINE(  95)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  95)					HX_VARI_NAME( int,bufferByteLength8,"bufferByteLength") = buffer8->length;
HXDLIN(  95)					HX_VARI_NAME( int,newByteLength8,"newByteLength") = bufferByteLength8;
HXDLIN(  95)					if (hx::IsNull( len )) {
HXLINE(  95)						newByteLength8 = (bufferByteLength8 - byte_offset);
HXDLIN(  95)						if ((hx::Mod(bufferByteLength8,_this8->bytesPerElement) != (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  95)						if ((newByteLength8 < (int)0)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  95)						newByteLength8 = (len * _this8->bytesPerElement);
HXDLIN(  95)						if (((byte_offset + newByteLength8) > bufferByteLength8)) {
HXLINE(  95)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  95)					_this8->buffer = buffer8;
HXDLIN(  95)					_this8->byteOffset = byte_offset;
HXDLIN(  95)					_this8->byteLength = newByteLength8;
HXDLIN(  95)					_this8->length = ::Std_obj::_hx_int(((Float)newByteLength8 / (Float)_this8->bytesPerElement));
HXDLIN(  95)					this10 = _this8;
            				}
            				else {
HXLINE(  95)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e));
            				}
HXDLIN(  95)				view = this10;
            			}
            			break;
            		}
HXDLIN(  95)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int32Array_Impl__obj,subarray,return )

 ::lime::utils::ArrayBufferView Int32Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes, ::Dynamic __o_byteOffset, ::Dynamic len){
 ::Dynamic byteOffset = __o_byteOffset.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_100_fromBytes)
            	HX_STACK_ARG(bytes,"bytes")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(len,"len")
HXLINE( 100)		HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this1,"this");
HXDLIN( 100)		if (hx::IsNotNull( bytes )) {
HXLINE( 100)			HX_VARI(  ::lime::utils::ArrayBufferView,_this) =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)3);
HXDLIN( 100)			if (hx::IsLess( byteOffset,(int)0 )) {
HXLINE( 100)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 100)			if ((hx::Mod(byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 100)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 100)			HX_VARI( int,bufferByteLength) = bytes->length;
HXDLIN( 100)			HX_VARI( int,newByteLength) = bufferByteLength;
HXDLIN( 100)			if (hx::IsNull( len )) {
HXLINE( 100)				newByteLength = (bufferByteLength - byteOffset);
HXDLIN( 100)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 100)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 100)				if ((newByteLength < (int)0)) {
HXLINE( 100)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
            			else {
HXLINE( 100)				newByteLength = (len * _this->bytesPerElement);
HXDLIN( 100)				if (((byteOffset + newByteLength) > bufferByteLength)) {
HXLINE( 100)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 100)			_this->buffer = bytes;
HXDLIN( 100)			_this->byteOffset = byteOffset;
HXDLIN( 100)			_this->byteLength = newByteLength;
HXDLIN( 100)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 100)			this1 = _this;
            		}
            		else {
HXLINE( 100)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61));
            		}
HXDLIN( 100)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int32Array_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes Int32Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_104_toBytes)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 104)		return this1->buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,toBytes,return )

int Int32Array_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_109_get_length)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 109)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,get_length,return )

int Int32Array_Impl__obj::__get( ::lime::utils::ArrayBufferView this1,int idx){
            	HX_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_115___get)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(idx,"idx")
HXLINE( 115)		return ::__hxcpp_memory_get_i32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int32Array_Impl__obj,__get,return )

int Int32Array_Impl__obj::__set( ::lime::utils::ArrayBufferView this1,int idx,int val){
            	HX_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_121___set)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(idx,"idx")
            	HX_STACK_ARG(val,"val")
HXLINE( 121)		::__hxcpp_memory_set_i32(this1->buffer->b,(this1->byteOffset + (idx * (int)4)),val);
HXDLIN( 121)		return val;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int32Array_Impl__obj,__set,return )

::String Int32Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_124_toString)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 124)		if (hx::IsNotNull( this1 )) {
HXLINE( 124)			return ((((HX_("Int32Array [byteLength:",a6,a7,b7,bd) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
            		else {
HXLINE( 124)			return null();
            		}
HXDLIN( 124)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int32Array_Impl__obj,toString,return )


Int32Array_Impl__obj::Int32Array_Impl__obj()
{
}

bool Int32Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { outValue = __get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__set") ) { outValue = __set_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Int32Array_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Int32Array_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Int32Array_Impl__obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Int32Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int32Array_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Int32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Int32Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int32Array_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Int32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Int32Array_Impl__obj::__mClass;

static ::String Int32Array_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Int32Array_Impl__obj::__register()
{
	hx::Object *dummy = new Int32Array_Impl__obj;
	Int32Array_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._Int32Array.Int32Array_Impl_","\xc5","\x98","\x8c","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int32Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Int32Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Int32Array_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Int32Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Int32Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Int32Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Int32Array_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Int32Array_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0d29a7d2e6a1bcbb_68_boot)
HXLINE(  68)		BYTES_PER_ELEMENT = (int)4;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _Int32Array
