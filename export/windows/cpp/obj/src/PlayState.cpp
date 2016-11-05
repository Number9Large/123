#include <hxcpp.h>

#ifndef INCLUDED_NPC
#include <NPC.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_TextCloud
#include <TextCloud.h>
#endif
#ifndef INCLUDED_Wall
#include <Wall.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",11,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(15)
	this->walls = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(11)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",19,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		this->super::create();
		HX_STACK_LINE(21)
		::flixel::group::FlxTypedGroup tmp = this->walls;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		::Wall tmp1 = ::Wall_obj::__new((int)0,(int)0,(int)640,(int)10);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		tmp->add(tmp1);
		HX_STACK_LINE(22)
		::flixel::group::FlxTypedGroup tmp2 = this->walls;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		::Wall tmp3 = ::Wall_obj::__new((int)0,(int)0,(int)10,(int)480);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		tmp2->add(tmp3);
		HX_STACK_LINE(23)
		::flixel::group::FlxTypedGroup tmp4 = this->walls;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		::Wall tmp5 = ::Wall_obj::__new((int)630,(int)0,(int)10,(int)480);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		tmp4->add(tmp5);
		HX_STACK_LINE(24)
		::flixel::group::FlxTypedGroup tmp6 = this->walls;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		::Wall tmp7 = ::Wall_obj::__new((int)0,(int)470,(int)640,(int)10);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(24)
		tmp6->add(tmp7);
		HX_STACK_LINE(25)
		::Player tmp8 = ::Player_obj::__new((int)90,(int)40);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(25)
		::Player tmp9 = this->player = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(25)
		this->add(tmp9);
		HX_STACK_LINE(26)
		::Player tmp10 = this->player;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(26)
		::NPC tmp11 = ::NPC_obj::__new((int)100,(int)200,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(26)
		::NPC tmp12 = this->npc = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(26)
		this->add(tmp12);
		HX_STACK_LINE(27)
		::flixel::group::FlxTypedGroup tmp13 = this->walls;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(27)
		this->add(tmp13);
		HX_STACK_LINE(28)
		::TextCloud tmp14 = ::TextCloud_obj::__new((int)30,(int)30,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(28)
		this->textcloud = tmp14;
		HX_STACK_LINE(29)
		::flixel::input::mouse::FlxMouse tmp15 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(29)
		tmp15->set_visible(false);
	}
return null();
}


Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",33,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(34)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		this->super::update(tmp);
		HX_STACK_LINE(35)
		Dynamic tmp1 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		::flixel::FlxG_obj::overlap(null(),null(),null(),tmp1);
		HX_STACK_LINE(37)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			::flixel::input::keyboard::FlxKeyList _this = tmp3->justPressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(37)
			int tmp4 = _this->status;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			tmp2 = _this->keyManager->checkStatus((int)79,tmp4);
		}
		HX_STACK_LINE(37)
		if ((tmp2)){
			HX_STACK_LINE(38)
			::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			Float tmp4 = tmp3->zoom;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(38)
			Float tmp5 = (tmp4 + ((Float).1));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			this->setZoom(tmp5);
		}
		HX_STACK_LINE(39)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::flixel::input::keyboard::FlxKeyboard tmp4 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			::flixel::input::keyboard::FlxKeyList _this = tmp4->justPressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(39)
			int tmp5 = _this->status;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			tmp3 = _this->keyManager->checkStatus((int)76,tmp5);
		}
		HX_STACK_LINE(39)
		if ((tmp3)){
			HX_STACK_LINE(40)
			::flixel::FlxCamera tmp4 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			Float tmp5 = tmp4->zoom;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			Float tmp6 = (tmp5 - ((Float).1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			this->setZoom(tmp6);
		}
	}
return null();
}


Void PlayState_obj::setZoom( Float zoom){
{
		HX_STACK_FRAME("PlayState","setZoom",0x60be0dc4,"PlayState.setZoom","PlayState.hx",45,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(zoom,"zoom")
		HX_STACK_LINE(46)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			if ((tmp2)){
				HX_STACK_LINE(46)
				tmp3 = (zoom < ((Float)0.5));
			}
			else{
				HX_STACK_LINE(46)
				tmp3 = false;
			}
			HX_STACK_LINE(46)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			if ((tmp3)){
				HX_STACK_LINE(46)
				tmp4 = ((Float)0.5);
			}
			else{
				HX_STACK_LINE(46)
				tmp4 = zoom;
			}
			HX_STACK_LINE(46)
			Float lowerBound = tmp4;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(46)
			bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			if ((tmp5)){
				HX_STACK_LINE(46)
				tmp6 = (lowerBound > (int)4);
			}
			else{
				HX_STACK_LINE(46)
				tmp6 = false;
			}
			HX_STACK_LINE(46)
			if ((tmp6)){
				HX_STACK_LINE(46)
				tmp1 = (int)4;
			}
			else{
				HX_STACK_LINE(46)
				tmp1 = lowerBound;
			}
		}
		HX_STACK_LINE(46)
		Float tmp2 = ((Float)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		tmp->set_zoom(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,setZoom,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(npc,"npc");
	HX_MARK_MEMBER_NAME(walls,"walls");
	HX_MARK_MEMBER_NAME(textcloud,"textcloud");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(npc,"npc");
	HX_VISIT_MEMBER_NAME(walls,"walls");
	HX_VISIT_MEMBER_NAME(textcloud,"textcloud");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"npc") ) { return npc; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"walls") ) { return walls; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setZoom") ) { return setZoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textcloud") ) { return textcloud; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"npc") ) { npc=inValue.Cast< ::NPC >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"walls") ) { walls=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textcloud") ) { textcloud=inValue.Cast< ::TextCloud >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("npc","\xe1","\xd9","\x53","\x00"));
	outFields->push(HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"));
	outFields->push(HX_HCSTRING("textcloud","\xa8","\x39","\x23","\x4e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::NPC*/ ,(int)offsetof(PlayState_obj,npc),HX_HCSTRING("npc","\xe1","\xd9","\x53","\x00")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,walls),HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5")},
	{hx::fsObject /*::TextCloud*/ ,(int)offsetof(PlayState_obj,textcloud),HX_HCSTRING("textcloud","\xa8","\x39","\x23","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("npc","\xe1","\xd9","\x53","\x00"),
	HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"),
	HX_HCSTRING("textcloud","\xa8","\x39","\x23","\x4e"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("setZoom","\xd5","\xe3","\x7c","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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

