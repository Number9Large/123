#include <hxcpp.h>

#ifndef INCLUDED_NPC
#include <NPC.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

Void NPC_obj::__construct(int X,int Y,::Player player)
{
HX_STACK_FRAME("NPC","new",0x5aab8b33,"NPC.new","NPC.hx",23,0x6c511b9d)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(player,"player")
{
	HX_STACK_LINE(24)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(25)
	this->player = player;
	HX_STACK_LINE(26)
	this->makeGraphic((int)8,(int)8,(int)-256,null(),null());
	HX_STACK_LINE(27)
	::flixel::math::FlxPoint tmp2 = this->maxVelocity;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	tmp2->set((int)80,(int)80);
	HX_STACK_LINE(28)
	::flixel::math::FlxPoint tmp3 = this->drag;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	::flixel::math::FlxPoint tmp4 = this->maxVelocity;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	Float tmp6 = (tmp5 * (int)3);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	tmp3->set_x(tmp6);
	HX_STACK_LINE(29)
	::flixel::math::FlxPoint tmp7 = this->drag;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	::flixel::math::FlxPoint tmp8 = this->maxVelocity;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(29)
	Float tmp10 = (tmp9 * (int)3);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(29)
	tmp7->set_y(tmp10);
}
;
	return null();
}

//NPC_obj::~NPC_obj() { }

Dynamic NPC_obj::__CreateEmpty() { return  new NPC_obj; }
hx::ObjectPtr< NPC_obj > NPC_obj::__new(int X,int Y,::Player player)
{  hx::ObjectPtr< NPC_obj > _result_ = new NPC_obj();
	_result_->__construct(X,Y,player);
	return _result_;}

Dynamic NPC_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NPC_obj > _result_ = new NPC_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void NPC_obj::update( Float elapsed){
{
		HX_STACK_FRAME("NPC","update",0x7a361116,"NPC.update","NPC.hx",34,0x6c511b9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(35)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		this->super::update(tmp);
		HX_STACK_LINE(36)
		::flixel::math::FlxPoint tmp1 = this->acceleration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		tmp1->set_x((int)0);
		HX_STACK_LINE(37)
		::flixel::math::FlxPoint tmp2 = this->acceleration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		tmp2->set_y((int)0);
	}
return null();
}



NPC_obj::NPC_obj()
{
}

void NPC_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NPC);
	HX_MARK_MEMBER_NAME(player,"player");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NPC_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NPC_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NPC_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NPC_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(NPC_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NPC_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NPC_obj::__mClass,"__mClass");
};

#endif

hx::Class NPC_obj::__mClass;

void NPC_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("NPC","\xc1","\x75","\x3b","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NPC_obj >;
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

