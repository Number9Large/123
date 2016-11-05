#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

Void Player_obj::__construct(int X,int Y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",21,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(22)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(23)
	this->makeGraphic((int)8,(int)8,(int)-65536,null(),null());
	HX_STACK_LINE(24)
	::flixel::math::FlxPoint tmp2 = this->maxVelocity;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	tmp2->set((int)80,(int)80);
	HX_STACK_LINE(25)
	::flixel::math::FlxPoint tmp3 = this->drag;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	::flixel::math::FlxPoint tmp4 = this->maxVelocity;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	Float tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	tmp3->set_x(tmp6);
	HX_STACK_LINE(26)
	::flixel::math::FlxPoint tmp7 = this->drag;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	::flixel::math::FlxPoint tmp8 = this->maxVelocity;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(26)
	Float tmp10 = (tmp9 * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(26)
	tmp7->set_y(tmp10);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int X,int Y)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(X,Y);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Player_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",30,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(31)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		this->super::update(tmp);
		HX_STACK_LINE(32)
		::flixel::math::FlxPoint tmp1 = this->acceleration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		tmp1->set_x((int)0);
		HX_STACK_LINE(33)
		::flixel::math::FlxPoint tmp2 = this->acceleration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		tmp2->set_y((int)0);
		HX_STACK_LINE(35)
		::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		bool tmp4 = tmp3->checkKeyArrayState(Array_obj< int >::__new().Add((int)37),(int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		if ((tmp4)){
			HX_STACK_LINE(37)
			::flixel::math::FlxPoint tmp5 = this->acceleration;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			::flixel::math::FlxPoint tmp6 = this->maxVelocity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			Float tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(37)
			tmp5->set_x(tmp9);
		}
		HX_STACK_LINE(39)
		::flixel::input::keyboard::FlxKeyboard tmp5 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		bool tmp6 = tmp5->checkKeyArrayState(Array_obj< int >::__new().Add((int)39),(int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		if ((tmp6)){
			HX_STACK_LINE(41)
			::flixel::math::FlxPoint tmp7 = this->acceleration;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			::flixel::math::FlxPoint tmp8 = this->maxVelocity;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(41)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(41)
			Float tmp10 = (tmp9 * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(41)
			tmp7->set_x(tmp10);
		}
		HX_STACK_LINE(43)
		::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		bool tmp8 = tmp7->checkKeyArrayState(Array_obj< int >::__new().Add((int)38),(int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		if ((tmp8)){
			HX_STACK_LINE(45)
			::flixel::math::FlxPoint tmp9 = this->acceleration;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			::flixel::math::FlxPoint tmp10 = this->maxVelocity;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(45)
			Float tmp13 = (tmp12 * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(45)
			tmp9->set_y(tmp13);
		}
		HX_STACK_LINE(47)
		::flixel::input::keyboard::FlxKeyboard tmp9 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(47)
		bool tmp10 = tmp9->checkKeyArrayState(Array_obj< int >::__new().Add((int)40),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(47)
		if ((tmp10)){
			HX_STACK_LINE(49)
			::flixel::math::FlxPoint tmp11 = this->acceleration;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(49)
			::flixel::math::FlxPoint tmp12 = this->maxVelocity;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(49)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(49)
			Float tmp14 = (tmp13 * (int)4);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(49)
			tmp11->set_y(tmp14);
		}
	}
return null();
}



Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

