// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_Assets
#include <lime/Assets.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_Bytes
#include <lime/utils/Bytes.h>
#endif
#ifndef INCLUDED_openfl_AssetCache
#include <openfl/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_IAssetCache
#include <openfl/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_53_addEventListener,"openfl.Assets","addEventListener",0x08307d1a,"openfl.Assets.addEventListener","openfl/Assets.hx",53,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_68_dispatchEvent,"openfl.Assets","dispatchEvent",0xff6e3393,"openfl.Assets.dispatchEvent","openfl/Assets.hx",68,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_80_exists,"openfl.Assets","exists",0xd3fc5ce9,"openfl.Assets.exists","openfl/Assets.hx",80,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_130_getBitmapData,"openfl.Assets","getBitmapData",0xc93c7e82,"openfl.Assets.getBitmapData","openfl/Assets.hx",130,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_143_getBytes,"openfl.Assets","getBytes",0xa062f442,"openfl.Assets.getBytes","openfl/Assets.hx",143,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_187_getFont,"openfl.Assets","getFont",0x9addf9d8,"openfl.Assets.getFont","openfl/Assets.hx",187,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_194_getLibrary,"openfl.Assets","getLibrary",0x9baef692,"openfl.Assets.getLibrary","openfl/Assets.hx",194,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_241_getMovieClip,"openfl.Assets","getMovieClip",0x1d5e25f7,"openfl.Assets.getMovieClip","openfl/Assets.hx",241,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_260_getMusic,"openfl.Assets","getMusic",0xf325bc7c,"openfl.Assets.getMusic","openfl/Assets.hx",260,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_285_getPath,"openfl.Assets","getPath",0xa16f81ae,"openfl.Assets.getPath","openfl/Assets.hx",285,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_345_getSound,"openfl.Assets","getSound",0x639778a6,"openfl.Assets.getSound","openfl/Assets.hx",345,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_358_getText,"openfl.Assets","getText",0xa41768b6,"openfl.Assets.getText","openfl/Assets.hx",358,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_365_hasEventListener,"openfl.Assets","hasEventListener",0x23b6a041,"openfl.Assets.hasEventListener","openfl/Assets.hx",365,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_415_isLocal,"openfl.Assets","isLocal",0x9a115974,"openfl.Assets.isLocal","openfl/Assets.hx",415,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_443_isValidBitmapData,"openfl.Assets","isValidBitmapData",0xc2fb171e,"openfl.Assets.isValidBitmapData","openfl/Assets.hx",443,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_459_isValidSound,"openfl.Assets","isValidSound",0x9717a58a,"openfl.Assets.isValidSound","openfl/Assets.hx",459,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_473_list,"openfl.Assets","list",0xb0f58e2b,"openfl.Assets.list","openfl/Assets.hx",473,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_486_loadBitmapData,"openfl.Assets","loadBitmapData",0x79a7538c,"openfl.Assets.loadBitmapData","openfl/Assets.hx",486,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_495_loadBitmapData,"openfl.Assets","loadBitmapData",0x79a7538c,"openfl.Assets.loadBitmapData","openfl/Assets.hx",495,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_555_loadBytes,"openfl.Assets","loadBytes",0xeb3c3b78,"openfl.Assets.loadBytes","openfl/Assets.hx",555,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_563_loadBytes,"openfl.Assets","loadBytes",0xeb3c3b78,"openfl.Assets.loadBytes","openfl/Assets.hx",563,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_565_loadBytes,"openfl.Assets","loadBytes",0xeb3c3b78,"openfl.Assets.loadBytes","openfl/Assets.hx",565,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_566_loadBytes,"openfl.Assets","loadBytes",0xeb3c3b78,"openfl.Assets.loadBytes","openfl/Assets.hx",566,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_567_loadBytes,"openfl.Assets","loadBytes",0xeb3c3b78,"openfl.Assets.loadBytes","openfl/Assets.hx",567,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_584_loadFont,"openfl.Assets","loadFont",0x37540b62,"openfl.Assets.loadFont","openfl/Assets.hx",584,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_593_loadFont,"openfl.Assets","loadFont",0x37540b62,"openfl.Assets.loadFont","openfl/Assets.hx",593,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_637_loadLibrary,"openfl.Assets","loadLibrary",0x44d0f748,"openfl.Assets.loadLibrary","openfl/Assets.hx",637,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_644_loadLibrary,"openfl.Assets","loadLibrary",0x44d0f748,"openfl.Assets.loadLibrary","openfl/Assets.hx",644,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_671_loadMusic,"openfl.Assets","loadMusic",0x3dff03b2,"openfl.Assets.loadMusic","openfl/Assets.hx",671,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_661_loadMusic,"openfl.Assets","loadMusic",0x3dff03b2,"openfl.Assets.loadMusic","openfl/Assets.hx",661,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_705_loadMovieClip,"openfl.Assets","loadMovieClip",0xd38a402d,"openfl.Assets.loadMovieClip","openfl/Assets.hx",705,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_712_loadMovieClip,"openfl.Assets","loadMovieClip",0xd38a402d,"openfl.Assets.loadMovieClip","openfl/Assets.hx",712,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_765_loadSound,"openfl.Assets","loadSound",0xae70bfdc,"openfl.Assets.loadSound","openfl/Assets.hx",765,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_755_loadSound,"openfl.Assets","loadSound",0xae70bfdc,"openfl.Assets.loadSound","openfl/Assets.hx",755,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_799_loadText,"openfl.Assets","loadText",0x408d7a40,"openfl.Assets.loadText","openfl/Assets.hx",799,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_806_loadText,"openfl.Assets","loadText",0x408d7a40,"openfl.Assets.loadText","openfl/Assets.hx",806,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_822_registerLibrary,"openfl.Assets","registerLibrary",0x9230822b,"openfl.Assets.registerLibrary","openfl/Assets.hx",822,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_829_removeEventListener,"openfl.Assets","removeEventListener",0x6a2b249d,"openfl.Assets.removeEventListener","openfl/Assets.hx",829,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_836_resolveClass,"openfl.Assets","resolveClass",0x76ca4479,"openfl.Assets.resolveClass","openfl/Assets.hx",836,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_855_resolveEnum,"openfl.Assets","resolveEnum",0x1314a1e0,"openfl.Assets.resolveEnum","openfl/Assets.hx",855,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_862_unloadLibrary,"openfl.Assets","unloadLibrary",0x6a51c84f,"openfl.Assets.unloadLibrary","openfl/Assets.hx",862,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_876_LimeAssets_onChange,"openfl.Assets","LimeAssets_onChange",0xaa15d389,"openfl.Assets.LimeAssets_onChange","openfl/Assets.hx",876,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_48_boot,"openfl.Assets","boot",0xaa5df5ff,"openfl.Assets.boot","openfl/Assets.hx",48,0x989d477c)
HX_DEFINE_STACK_FRAME(_hx_pos_57dc78607c4f26c0_50_boot,"openfl.Assets","boot",0xaa5df5ff,"openfl.Assets.boot","openfl/Assets.hx",50,0x989d477c)
namespace openfl{

void Assets_obj::__construct() { }

Dynamic Assets_obj::__CreateEmpty() { return new Assets_obj; }

void *Assets_obj::_hx_vtable = 0;

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Assets_obj > _hx_result = new Assets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Assets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f71c1bb;
}

