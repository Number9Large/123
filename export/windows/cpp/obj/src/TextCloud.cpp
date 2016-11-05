#include <hxcpp.h>

#ifndef INCLUDED_TextCloud
#include <TextCloud.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

Void TextCloud_obj::__construct(int X,int Y,::flixel::FlxState state)
{
HX_STACK_FRAME("TextCloud","new",0x3683fe5a,"TextCloud.new","TextCloud.hx",17,0xa7d98a56)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(state,"state")
{
	HX_STACK_LINE(18)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	super::__construct(tmp,tmp1,HX_HCSTRING("assets/images/textcloud.png","\x58","\x64","\xfd","\x85"));
	HX_STACK_LINE(19)
	this->set_alpha(((Float)0.2));
	HX_STACK_LINE(20)
	::flixel::math::FlxPoint tmp2 = this->drag;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	tmp2->set_x((int)10);
	HX_STACK_LINE(21)
	::flixel::math::FlxPoint tmp3 = this->drag;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	tmp3->set_y((int)10);
	HX_STACK_LINE(22)
	::flixel::math::FlxPoint tmp4 = this->velocity;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	tmp4->set_x((int)70);
	HX_STACK_LINE(23)
	this->set_solid(false);
	HX_STACK_LINE(24)
	int tmp5 = (X + (int)10);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	int tmp6 = (Y + (int)10);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(24)
	::flixel::text::FlxText tmp7 = ::flixel::text::FlxText_obj::__new(tmp5,tmp6,(int)50,HX_HCSTRING("sample text","\x63","\x24","\xe3","\x3d"),(int)9,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(24)
	this->txt = tmp7;
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::flixel::text::FlxText tmp8 = this->txt;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(25)
		::flixel::text::FlxText _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(25)
		_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::SHADOW);
		HX_STACK_LINE(25)
		_this->set_borderColor((int)-16777216);
		HX_STACK_LINE(25)
		_this->set_borderSize((int)1);
		HX_STACK_LINE(25)
		_this->set_borderQuality((int)1);
		HX_STACK_LINE(25)
		_this;
	}
	HX_STACK_LINE(26)
	::flixel::text::FlxText tmp8 = this->txt;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	state->add(tmp8);
	HX_STACK_LINE(27)
	state->add(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//TextCloud_obj::~TextCloud_obj() { }

Dynamic TextCloud_obj::__CreateEmpty() { return  new TextCloud_obj; }
hx::ObjectPtr< TextCloud_obj > TextCloud_obj::__new(int X,int Y,::flixel::FlxState state)
{  hx::ObjectPtr< TextCloud_obj > _result_ = new TextCloud_obj();
	_result_->__construct(X,Y,state);
	return _result_;}

Dynamic TextCloud_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextCloud_obj > _result_ = new TextCloud_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void TextCloud_obj::update( Float elapsed){
{
		HX_STACK_FRAME("TextCloud","update",0xb2aed04f,"TextCloud.update","TextCloud.hx",32,0xa7d98a56)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(33)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		this->super::update(tmp);
		HX_STACK_LINE(34)
		::flixel::math::FlxPoint tmp1 = this->acceleration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		tmp1->set_x((int)0);
		HX_STACK_LINE(35)
		::flixel::math::FlxPoint tmp2 = this->acceleration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		tmp2->set_y((int)0);
		HX_STACK_LINE(37)
		::flixel::text::FlxText tmp3 = this->txt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		Float tmp5 = (tmp4 + (int)10);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		tmp3->set_x(tmp5);
		HX_STACK_LINE(38)
		::flixel::text::FlxText tmp6 = this->txt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		Float tmp8 = (tmp7 + (int)10);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		tmp6->set_y(tmp8);
		HX_STACK_LINE(39)
		::flixel::math::FlxPoint tmp9 = this->velocity;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(39)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(39)
		if ((tmp11)){
			HX_STACK_LINE(39)
			::flixel::math::FlxPoint tmp13 = this->velocity;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(39)
			::flixel::math::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(39)
			Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(39)
			tmp12 = (tmp15 == (int)0);
		}
		else{
			HX_STACK_LINE(39)
			tmp12 = false;
		}
		HX_STACK_LINE(39)
		if ((tmp12)){
			HX_STACK_LINE(40)
			this->kill();
		}
	}
return null();
}


Void TextCloud_obj::kill( ){
{
		HX_STACK_FRAME("TextCloud","kill",0x7b01ec64,"TextCloud.kill","TextCloud.hx",44,0xa7d98a56)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->super::kill();
		HX_STACK_LINE(46)
		::flixel::text::FlxText tmp = this->txt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		tmp->kill();
	}
return null();
}


bool TextCloud_obj::set_alive( bool Value){
	HX_STACK_FRAME("TextCloud","set_alive",0x249191aa,"TextCloud.set_alive","TextCloud.hx",49,0xa7d98a56)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(50)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	bool tmp1 = this->super::set_alive(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	return tmp1;
	HX_STACK_LINE(51)
	::flixel::text::FlxText tmp2 = this->txt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	tmp2->set_alive(tmp3);
	HX_STACK_LINE(51)
	return false;
}



TextCloud_obj::TextCloud_obj()
{
}

void TextCloud_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextCloud);
	HX_MARK_MEMBER_NAME(txt,"txt");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextCloud_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(txt,"txt");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextCloud_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { return txt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_alive") ) { return set_alive_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextCloud_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { txt=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextCloud_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("txt","\x70","\x6e","\x58","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(TextCloud_obj,txt),HX_HCSTRING("txt","\x70","\x6e","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("txt","\x70","\x6e","\x58","\x00"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("set_alive","\x30","\xac","\x8b","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextCloud_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextCloud_obj::__mClass,"__mClass");
};

#endif

hx::Class TextCloud_obj::__mClass;

void TextCloud_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TextCloud","\x68","\x89","\x23","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextCloud_obj >;
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

