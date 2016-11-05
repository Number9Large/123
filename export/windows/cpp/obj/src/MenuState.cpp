#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",10,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(10)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	super::__construct(tmp);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",13,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14)
		this->super::create();
		HX_STACK_LINE(16)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		Float tmp2 = (tmp1 - (int)40);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		int init_x = tmp3;		HX_STACK_VAR(init_x,"init_x");
		HX_STACK_LINE(18)
		int tmp4 = init_x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(18)
		Dynamic tmp5 = this->onNew_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(18)
		::flixel::ui::FlxButton tmp6 = ::flixel::ui::FlxButton_obj::__new(tmp4,(int)50,HX_HCSTRING("New game","\xd2","\x13","\x00","\x1b"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(18)
		::flixel::ui::FlxButton btn_new = tmp6;		HX_STACK_VAR(btn_new,"btn_new");
		HX_STACK_LINE(19)
		int tmp7 = init_x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(19)
		Dynamic tmp8 = this->onLoad_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(19)
		::flixel::ui::FlxButton tmp9 = ::flixel::ui::FlxButton_obj::__new(tmp7,(int)80,HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(19)
		::flixel::ui::FlxButton btn_load = tmp9;		HX_STACK_VAR(btn_load,"btn_load");
		HX_STACK_LINE(21)
		::flixel::ui::FlxButton tmp10 = btn_load;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(21)
		this->add(tmp10);
		HX_STACK_LINE(22)
		::flixel::ui::FlxButton tmp11 = btn_new;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(22)
		this->add(tmp11);
	}
return null();
}


Void MenuState_obj::onLoad( ){
{
		HX_STACK_FRAME("MenuState","onLoad",0x53adb801,"MenuState.onLoad","MenuState.hx",26,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("MenuState.hx","\x2c","\xb2","\xbc","\xdf"),27,HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0"),HX_HCSTRING("onLoad","\xe5","\xa2","\x41","\xea"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		::haxe::Log_obj::trace(HX_HCSTRING("load...","\x88","\xd1","\xc5","\x08"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,onLoad,(void))

Void MenuState_obj::onNew( ){
{
		HX_STACK_FRAME("MenuState","onNew",0x644166e5,"MenuState.onNew","MenuState.hx",32,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::PlayState tmp = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(32)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		if ((tmp3)){
			HX_STACK_LINE(32)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,onNew,(void))

Void MenuState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",36,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(37)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		this->super::update(tmp);
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

Dynamic MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onNew") ) { return onNew_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"onLoad") ) { return onLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("onLoad","\xe5","\xa2","\x41","\xea"),
	HX_HCSTRING("onNew","\x81","\x64","\x6b","\x32"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
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

