// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_59_roundDecimal,"flixel.math.FlxMath","roundDecimal",0xaa14776b,"flixel.math.FlxMath.roundDecimal","flixel/math/FlxMath.hx",59,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_79_bound,"flixel.math.FlxMath","bound",0xac2681b6,"flixel.math.FlxMath.bound","flixel/math/FlxMath.hx",79,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_99_lerp,"flixel.math.FlxMath","lerp",0xfe2b17ff,"flixel.math.FlxMath.lerp","flixel/math/FlxMath.hx",99,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_112_inBounds,"flixel.math.FlxMath","inBounds",0x4dfc39c2,"flixel.math.FlxMath.inBounds","flixel/math/FlxMath.hx",112,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_120_isOdd,"flixel.math.FlxMath","isOdd",0xb67c8d5d,"flixel.math.FlxMath.isOdd","flixel/math/FlxMath.hx",120,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_128_isEven,"flixel.math.FlxMath","isEven",0xeff0abac,"flixel.math.FlxMath.isEven","flixel/math/FlxMath.hx",128,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_135_numericComparison,"flixel.math.FlxMath","numericComparison",0xd7f909ee,"flixel.math.FlxMath.numericComparison","flixel/math/FlxMath.hx",135,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_160_pointInCoordinates,"flixel.math.FlxMath","pointInCoordinates",0xc68dec2e,"flixel.math.FlxMath.pointInCoordinates","flixel/math/FlxMath.hx",160,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_181_pointInFlxRect,"flixel.math.FlxMath","pointInFlxRect",0x061f0269,"flixel.math.FlxMath.pointInFlxRect","flixel/math/FlxMath.hx",181,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_221_pointInRectangle,"flixel.math.FlxMath","pointInRectangle",0x49240aa2,"flixel.math.FlxMath.pointInRectangle","flixel/math/FlxMath.hx",221,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_235_maxAdd,"flixel.math.FlxMath","maxAdd",0x4db55565,"flixel.math.FlxMath.maxAdd","flixel/math/FlxMath.hx",235,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_260_wrap,"flixel.math.FlxMath","wrap",0x057a3f52,"flixel.math.FlxMath.wrap","flixel/math/FlxMath.hx",260,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_281_remapToRange,"flixel.math.FlxMath","remapToRange",0x60fbca01,"flixel.math.FlxMath.remapToRange","flixel/math/FlxMath.hx",281,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_296_dotProduct,"flixel.math.FlxMath","dotProduct",0x8564032e,"flixel.math.FlxMath.dotProduct","flixel/math/FlxMath.hx",296,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_304_vectorLength,"flixel.math.FlxMath","vectorLength",0x2dfefb91,"flixel.math.FlxMath.vectorLength","flixel/math/FlxMath.hx",304,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_315_distanceBetween,"flixel.math.FlxMath","distanceBetween",0x58607e8b,"flixel.math.FlxMath.distanceBetween","flixel/math/FlxMath.hx",315,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_332_isDistanceWithin,"flixel.math.FlxMath","isDistanceWithin",0x44c72392,"flixel.math.FlxMath.isDistanceWithin","flixel/math/FlxMath.hx",332,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_351_distanceToPoint,"flixel.math.FlxMath","distanceToPoint",0x84c0ed98,"flixel.math.FlxMath.distanceToPoint","flixel/math/FlxMath.hx",351,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_370_isDistanceToPointWithin,"flixel.math.FlxMath","isDistanceToPointWithin",0xb54ac0d9,"flixel.math.FlxMath.isDistanceToPointWithin","flixel/math/FlxMath.hx",370,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_426_distanceToTouch,"flixel.math.FlxMath","distanceToTouch",0xd2645107,"flixel.math.FlxMath.distanceToTouch","flixel/math/FlxMath.hx",426,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_442_isDistanceToTouchWithin,"flixel.math.FlxMath","isDistanceToTouchWithin",0x33e8e188,"flixel.math.FlxMath.isDistanceToTouchWithin","flixel/math/FlxMath.hx",442,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_457_getDecimals,"flixel.math.FlxMath","getDecimals",0x764a48f0,"flixel.math.FlxMath.getDecimals","flixel/math/FlxMath.hx",457,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_471_equal,"flixel.math.FlxMath","equal",0x67aca12c,"flixel.math.FlxMath.equal","flixel/math/FlxMath.hx",471,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_479_signOf,"flixel.math.FlxMath","signOf",0x43f3963c,"flixel.math.FlxMath.signOf","flixel/math/FlxMath.hx",479,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_487_sameSign,"flixel.math.FlxMath","sameSign",0xc637544b,"flixel.math.FlxMath.sameSign","flixel/math/FlxMath.hx",487,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_498_fastSin,"flixel.math.FlxMath","fastSin",0xce873d54,"flixel.math.FlxMath.fastSin","flixel/math/FlxMath.hx",498,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_531_fastCos,"flixel.math.FlxMath","fastCos",0xce7b1e83,"flixel.math.FlxMath.fastCos","flixel/math/FlxMath.hx",531,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_539_sinh,"flixel.math.FlxMath","sinh",0x02ce9bd8,"flixel.math.FlxMath.sinh","flixel/math/FlxMath.hx",539,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_547_maxInt,"flixel.math.FlxMath","maxInt",0x4dbb7033,"flixel.math.FlxMath.maxInt","flixel/math/FlxMath.hx",547,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_555_minInt,"flixel.math.FlxMath","minInt",0xe253f205,"flixel.math.FlxMath.minInt","flixel/math/FlxMath.hx",555,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_563_absInt,"flixel.math.FlxMath","absInt",0x118b9f25,"flixel.math.FlxMath.absInt","flixel/math/FlxMath.hx",563,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_24_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",24,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_29_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",29,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_33_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",33,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_37_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",37,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_41_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",41,0x837802f8)
HX_DEFINE_STACK_FRAME(_hx_pos_5d39d2fff62ba7b8_45_boot,"flixel.math.FlxMath","boot",0xf79689ba,"flixel.math.FlxMath.boot","flixel/math/FlxMath.hx",45,0x837802f8)
namespace flixel{
namespace math{

void FlxMath_obj::__construct() { }

Dynamic FlxMath_obj::__CreateEmpty() { return new FlxMath_obj; }

void *FlxMath_obj::_hx_vtable = 0;

Dynamic FlxMath_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxMath_obj > _hx_result = new FlxMath_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxMath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x523f5a4e;
}

Float FlxMath_obj::MIN_VALUE_FLOAT;

Float FlxMath_obj::MAX_VALUE_FLOAT;

int FlxMath_obj::MIN_VALUE_INT;

int FlxMath_obj::MAX_VALUE_INT;

Float FlxMath_obj::SQUARE_ROOT_OF_TWO;

Float FlxMath_obj::EPSILON;

Float FlxMath_obj::roundDecimal(Float Value,int Precision){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_59_roundDecimal)
            	HX_STACK_ARG(Value,"Value")
            	HX_STACK_ARG(Precision,"Precision")
HXLINE(  60)		HX_VARI( Float,mult) = (int)1;
HXLINE(  61)		{
HXLINE(  61)			HX_VARI( int,_g1) = (int)0;
HXDLIN(  61)			while((_g1 < Precision)){
HXLINE(  61)				_g1 = (_g1 + (int)1);
HXLINE(  63)				mult = (mult * (int)10);
            			}
            		}
HXLINE(  65)		return ((Float)::Math_obj::round((Value * mult)) / (Float)mult);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,roundDecimal,return )