::Dynamic Assets_obj::cache;

 ::openfl::events::EventDispatcher Assets_obj::dispatcher;

void Assets_obj::addEventListener(::String type, ::Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_53_addEventListener)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(useCapture,"useCapture")
            	HX_STACK_ARG(priority,"priority")
            	HX_STACK_ARG(useWeakReference,"useWeakReference")
HXLINE(  55)		if (!(::lime::Assets_obj::onChange->has(::openfl::Assets_obj::LimeAssets_onChange_dyn()))) {
HXLINE(  57)			::lime::Assets_obj::onChange->add(::openfl::Assets_obj::LimeAssets_onChange_dyn(),null(),null());
            		}
HXLINE(  61)		::openfl::Assets_obj::dispatcher->addEventListener(type,listener,useCapture,priority,useWeakReference);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assets_obj,addEventListener,(void))

bool Assets_obj::dispatchEvent( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_68_dispatchEvent)
            	HX_STACK_ARG(event,"event")
HXLINE(  68)		return ::openfl::Assets_obj::dispatcher->dispatchEvent(event);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,dispatchEvent,return )

bool Assets_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_80_exists)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(type,"type")
HXLINE(  80)		return ::lime::Assets_obj::exists(id,type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

 ::openfl::display::BitmapData Assets_obj::getBitmapData(::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_130_getBitmapData)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 130)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

 ::openfl::utils::ByteArrayData Assets_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_143_getBytes)
            	HX_STACK_ARG(id,"id")
