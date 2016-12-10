// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogStateList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogStateList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_24_new,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","new",0x726900e6,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.new","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",24,0xa4c0584e)
HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_16_get_LEFT_STICK,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_LEFT_STICK",0xc8abc13b,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_LEFT_STICK","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",16,0xa4c0584e)
HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_17_get_LEFT_STICK_X,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_LEFT_STICK_X",0x1c0b1914,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_LEFT_STICK_X","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",17,0xa4c0584e)
HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_18_get_LEFT_STICK_Y,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_LEFT_STICK_Y",0x1c0b1915,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_LEFT_STICK_Y","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",18,0xa4c0584e)
HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_19_get_RIGHT_STICK,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_RIGHT_STICK",0x6f514a4a,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_RIGHT_STICK","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",19,0xa4c0584e)
HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_20_get_RIGHT_STICK_X,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_RIGHT_STICK_X",0xddf043e3,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_RIGHT_STICK_X","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",20,0xa4c0584e)
HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_21_get_RIGHT_STICK_Y,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_RIGHT_STICK_Y",0xddf043e4,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_RIGHT_STICK_Y","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",21,0xa4c0584e)
HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_33_checkXY,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkXY",0x1743934f,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkXY","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",33,0xa4c0584e)
HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_77_checkX,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkX",0x15ea7dca,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkX","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",77,0xa4c0584e)
HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_85_checkY,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkY",0x15ea7dcb,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkY","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",85,0xa4c0584e)
HX_DEFINE_STACK_FRAME(_hx_pos_36ad37cf669080a5_99_checkRaw,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkRaw",0x43d8cbba,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkRaw","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",99,0xa4c0584e)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxGamepadAnalogStateList_obj::__construct(int status, ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_24_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(status,"status")
            	HX_STACK_ARG(gamepad,"gamepad")
HXLINE(  25)		this->status = status;
HXLINE(  26)		this->gamepad = gamepad;
            	}

Dynamic FlxGamepadAnalogStateList_obj::__CreateEmpty() { return new FlxGamepadAnalogStateList_obj; }

void *FlxGamepadAnalogStateList_obj::_hx_vtable = 0;

Dynamic FlxGamepadAnalogStateList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxGamepadAnalogStateList_obj > _hx_result = new FlxGamepadAnalogStateList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxGamepadAnalogStateList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x73f307b2;
}

bool FlxGamepadAnalogStateList_obj::get_LEFT_STICK(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_16_get_LEFT_STICK)
            	HX_STACK_THIS(this)
HXLINE(  16)		return this->checkXY((int)19);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_LEFT_STICK,return )

bool FlxGamepadAnalogStateList_obj::get_LEFT_STICK_X(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_17_get_LEFT_STICK_X)
            	HX_STACK_THIS(this)
HXLINE(  17)		HX_VARI(  ::flixel::input::gamepad::FlxGamepadAnalogStick,stick) = this->gamepad->mapping->getAnalogStick((int)19);
HXDLIN(  17)		if (hx::IsNull( stick )) {
HXLINE(  17)			return false;
            		}
            		else {
HXLINE(  17)			return this->gamepad->checkStatusRaw(stick->x,this->status);
            		}
HXDLIN(  17)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_LEFT_STICK_X,return )

bool FlxGamepadAnalogStateList_obj::get_LEFT_STICK_Y(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_18_get_LEFT_STICK_Y)
            	HX_STACK_THIS(this)
HXLINE(  18)		HX_VARI(  ::flixel::input::gamepad::FlxGamepadAnalogStick,stick) = this->gamepad->mapping->getAnalogStick((int)19);
HXDLIN(  18)		if (hx::IsNull( stick )) {
HXLINE(  18)			return false;
            		}
            		else {
HXLINE(  18)			return this->gamepad->checkStatusRaw(stick->y,this->status);
            		}
HXDLIN(  18)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_LEFT_STICK_Y,return )

bool FlxGamepadAnalogStateList_obj::get_RIGHT_STICK(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_19_get_RIGHT_STICK)
            	HX_STACK_THIS(this)
HXLINE(  19)		return this->checkXY((int)20);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_RIGHT_STICK,return )

bool FlxGamepadAnalogStateList_obj::get_RIGHT_STICK_X(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_20_get_RIGHT_STICK_X)
            	HX_STACK_THIS(this)
HXLINE(  20)		HX_VARI(  ::flixel::input::gamepad::FlxGamepadAnalogStick,stick) = this->gamepad->mapping->getAnalogStick((int)20);
HXDLIN(  20)		if (hx::IsNull( stick )) {
HXLINE(  20)			return false;
            		}
            		else {
HXLINE(  20)			return this->gamepad->checkStatusRaw(stick->x,this->status);
            		}