Float FlxMath_obj::bound(Float Value, ::Dynamic Min, ::Dynamic Max){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_79_bound)
            	HX_STACK_ARG(Value,"Value")
            	HX_STACK_ARG(Min,"Min")
            	HX_STACK_ARG(Max,"Max")
HXLINE(  80)		HX_VAR( Float,lowerBound);
HXDLIN(  80)		bool lowerBound1;
HXDLIN(  80)		if (hx::IsNotNull( Min )) {
HXLINE(  80)			lowerBound1 = hx::IsLess( Value,Min );
            		}
            		else {
HXLINE(  80)			lowerBound1 = false;
            		}
HXDLIN(  80)		if (lowerBound1) {
HXLINE(  80)			lowerBound = Min;
            		}
            		else {
HXLINE(  80)			lowerBound = Value;
            		}
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if (hx::IsNotNull( Max )) {
HXLINE(  81)			_hx_tmp = hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  81)			return Max;
            		}
            		else {
HXLINE(  81)			return lowerBound;
            		}
HXDLIN(  81)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,bound,return )

Float FlxMath_obj::lerp(Float a,Float b,Float ratio){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_99_lerp)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(ratio,"ratio")
HXLINE(  99)		return (a + (ratio * (b - a)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,lerp,return )

bool FlxMath_obj::inBounds(Float Value, ::Dynamic Min, ::Dynamic Max){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_112_inBounds)
            	HX_STACK_ARG(Value,"Value")
            	HX_STACK_ARG(Min,"Min")
            	HX_STACK_ARG(Max,"Max")
HXLINE( 112)		bool _hx_tmp;
HXDLIN( 112)		if (hx::IsNotNull( Min )) {
HXLINE( 112)			_hx_tmp = hx::IsGreaterEq( Value,Min );
            		}
            		else {
HXLINE( 112)			_hx_tmp = true;
            		}
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 112)			if (hx::IsNotNull( Max )) {
HXLINE( 112)				return hx::IsLessEq( Value,Max );
            			}
            			else {
HXLINE( 112)				return true;
            			}
            		}
            		else {
HXLINE( 112)			return false;
            		}
HXDLIN( 112)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,inBounds,return )

bool FlxMath_obj::isOdd(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_120_isOdd)
            	HX_STACK_ARG(n,"n")
HXLINE( 120)		return (((int)::Std_obj::_hx_int(n) & (int)(int)1) != (int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isOdd,return )

bool FlxMath_obj::isEven(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_128_isEven)
            	HX_STACK_ARG(n,"n")
HXLINE( 128)		return (((int)::Std_obj::_hx_int(n) & (int)(int)1) == (int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isEven,return )

int FlxMath_obj::numericComparison(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_135_numericComparison)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 136)		if ((b > a)) {
HXLINE( 138)			return (int)-1;
            		}
            		else {
HXLINE( 140)			if ((a > b)) {
HXLINE( 142)				return (int)1;
            			}
            		}
HXLINE( 144)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,numericComparison,return )

bool FlxMath_obj::pointInCoordinates(Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_160_pointInCoordinates)
            	HX_STACK_ARG(pointX,"pointX")
            	HX_STACK_ARG(pointY,"pointY")
            	HX_STACK_ARG(rectX,"rectX")
            	HX_STACK_ARG(rectY,"rectY")
            	HX_STACK_ARG(rectWidth,"rectWidth")
            	HX_STACK_ARG(rectHeight,"rectHeight")
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		if ((pointX >= rectX)) {
HXLINE( 161)			_hx_tmp = (pointX <= (rectX + rectWidth));
            		}
            		else {
HXLINE( 161)			_hx_tmp = false;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 163)			bool _hx_tmp1;
HXDLIN( 163)			if ((pointY >= rectY)) {
HXLINE( 163)				_hx_tmp1 = (pointY <= (rectY + rectHeight));
            			}
            			else {
HXLINE( 163)				_hx_tmp1 = false;
            			}
HXDLIN( 163)			if (_hx_tmp1) {
HXLINE( 165)				return true;
            			}
            		}
HXLINE( 168)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxMath_obj,pointInCoordinates,return )

bool FlxMath_obj::pointInFlxRect(Float pointX,Float pointY, ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_181_pointInFlxRect)
            	HX_STACK_ARG(pointX,"pointX")
            	HX_STACK_ARG(pointY,"pointY")
            	HX_STACK_ARG(rect,"rect")
HXLINE( 181)		bool _hx_tmp;
HXDLIN( 181)		bool _hx_tmp1;
HXDLIN( 181)		if ((pointX >= rect->x)) {
HXLINE( 181)			_hx_tmp1 = (pointX <= (rect->x + rect->width));
            		}
            		else {
HXLINE( 181)			_hx_tmp1 = false;
            		}
HXDLIN( 181)		if (_hx_tmp1) {
HXLINE( 181)			_hx_tmp = (pointY >= rect->y);
            		}
            		else {
HXLINE( 181)			_hx_tmp = false;
            		}
HXDLIN( 181)		if (_hx_tmp) {
HXLINE( 181)			return (pointY <= (rect->y + rect->height));
            		}
            		else {
HXLINE( 181)			return false;
            		}
HXDLIN( 181)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInFlxRect,return )