HXLINE( 143)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(::lime::Assets_obj::getBytes(id));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

 ::openfl::text::Font Assets_obj::getFont(::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_187_getFont)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 187)		return  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

 ::lime::AssetLibrary Assets_obj::getLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_194_getLibrary)
            	HX_STACK_ARG(name,"name")
HXLINE( 194)		return ::lime::Assets_obj::getLibrary(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

 ::openfl::display::MovieClip Assets_obj::getMovieClip(::String id){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_241_getMovieClip)
            	HX_STACK_ARG(id,"id")
HXLINE( 241)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

 ::openfl::media::Sound Assets_obj::getMusic(::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_260_getMusic)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 260)		return ::openfl::media::Sound_obj::fromAudioBuffer(::lime::Assets_obj::getAudioBuffer(id,useCache));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getMusic,return )

::String Assets_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_285_getPath)
            	HX_STACK_ARG(id,"id")
HXLINE( 285)		return ::lime::Assets_obj::getPath(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

 ::openfl::media::Sound Assets_obj::getSound(::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_345_getSound)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 345)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getSound,return )

::String Assets_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_358_getText)
            	HX_STACK_ARG(id,"id")
HXLINE( 358)		return ::lime::Assets_obj::getText(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

bool Assets_obj::hasEventListener(::String type){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_365_hasEventListener)
            	HX_STACK_ARG(type,"type")
HXLINE( 365)		return ::openfl::Assets_obj::dispatcher->hasEventListener(type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasEventListener,return )

bool Assets_obj::isLocal(::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_415_isLocal)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 415)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidBitmapData( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_443_isValidBitmapData)
            	HX_STACK_ARG(bitmapData,"bitmapData")
HXLINE( 443)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidBitmapData,return )

bool Assets_obj::isValidSound( ::openfl::media::Sound sound){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_459_isValidSound)
            	HX_STACK_ARG(sound,"sound")
HXLINE( 459)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidSound,return )

::Array< ::String > Assets_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_473_list)
            	HX_STACK_ARG(type,"type")
HXLINE( 473)		return ::lime::Assets_obj::list(type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

 ::lime::app::Future Assets_obj::loadBitmapData(::String id, ::Dynamic __o_useCache, ::Dynamic handler){
 ::Dynamic useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_486_loadBitmapData)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
            	HX_STACK_ARG(handler,"handler")
HXLINE( 488)		if (hx::IsNull( useCache )) {
HXLINE( 488)			useCache = true;
            		}
HXLINE( 490)		HX_VARI(  ::lime::app::Promise,promise) =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 492)		if (hx::IsNotNull( handler )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,handler) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_495_loadBitmapData)
            				HX_STACK_ARG(_,"_")
HXLINE( 495)				handler(null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 494)			promise->future->onComplete(handler);
HXLINE( 495)			promise->future->onError( ::Dynamic(new _hx_Closure_0(handler)));
            		}
HXLINE( 542)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadBitmapData,return )

 ::lime::app::Future Assets_obj::loadBytes(::String id, ::Dynamic handler){
            	HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_555_loadBytes)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(handler,"handler")
HXLINE( 557)		HX_VARI(  ::lime::app::Promise,promise) =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 558)		HX_VARI(  ::lime::app::Future,future) = ::lime::Assets_obj::loadBytes(id);
HXLINE( 560)		if (hx::IsNotNull( handler )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,handler) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_563_loadBytes)
            				HX_STACK_ARG(_,"_")
HXLINE( 563)				handler(null());
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::lime::app::Promise,promise) HXARGC(1)
            			void _hx_run( ::lime::utils::Bytes bytes){
            				HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_565_loadBytes)
            				HX_STACK_ARG(bytes,"bytes")
HXLINE( 565)				promise->complete(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(bytes));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_2, ::lime::app::Promise,promise) HXARGC(1)
            			void _hx_run(Float progress){
            				HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_566_loadBytes)
            				HX_STACK_ARG(progress,"progress")
HXLINE( 566)				promise->progress(progress);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_3, ::lime::app::Promise,promise) HXARGC(1)
            			void _hx_run( ::Dynamic msg){
            				HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_567_loadBytes)
            				HX_STACK_ARG(msg,"msg")