HXDLIN(  20)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_RIGHT_STICK_X,return )

bool FlxGamepadAnalogStateList_obj::get_RIGHT_STICK_Y(){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_21_get_RIGHT_STICK_Y)
            	HX_STACK_THIS(this)
HXLINE(  21)		HX_VARI(  ::flixel::input::gamepad::FlxGamepadAnalogStick,stick) = this->gamepad->mapping->getAnalogStick((int)20);
HXDLIN(  21)		if (hx::IsNull( stick )) {
HXLINE(  21)			return false;
            		}
            		else {
HXLINE(  21)			return this->gamepad->checkStatusRaw(stick->y,this->status);
            		}
HXDLIN(  21)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_RIGHT_STICK_Y,return )

bool FlxGamepadAnalogStateList_obj::checkXY(int id){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_33_checkXY)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(  34)		HX_VARI(  ::flixel::input::gamepad::FlxGamepadAnalogStick,stick) = this->gamepad->mapping->getAnalogStick(id);
HXLINE(  35)		if (hx::IsNull( stick )) {
HXLINE(  36)			return false;
            		}
HXLINE(  45)		HX_VARI( bool,xVal) = this->gamepad->checkStatusRaw(stick->x,this->status);
HXLINE(  46)		HX_VARI( bool,yVal) = this->gamepad->checkStatusRaw(stick->y,this->status);
HXLINE(  48)		bool _hx_tmp;
HXDLIN(  48)		if (xVal) {
HXLINE(  48)			_hx_tmp = yVal;
            		}
            		else {
HXLINE(  48)			_hx_tmp = false;
            		}
HXDLIN(  48)		if (_hx_tmp) {
HXLINE(  50)			return true;
            		}
HXLINE(  53)		if (xVal) {
HXLINE(  57)			bool _hx_tmp1;
HXDLIN(  57)			if (!(this->gamepad->checkStatusRaw(stick->y,(int)0))) {
HXLINE(  57)				_hx_tmp1 = this->gamepad->checkStatusRaw(stick->y,(int)-1);
            			}
            			else {
HXLINE(  57)				_hx_tmp1 = true;
            			}
HXDLIN(  57)			if (_hx_tmp1) {
HXLINE(  59)				return true;
            			}
            		}
HXLINE(  63)		if (yVal) {
HXLINE(  67)			bool _hx_tmp2;
HXDLIN(  67)			if (!(this->gamepad->checkStatusRaw(stick->x,(int)0))) {
HXLINE(  67)				_hx_tmp2 = this->gamepad->checkStatusRaw(stick->x,(int)-1);
            			}
            			else {
HXLINE(  67)				_hx_tmp2 = true;
            			}
HXDLIN(  67)			if (_hx_tmp2) {
HXLINE(  69)				return true;
            			}
            		}
HXLINE(  73)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogStateList_obj,checkXY,return )

bool FlxGamepadAnalogStateList_obj::checkX(int id){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_77_checkX)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(  78)		HX_VARI(  ::flixel::input::gamepad::FlxGamepadAnalogStick,stick) = this->gamepad->mapping->getAnalogStick(id);
HXLINE(  79)		if (hx::IsNull( stick )) {
HXLINE(  80)			return false;
            		}
HXLINE(  81)		return this->gamepad->checkStatusRaw(stick->x,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogStateList_obj,checkX,return )

bool FlxGamepadAnalogStateList_obj::checkY(int id){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_85_checkY)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(  86)		HX_VARI(  ::flixel::input::gamepad::FlxGamepadAnalogStick,stick) = this->gamepad->mapping->getAnalogStick(id);
HXLINE(  87)		if (hx::IsNull( stick )) {
HXLINE(  88)			return false;
            		}
HXLINE(  89)		return this->gamepad->checkStatusRaw(stick->y,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogStateList_obj,checkY,return )

bool FlxGamepadAnalogStateList_obj::checkRaw(int RawID,int Status){
            	HX_STACKFRAME(&_hx_pos_36ad37cf669080a5_99_checkRaw)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(RawID,"RawID")
            	HX_STACK_ARG(Status,"Status")
HXLINE(  99)		return this->gamepad->checkStatusRaw(RawID,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadAnalogStateList_obj,checkRaw,return )


hx::ObjectPtr< FlxGamepadAnalogStateList_obj > FlxGamepadAnalogStateList_obj::__new(int status, ::flixel::input::gamepad::FlxGamepad gamepad) {
	hx::ObjectPtr< FlxGamepadAnalogStateList_obj > __this = new FlxGamepadAnalogStateList_obj();
	__this->__construct(status,gamepad);
	return __this;
}

hx::ObjectPtr< FlxGamepadAnalogStateList_obj > FlxGamepadAnalogStateList_obj::__alloc(hx::Ctx *_hx_ctx,int status, ::flixel::input::gamepad::FlxGamepad gamepad) {
	FlxGamepadAnalogStateList_obj *__this = (FlxGamepadAnalogStateList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadAnalogStateList_obj), true, "flixel.input.gamepad.lists.FlxGamepadAnalogStateList"));
	*(void **)__this = FlxGamepadAnalogStateList_obj::_hx_vtable;
	__this->__construct(status,gamepad);
	return __this;
}