bool FlxMath_obj::pointInRectangle(Float pointX,Float pointY, ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_221_pointInRectangle)
            	HX_STACK_ARG(pointX,"pointX")
            	HX_STACK_ARG(pointY,"pointY")
            	HX_STACK_ARG(rect,"rect")
HXLINE( 221)		bool _hx_tmp;
HXDLIN( 221)		bool _hx_tmp1;
HXDLIN( 221)		if ((pointX >= rect->x)) {
HXLINE( 221)			_hx_tmp1 = (pointX <= ( (Float)(rect->__Field(HX_("get_right",33,68,0d,2d),hx::paccDynamic)()) ));
            		}
            		else {
HXLINE( 221)			_hx_tmp1 = false;
            		}
HXDLIN( 221)		if (_hx_tmp1) {
HXLINE( 221)			_hx_tmp = (pointY >= rect->y);
            		}
            		else {
HXLINE( 221)			_hx_tmp = false;
            		}
HXDLIN( 221)		if (_hx_tmp) {
HXLINE( 221)			return (pointY <= ( (Float)(rect->__Field(HX_("get_bottom",b4,56,00,56),hx::paccDynamic)()) ));
            		}
            		else {
HXLINE( 221)			return false;
            		}
HXDLIN( 221)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInRectangle,return )

int FlxMath_obj::maxAdd(int value,int amount,int max,hx::Null< int >  __o_min){
int min = __o_min.Default(0);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_235_maxAdd)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(amount,"amount")
            	HX_STACK_ARG(max,"max")
            	HX_STACK_ARG(min,"min")
HXLINE( 236)		value = (value + amount);
HXLINE( 238)		if ((value > max)) {
HXLINE( 240)			value = max;
            		}
            		else {
HXLINE( 242)			if ((value <= min)) {
HXLINE( 244)				value = min;
            			}
            		}
HXLINE( 247)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,maxAdd,return )

int FlxMath_obj::wrap(int value,int min,int max){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_260_wrap)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(min,"min")
            	HX_STACK_ARG(max,"max")
HXLINE( 261)		HX_VARI( int,range) = ((max - min) + (int)1);
HXLINE( 263)		if ((value < min)) {
HXLINE( 264)			value = (value + (range * ::Std_obj::_hx_int((((Float)(min - value) / (Float)range) + (int)1))));
            		}
HXLINE( 266)		return (min + hx::Mod((value - min),range));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,wrap,return )

Float FlxMath_obj::remapToRange(Float value,Float start1,Float stop1,Float start2,Float stop2){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_281_remapToRange)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(start1,"start1")
            	HX_STACK_ARG(stop1,"stop1")
            	HX_STACK_ARG(start2,"start2")
            	HX_STACK_ARG(stop2,"stop2")
HXLINE( 281)		return (start2 + ((value - start1) * ((Float)(stop2 - start2) / (Float)(stop1 - start1))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxMath_obj,remapToRange,return )

Float FlxMath_obj::dotProduct(Float ax,Float ay,Float bx,Float by){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_296_dotProduct)
            	HX_STACK_ARG(ax,"ax")
            	HX_STACK_ARG(ay,"ay")
            	HX_STACK_ARG(bx,"bx")
            	HX_STACK_ARG(by,"by")
HXLINE( 296)		return ((ax * bx) + (ay * by));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,dotProduct,return )

Float FlxMath_obj::vectorLength(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_304_vectorLength)
            	HX_STACK_ARG(dx,"dx")
            	HX_STACK_ARG(dy,"dy")
HXLINE( 304)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,vectorLength,return )

int FlxMath_obj::distanceBetween( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_315_distanceBetween)
            	HX_STACK_ARG(SpriteA,"SpriteA")
            	HX_STACK_ARG(SpriteB,"SpriteB")
HXLINE( 316)		HX_VARI( Float,dx) = ((SpriteA->x + SpriteA->origin->x) - (SpriteB->x + SpriteB->origin->x));
HXLINE( 317)		HX_VARI( Float,dy) = ((SpriteA->y + SpriteA->origin->y) - (SpriteB->y + SpriteB->origin->y));
HXLINE( 318)		return ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceBetween,return )

bool FlxMath_obj::isDistanceWithin( ::flixel::FlxSprite SpriteA, ::flixel::FlxSprite SpriteB,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_332_isDistanceWithin)
            	HX_STACK_ARG(SpriteA,"SpriteA")
            	HX_STACK_ARG(SpriteB,"SpriteB")
            	HX_STACK_ARG(Distance,"Distance")
            	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
HXLINE( 333)		HX_VARI( Float,dx) = ((SpriteA->x + SpriteA->origin->x) - (SpriteB->x + SpriteB->origin->x));
HXLINE( 334)		HX_VARI( Float,dy) = ((SpriteA->y + SpriteA->origin->y) - (SpriteB->y + SpriteB->origin->y));
HXLINE( 336)		if (IncludeEqual) {
HXLINE( 337)			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
            		}
            		else {
HXLINE( 339)			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
            		}
HXLINE( 336)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceWithin,return )

int FlxMath_obj::distanceToPoint( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Target){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_351_distanceToPoint)
            	HX_STACK_ARG(Sprite,"Sprite")
            	HX_STACK_ARG(Target,"Target")
HXLINE( 352)		HX_VARI( Float,dx) = ((Sprite->x + Sprite->origin->x) - Target->x);
HXLINE( 353)		HX_VARI( Float,dy) = ((Sprite->y + Sprite->origin->y) - Target->y);
HXLINE( 354)		if (Target->_weak) {
HXLINE( 354)			Target->put();
            		}
HXLINE( 355)		return ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToPoint,return )

bool FlxMath_obj::isDistanceToPointWithin( ::flixel::FlxSprite Sprite, ::flixel::math::FlxPoint Target,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_370_isDistanceToPointWithin)
            	HX_STACK_ARG(Sprite,"Sprite")
            	HX_STACK_ARG(Target,"Target")
            	HX_STACK_ARG(Distance,"Distance")
            	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
HXLINE( 371)		HX_VARI( Float,dx) = ((Sprite->x + Sprite->origin->x) - Target->x);
HXLINE( 372)		HX_VARI( Float,dy) = ((Sprite->y + Sprite->origin->y) - Target->y);
HXLINE( 374)		if (Target->_weak) {
HXLINE( 374)			Target->put();
            		}
HXLINE( 376)		if (IncludeEqual) {
HXLINE( 377)			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
            		}
            		else {
HXLINE( 379)			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
            		}
HXLINE( 376)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToPointWithin,return )

int FlxMath_obj::distanceToTouch( ::flixel::FlxSprite Sprite, ::flixel::input::touch::FlxTouch Touch){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_426_distanceToTouch)
            	HX_STACK_ARG(Sprite,"Sprite")
            	HX_STACK_ARG(Touch,"Touch")
HXLINE( 427)		HX_VARI( Float,dx) = ((Sprite->x + Sprite->origin->x) - Touch->screenX);
HXLINE( 428)		HX_VARI( Float,dy) = ((Sprite->y + Sprite->origin->y) - Touch->screenY);
HXLINE( 429)		return ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToTouch,return )

bool FlxMath_obj::isDistanceToTouchWithin( ::flixel::FlxSprite Sprite, ::flixel::input::touch::FlxTouch Touch,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_442_isDistanceToTouchWithin)
            	HX_STACK_ARG(Sprite,"Sprite")
            	HX_STACK_ARG(Touch,"Touch")
            	HX_STACK_ARG(Distance,"Distance")
            	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
HXLINE( 443)		HX_VARI( Float,dx) = ((Sprite->x + Sprite->origin->x) - Touch->screenX);
HXLINE( 444)		HX_VARI( Float,dy) = ((Sprite->y + Sprite->origin->y) - Touch->screenY);
HXLINE( 446)		if (IncludeEqual) {
HXLINE( 447)			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
            		}
            		else {
HXLINE( 449)			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
            		}
HXLINE( 446)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToTouchWithin,return )

int FlxMath_obj::getDecimals(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_457_getDecimals)
            	HX_STACK_ARG(n,"n")
HXLINE( 458)		HX_VARI( ::Array< ::String >,helperArray) = ::Std_obj::string(n).split(HX_(".",2e,00,00,00));
HXLINE( 459)		HX_VARI( int,decimals) = (int)0;
HXLINE( 461)		if ((helperArray->length > (int)1)) {
HXLINE( 463)			decimals = helperArray->__get((int)1).length;
            		}
HXLINE( 466)		return decimals;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,getDecimals,return )

bool FlxMath_obj::equal(Float aValueA,Float aValueB,hx::Null< Float >  __o_aDiff){
Float aDiff = __o_aDiff.Default(((Float)0.0000001));
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_471_equal)
            	HX_STACK_ARG(aValueA,"aValueA")
            	HX_STACK_ARG(aValueB,"aValueB")
            	HX_STACK_ARG(aDiff,"aDiff")
HXLINE( 471)		return (::Math_obj::abs((aValueA - aValueB)) <= aDiff);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,equal,return )

int FlxMath_obj::signOf(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_479_signOf)
            	HX_STACK_ARG(n,"n")
HXLINE( 479)		if ((n < (int)0)) {
HXLINE( 479)			return (int)-1;
            		}
            		else {
HXLINE( 479)			return (int)1;
            		}
HXDLIN( 479)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,signOf,return )

bool FlxMath_obj::sameSign(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_487_sameSign)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 487)		int _hx_tmp;
HXDLIN( 487)		if ((a < (int)0)) {
HXLINE( 487)			_hx_tmp = (int)-1;
            		}
            		else {
HXLINE( 487)			_hx_tmp = (int)1;
            		}
HXDLIN( 487)		int _hx_tmp1;
HXDLIN( 487)		if ((b < (int)0)) {
HXLINE( 487)			_hx_tmp1 = (int)-1;
            		}
            		else {
HXLINE( 487)			_hx_tmp1 = (int)1;
            		}
HXDLIN( 487)		return (_hx_tmp == _hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,sameSign,return )

Float FlxMath_obj::fastSin(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_498_fastSin)
            	HX_STACK_ARG(n,"n")
HXLINE( 499)		n = (n * ((Float)0.3183098862));
HXLINE( 502)		if ((n > (int)1)) {
HXLINE( 504)			n = (n - ((int)((int)::Math_obj::ceil(n) >> (int)(int)1) << (int)(int)1));
            		}
            		else {
HXLINE( 506)			if ((n < (int)-1)) {
HXLINE( 508)				n = (n + ((int)((int)::Math_obj::ceil(-(n)) >> (int)(int)1) << (int)(int)1));
            			}
            		}
HXLINE( 512)		if ((n > (int)0)) {
HXLINE( 514)			return (n * (((Float)3.1) + (n * (((Float)0.5) + (n * (((Float)-7.2) + (n * ((Float)3.6))))))));
            		}
            		else {
HXLINE( 518)			return (n * (((Float)3.1) - (n * (((Float)0.5) + (n * (((Float)7.2) + (n * ((Float)3.6))))))));
            		}
HXLINE( 512)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,fastSin,return )

Float FlxMath_obj::fastCos(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_531_fastCos)
            	HX_STACK_ARG(n,"n")
HXLINE( 531)		HX_VARI_NAME( Float,n1,"n") = (n + ((Float)1.570796327));
HXDLIN( 531)		n1 = (n1 * ((Float)0.3183098862));
HXDLIN( 531)		if ((n1 > (int)1)) {
HXLINE( 531)			n1 = (n1 - ((int)((int)::Math_obj::ceil(n1) >> (int)(int)1) << (int)(int)1));
            		}
            		else {
HXLINE( 531)			if ((n1 < (int)-1)) {
HXLINE( 531)				n1 = (n1 + ((int)((int)::Math_obj::ceil(-(n1)) >> (int)(int)1) << (int)(int)1));
            			}
            		}
HXDLIN( 531)		if ((n1 > (int)0)) {
HXLINE( 531)			return (n1 * (((Float)3.1) + (n1 * (((Float)0.5) + (n1 * (((Float)-7.2) + (n1 * ((Float)3.6))))))));
            		}
            		else {
HXLINE( 531)			return (n1 * (((Float)3.1) - (n1 * (((Float)0.5) + (n1 * (((Float)7.2) + (n1 * ((Float)3.6))))))));
            		}
HXDLIN( 531)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,fastCos,return )

Float FlxMath_obj::sinh(Float n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_539_sinh)
            	HX_STACK_ARG(n,"n")
HXLINE( 539)		return ((Float)(::Math_obj::exp(n) - ::Math_obj::exp(-(n))) / (Float)(int)2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,sinh,return )

int FlxMath_obj::maxInt(int a,int b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_547_maxInt)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 547)		if ((a > b)) {
HXLINE( 547)			return a;
            		}
            		else {
HXLINE( 547)			return b;
            		}