HXLINE( 567)				promise->error(msg);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 562)			promise->future->onComplete(handler);
HXLINE( 563)			promise->future->onError( ::Dynamic(new _hx_Closure_0(handler)));
HXLINE( 565)			future->onComplete( ::Dynamic(new _hx_Closure_1(promise)));
HXLINE( 566)			future->onProgress( ::Dynamic(new _hx_Closure_2(promise)));
HXLINE( 567)			future->onError( ::Dynamic(new _hx_Closure_3(promise)));
            		}
HXLINE( 571)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,return )

 ::lime::app::Future Assets_obj::loadFont(::String id, ::Dynamic __o_useCache, ::Dynamic handler){
 ::Dynamic useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_584_loadFont)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
            	HX_STACK_ARG(handler,"handler")
HXLINE( 586)		if (hx::IsNull( useCache )) {
HXLINE( 586)			useCache = true;
            		}
HXLINE( 588)		HX_VARI(  ::lime::app::Promise,promise) =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 590)		if (hx::IsNotNull( handler )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,handler) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_593_loadFont)
            				HX_STACK_ARG(_,"_")
HXLINE( 593)				handler(null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 592)			promise->future->onComplete(handler);
HXLINE( 593)			promise->future->onError( ::Dynamic(new _hx_Closure_0(handler)));
            		}
HXLINE( 626)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadFont,return )

 ::lime::app::Future Assets_obj::loadLibrary(::String name, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_637_loadLibrary)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(handler,"handler")
HXLINE( 639)		HX_VARI(  ::lime::app::Future,future) = ::lime::Assets_obj::loadLibrary(name);
HXLINE( 641)		if (hx::IsNotNull( handler )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,handler) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_644_loadLibrary)
            				HX_STACK_ARG(_,"_")
HXLINE( 644)				handler(null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 643)			future->onComplete(handler);
HXLINE( 644)			future->onError( ::Dynamic(new _hx_Closure_0(handler)));
            		}
HXLINE( 648)		return future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,return )

 ::lime::app::Future Assets_obj::loadMusic(::String id, ::Dynamic __o_useCache, ::Dynamic handler){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,id, ::lime::app::Promise,promise) HXARGC(1)
            		void _hx_run( ::lime::audio::AudioBuffer buffer){
            			HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_671_loadMusic)
            			HX_STACK_ARG(buffer,"buffer")
HXLINE( 671)			if (hx::IsNotNull( buffer )) {
HXLINE( 676)				 ::openfl::media::Sound _hx_tmp = ::openfl::media::Sound_obj::fromAudioBuffer(buffer);
HXDLIN( 676)				promise->complete(_hx_tmp);
            			}
            			else {
HXLINE( 681)				promise->error(((HX_("[Assets] Could not load Sound \"",64,be,27,e3) + id) + HX_("\"",22,00,00,00)));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

 ::Dynamic useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_661_loadMusic)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
            	HX_STACK_ARG(handler,"handler")
HXLINE( 663)		if (hx::IsNull( useCache )) {
HXLINE( 663)			useCache = true;
            		}
HXLINE( 667)		HX_VARI(  ::lime::app::Promise,promise) =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 669)		::lime::Assets_obj::loadAudioBuffer(id,useCache)->onComplete( ::Dynamic(new _hx_Closure_0(id,promise)))->onError(promise->error_dyn())->onProgress(promise->progress_dyn());
HXLINE( 686)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadMusic,return )

 ::lime::app::Future Assets_obj::loadMovieClip(::String id, ::Dynamic handler){
            	HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_705_loadMovieClip)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(handler,"handler")
HXLINE( 707)		HX_VARI(  ::lime::app::Promise,promise) =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 709)		if (hx::IsNotNull( handler )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,handler) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_712_loadMovieClip)
            				HX_STACK_ARG(_,"_")
HXLINE( 712)				handler(null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 711)			promise->future->onComplete(handler);
HXLINE( 712)			promise->future->onError( ::Dynamic(new _hx_Closure_0(handler)));
            		}
HXLINE( 742)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadMovieClip,return )

 ::lime::app::Future Assets_obj::loadSound(::String id, ::Dynamic __o_useCache, ::Dynamic handler){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,id, ::lime::app::Promise,promise) HXARGC(1)
            		void _hx_run( ::lime::audio::AudioBuffer buffer){
            			HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_765_loadSound)
            			HX_STACK_ARG(buffer,"buffer")
HXLINE( 765)			if (hx::IsNotNull( buffer )) {
HXLINE( 770)				 ::openfl::media::Sound _hx_tmp = ::openfl::media::Sound_obj::fromAudioBuffer(buffer);
HXDLIN( 770)				promise->complete(_hx_tmp);
            			}
            			else {
HXLINE( 775)				promise->error(((HX_("[Assets] Could not load Sound \"",64,be,27,e3) + id) + HX_("\"",22,00,00,00)));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

 ::Dynamic useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_755_loadSound)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
            	HX_STACK_ARG(handler,"handler")
HXLINE( 757)		if (hx::IsNull( useCache )) {
HXLINE( 757)			useCache = true;
            		}
HXLINE( 761)		HX_VARI(  ::lime::app::Promise,promise) =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 763)		::lime::Assets_obj::loadAudioBuffer(id,useCache)->onComplete( ::Dynamic(new _hx_Closure_0(id,promise)))->onError(promise->error_dyn())->onProgress(promise->progress_dyn());
HXLINE( 780)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadSound,return )

 ::lime::app::Future Assets_obj::loadText(::String id, ::Dynamic handler){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_799_loadText)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(handler,"handler")
HXLINE( 801)		HX_VARI(  ::lime::app::Future,future) = ::lime::Assets_obj::loadText(id);
HXLINE( 803)		if (hx::IsNotNull( handler )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,handler) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_806_loadText)
            				HX_STACK_ARG(_,"_")
HXLINE( 806)				handler(null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 805)			future->onComplete(handler);
HXLINE( 806)			future->onError( ::Dynamic(new _hx_Closure_0(handler)));
            		}
HXLINE( 810)		return future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,return )

void Assets_obj::registerLibrary(::String name, ::openfl::AssetLibrary library){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_822_registerLibrary)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(library,"library")
HXLINE( 822)		::lime::Assets_obj::registerLibrary(name,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

void Assets_obj::removeEventListener(::String type, ::Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_829_removeEventListener)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(capture,"capture")
HXLINE( 829)		::openfl::Assets_obj::dispatcher->removeEventListener(type,listener,capture);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,removeEventListener,(void))

hx::Class Assets_obj::resolveClass(::String name){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_836_resolveClass)
            	HX_STACK_ARG(name,"name")
HXLINE( 836)		return ::Type_obj::resolveClass(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

hx::Class Assets_obj::resolveEnum(::String name){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_855_resolveEnum)
            	HX_STACK_ARG(name,"name")
HXLINE( 855)		return ::Type_obj::resolveEnum(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

void Assets_obj::unloadLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_57dc78607c4f26c0_862_unloadLibrary)
            	HX_STACK_ARG(name,"name")
HXLINE( 862)		::lime::Assets_obj::unloadLibrary(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

void Assets_obj::LimeAssets_onChange(){
            	HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_876_LimeAssets_onChange)
HXLINE( 876)		::openfl::Assets_obj::dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,LimeAssets_onChange,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = cache; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getMusic") ) { outValue = getMusic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { outValue = loadMusic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadSound") ) { outValue = loadSound_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { outValue = dispatcher; return true; }
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { outValue = getMovieClip_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isValidSound") ) { outValue = isValidSound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { outValue = dispatchEvent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { outValue = loadMovieClip_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { outValue = loadBitmapData_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { outValue = addEventListener_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { outValue = hasEventListener_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidBitmapData") ) { outValue = isValidBitmapData_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { outValue = removeEventListener_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"LimeAssets_onChange") ) { outValue = LimeAssets_onChange_dyn(); return true; }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { dispatcher=ioValue.Cast<  ::openfl::events::EventDispatcher >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Assets_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Assets_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::IAssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*openfl::events::EventDispatcher*/ ,(void *) &Assets_obj::dispatcher,HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Assets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Assets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String Assets_obj_sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidBitmapData","\x0b","\x65","\xe4","\xe6"),
	HX_HCSTRING("isValidSound","\xbd","\x1e","\x2b","\xa1"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadBitmapData","\x7f","\xbf","\x71","\xca"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("LimeAssets_onChange","\xb6","\x36","\x60","\x95"),
	::String(null())
};

void Assets_obj::__register()
{
	hx::Object *dummy = new Assets_obj;
	Assets_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = Assets_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Assets_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Assets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Assets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Assets_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Assets_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_48_boot)
HXLINE(  48)		cache =  ::openfl::AssetCache_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_57dc78607c4f26c0_50_boot)
HXLINE(  50)		dispatcher =  ::openfl::events::EventDispatcher_obj::__alloc( HX_CTX ,null());
            	}
}

} // end namespace openfl
