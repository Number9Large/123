#include <hxcpp.h>

#ifndef INCLUDED_Wall
#include <Wall.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void Wall_obj::__construct(int X,int Y,int W,int H)
{
HX_STACK_FRAME("Wall","new",0xae54071c,"Wall.new","Wall.hx",22,0x61364fd4)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(W,"W")
HX_STACK_ARG(H,"H")
{
	HX_STACK_LINE(23)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(24)
	int tmp2 = W;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	int tmp3 = H;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	this->makeGraphic(tmp2,tmp3,(int)-16744448,null(),null());
	HX_STACK_LINE(25)
	this->set_immovable(true);
}
;
	return null();
}

//Wall_obj::~Wall_obj() { }

Dynamic Wall_obj::__CreateEmpty() { return  new Wall_obj; }
hx::ObjectPtr< Wall_obj > Wall_obj::__new(int X,int Y,int W,int H)
{  hx::ObjectPtr< Wall_obj > _result_ = new Wall_obj();
	_result_->__construct(X,Y,W,H);
	return _result_;}

Dynamic Wall_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Wall_obj > _result_ = new Wall_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Wall_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Wall","update",0xc6cf2ccd,"Wall.update","Wall.hx",30,0x61364fd4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(31)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		this->super::update(tmp);
	}
return null();
}



Wall_obj::Wall_obj()
{
}

Dynamic Wall_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Wall_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Wall_obj::__mClass,"__mClass");
};

#endif

hx::Class Wall_obj::__mClass;

void Wall_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Wall","\x2a","\x89","\xcb","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Wall_obj >;
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