HXDLIN( 547)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,maxInt,return )

int FlxMath_obj::minInt(int a,int b){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_555_minInt)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 555)		if ((a > b)) {
HXLINE( 555)			return b;
            		}
            		else {
HXLINE( 555)			return a;
            		}
HXDLIN( 555)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,minInt,return )

int FlxMath_obj::absInt(int n){
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_563_absInt)
            	HX_STACK_ARG(n,"n")
HXLINE( 563)		if ((n > (int)0)) {
HXLINE( 563)			return n;
            		}
            		else {
HXLINE( 563)			return -(n);
            		}
HXDLIN( 563)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,absInt,return )


FlxMath_obj::FlxMath_obj()
{
}

bool FlxMath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { outValue = lerp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"wrap") ) { outValue = wrap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sinh") ) { outValue = sinh_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { outValue = bound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isOdd") ) { outValue = isOdd_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"equal") ) { outValue = equal_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isEven") ) { outValue = isEven_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"maxAdd") ) { outValue = maxAdd_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"signOf") ) { outValue = signOf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"maxInt") ) { outValue = maxInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"minInt") ) { outValue = minInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"absInt") ) { outValue = absInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastSin") ) { outValue = fastSin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fastCos") ) { outValue = fastCos_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inBounds") ) { outValue = inBounds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sameSign") ) { outValue = sameSign_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { outValue = dotProduct_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDecimals") ) { outValue = getDecimals_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"roundDecimal") ) { outValue = roundDecimal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"remapToRange") ) { outValue = remapToRange_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"vectorLength") ) { outValue = vectorLength_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointInFlxRect") ) { outValue = pointInFlxRect_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceBetween") ) { outValue = distanceBetween_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { outValue = distanceToPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distanceToTouch") ) { outValue = distanceToTouch_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pointInRectangle") ) { outValue = pointInRectangle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isDistanceWithin") ) { outValue = isDistanceWithin_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericComparison") ) { outValue = numericComparison_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointInCoordinates") ) { outValue = pointInCoordinates_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"isDistanceToPointWithin") ) { outValue = isDistanceToPointWithin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isDistanceToTouchWithin") ) { outValue = isDistanceToTouchWithin_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxMath_obj_sMemberStorageInfo = 0;
static hx::StaticInfo FlxMath_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &FlxMath_obj::MIN_VALUE_FLOAT,HX_HCSTRING("MIN_VALUE_FLOAT","\x41","\x8d","\x8c","\x66")},
	{hx::fsFloat,(void *) &FlxMath_obj::MAX_VALUE_FLOAT,HX_HCSTRING("MAX_VALUE_FLOAT","\x53","\xd9","\xa6","\x0a")},
	{hx::fsInt,(void *) &FlxMath_obj::MIN_VALUE_INT,HX_HCSTRING("MIN_VALUE_INT","\x54","\x4d","\x29","\x0b")},
	{hx::fsInt,(void *) &FlxMath_obj::MAX_VALUE_INT,HX_HCSTRING("MAX_VALUE_INT","\xe6","\x10","\xde","\x05")},
	{hx::fsFloat,(void *) &FlxMath_obj::SQUARE_ROOT_OF_TWO,HX_HCSTRING("SQUARE_ROOT_OF_TWO","\xdf","\x00","\xe4","\xf7")},
	{hx::fsFloat,(void *) &FlxMath_obj::EPSILON,HX_HCSTRING("EPSILON","\x4a","\x89","\x92","\x2c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FlxMath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE_FLOAT,"MIN_VALUE_FLOAT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE_FLOAT,"MAX_VALUE_FLOAT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE_INT,"MIN_VALUE_INT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE_INT,"MAX_VALUE_INT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
	HX_MARK_MEMBER_NAME(FlxMath_obj::EPSILON,"EPSILON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxMath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE_FLOAT,"MIN_VALUE_FLOAT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE_FLOAT,"MAX_VALUE_FLOAT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE_INT,"MIN_VALUE_INT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE_INT,"MAX_VALUE_INT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::EPSILON,"EPSILON");
};

#endif

hx::Class FlxMath_obj::__mClass;

static ::String FlxMath_obj_sStaticFields[] = {
	HX_HCSTRING("MIN_VALUE_FLOAT","\x41","\x8d","\x8c","\x66"),
	HX_HCSTRING("MAX_VALUE_FLOAT","\x53","\xd9","\xa6","\x0a"),
	HX_HCSTRING("MIN_VALUE_INT","\x54","\x4d","\x29","\x0b"),
	HX_HCSTRING("MAX_VALUE_INT","\xe6","\x10","\xde","\x05"),
	HX_HCSTRING("SQUARE_ROOT_OF_TWO","\xdf","\x00","\xe4","\xf7"),
	HX_HCSTRING("EPSILON","\x4a","\x89","\x92","\x2c"),
	HX_HCSTRING("roundDecimal","\xe3","\xa9","\x4c","\xb9"),
	HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"),
	HX_HCSTRING("lerp","\x77","\x12","\xb0","\x47"),
	HX_HCSTRING("inBounds","\x3a","\xd0","\x9b","\xee"),
	HX_HCSTRING("isOdd","\xe5","\xbb","\x52","\xc1"),
	HX_HCSTRING("isEven","\x24","\x34","\x83","\x60"),
	HX_HCSTRING("numericComparison","\x76","\xe4","\x9e","\x70"),
	HX_HCSTRING("pointInCoordinates","\xa6","\x48","\x07","\xbf"),
	HX_HCSTRING("pointInFlxRect","\xe1","\xc2","\xa2","\x79"),
	HX_HCSTRING("pointInRectangle","\x1a","\xd9","\x72","\x75"),
	HX_HCSTRING("maxAdd","\xdd","\xdd","\x47","\xbe"),
	HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"),
	HX_HCSTRING("remapToRange","\x79","\xfc","\x33","\x70"),
	HX_HCSTRING("dotProduct","\xa6","\x27","\xf0","\x3d"),
	HX_HCSTRING("vectorLength","\x09","\x2e","\x37","\x3d"),
	HX_HCSTRING("distanceBetween","\x13","\x27","\x25","\xf8"),
	HX_HCSTRING("isDistanceWithin","\x0a","\xf2","\x15","\x71"),
	HX_HCSTRING("distanceToPoint","\x20","\x96","\x85","\x24"),
	HX_HCSTRING("isDistanceToPointWithin","\x61","\x31","\x37","\x36"),
	HX_HCSTRING("distanceToTouch","\x8f","\xf9","\x28","\x72"),
	HX_HCSTRING("isDistanceToTouchWithin","\x10","\x52","\xd5","\xb4"),
	HX_HCSTRING("getDecimals","\x78","\x0d","\x5e","\x38"),
	HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"),
	HX_HCSTRING("signOf","\xb4","\x1e","\x86","\xb4"),
	HX_HCSTRING("sameSign","\xc3","\xea","\xd6","\x66"),
	HX_HCSTRING("fastSin","\xdc","\x1d","\x2c","\xde"),
	HX_HCSTRING("fastCos","\x0b","\xff","\x1f","\xde"),
	HX_HCSTRING("sinh","\x50","\x96","\x53","\x4c"),
	HX_HCSTRING("maxInt","\xab","\xf8","\x4d","\xbe"),
	HX_HCSTRING("minInt","\x7d","\x7a","\xe6","\x52"),
	HX_HCSTRING("absInt","\x9d","\x27","\x1e","\x82"),
	::String(null())
};

void FlxMath_obj::__register()
{
	hx::Object *dummy = new FlxMath_obj;
	FlxMath_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxMath","\xe6","\x47","\x47","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMath_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxMath_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxMath_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxMath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxMath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMath_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxMath_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_24_boot)
HXLINE(  24)		MIN_VALUE_FLOAT = ((Float)5e-324);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_29_boot)
HXLINE(  29)		MAX_VALUE_FLOAT = ((Float)1.79e+308);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_33_boot)
HXLINE(  33)		MIN_VALUE_INT = (int)-2147483647;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_37_boot)
HXLINE(  37)		MAX_VALUE_INT = (int)2147483647;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_41_boot)
HXLINE(  41)		SQUARE_ROOT_OF_TWO = ((Float)1.41421356237);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5d39d2fff62ba7b8_45_boot)
HXLINE(  45)		EPSILON = ((Float)0.0000001);
            	}
}

} // end namespace flixel
} // end namespace math