FlxGamepadAnalogStateList_obj::FlxGamepadAnalogStateList_obj()
{
}

void FlxGamepadAnalogStateList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadAnalogStateList);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_END_CLASS();
}

void FlxGamepadAnalogStateList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
	HX_VISIT_MEMBER_NAME(status,"status");
}

hx::Val FlxGamepadAnalogStateList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return hx::Val( status); }
		if (HX_FIELD_EQ(inName,"checkX") ) { return hx::Val( checkX_dyn()); }
		if (HX_FIELD_EQ(inName,"checkY") ) { return hx::Val( checkY_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return hx::Val( gamepad); }
		if (HX_FIELD_EQ(inName,"checkXY") ) { return hx::Val( checkXY_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checkRaw") ) { return hx::Val( checkRaw_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LEFT_STICK") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_LEFT_STICK()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RIGHT_STICK") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_RIGHT_STICK()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LEFT_STICK_X") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_LEFT_STICK_X()); }
		if (HX_FIELD_EQ(inName,"LEFT_STICK_Y") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_LEFT_STICK_Y()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_X") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_RIGHT_STICK_X()); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_Y") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_RIGHT_STICK_Y()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK") ) { return hx::Val( get_LEFT_STICK_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK") ) { return hx::Val( get_RIGHT_STICK_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_X") ) { return hx::Val( get_LEFT_STICK_X_dyn()); }
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_Y") ) { return hx::Val( get_LEFT_STICK_Y_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_X") ) { return hx::Val( get_RIGHT_STICK_X_dyn()); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_Y") ) { return hx::Val( get_RIGHT_STICK_Y_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxGamepadAnalogStateList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadAnalogStateList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("LEFT_STICK","\xb8","\x07","\xea","\x37"));
	outFields->push(HX_HCSTRING("LEFT_STICK_X","\xd1","\xb8","\x45","\x8c"));
	outFields->push(HX_HCSTRING("LEFT_STICK_Y","\xd2","\xb8","\x45","\x8c"));
	outFields->push(HX_HCSTRING("RIGHT_STICK","\x2d","\xb1","\x90","\x56"));
	outFields->push(HX_HCSTRING("RIGHT_STICK_X","\x86","\x69","\x01","\xa1"));
	outFields->push(HX_HCSTRING("RIGHT_STICK_Y","\x87","\x69","\x01","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxGamepadAnalogStateList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadAnalogStateList_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{hx::fsInt,(int)offsetof(FlxGamepadAnalogStateList_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxGamepadAnalogStateList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadAnalogStateList_obj_sMemberFields[] = {
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("get_LEFT_STICK","\x01","\x90","\xdf","\xad"),
	HX_HCSTRING("get_LEFT_STICK_X","\x5a","\xa5","\xe4","\x90"),
	HX_HCSTRING("get_LEFT_STICK_Y","\x5b","\xa5","\xe4","\x90"),
	HX_HCSTRING("get_RIGHT_STICK","\xc4","\x68","\x72","\x17"),
	HX_HCSTRING("get_RIGHT_STICK_X","\xdd","\x74","\x71","\xa7"),
	HX_HCSTRING("get_RIGHT_STICK_Y","\xde","\x74","\x71","\xa7"),
	HX_HCSTRING("checkXY","\xc9","\xa7","\x24","\x13"),
	HX_HCSTRING("checkX","\x90","\x16","\x0f","\xba"),
	HX_HCSTRING("checkY","\x91","\x16","\x0f","\xba"),
	HX_HCSTRING("checkRaw","\x00","\xa2","\xe9","\xac"),
	::String(null()) };

static void FlxGamepadAnalogStateList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadAnalogStateList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGamepadAnalogStateList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadAnalogStateList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadAnalogStateList_obj::__mClass;

void FlxGamepadAnalogStateList_obj::__register()
{
	hx::Object *dummy = new FlxGamepadAnalogStateList_obj;
	FlxGamepadAnalogStateList_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","\xf4","\x55","\x19","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxGamepadAnalogStateList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxGamepadAnalogStateList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadAnalogStateList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGamepadAnalogStateList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadAnalogStateList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadAnalogStateList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists
