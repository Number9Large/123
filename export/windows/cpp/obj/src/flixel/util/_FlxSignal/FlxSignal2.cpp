#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxSignal2_obj::__construct()
{
HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal2","new",0xab2cb8e3,"flixel.util._FlxSignal.FlxSignal2.new","flixel/util/FlxSignal.hx",232,0x3c758c5e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(233)
	super::__construct();
	HX_STACK_LINE(234)
	Dynamic tmp = this->dispatch2_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	this->dispatch = tmp;
}
;
	return null();
}

//FlxSignal2_obj::~FlxSignal2_obj() { }

Dynamic FlxSignal2_obj::__CreateEmpty() { return  new FlxSignal2_obj; }
hx::ObjectPtr< FlxSignal2_obj > FlxSignal2_obj::__new()
{  hx::ObjectPtr< FlxSignal2_obj > _result_ = new FlxSignal2_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSignal2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSignal2_obj > _result_ = new FlxSignal2_obj();
	_result_->__construct();
	return _result_;}

Void FlxSignal2_obj::dispatch2( Dynamic value1,Dynamic value2){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal2","dispatch2",0x90e3c0fb,"flixel.util._FlxSignal.FlxSignal2.dispatch2","flixel/util/FlxSignal.hx",288,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_LINE(289)
		this->processingListeners = true;
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(290)
			Array< ::Dynamic > _g1 = this->handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(290)
			while((true)){
				HX_STACK_LINE(290)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(290)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(290)
				if ((tmp1)){
					HX_STACK_LINE(290)
					break;
				}
				HX_STACK_LINE(290)
				::flixel::util::_FlxSignal::FlxSignalHandler tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(290)
				::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp2;		HX_STACK_VAR(handler,"handler");
				HX_STACK_LINE(290)
				++(_g);
				HX_STACK_LINE(239)
				Dynamic tmp3 = value1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(239)
				Dynamic tmp4 = value2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(292)
				handler->listener(tmp3,tmp4);
				HX_STACK_LINE(294)
				bool tmp5 = handler->dispatchOnce;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(294)
				if ((tmp5)){
					HX_STACK_LINE(295)
					Dynamic tmp6 = handler->listener;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(295)
					this->remove(tmp6);
				}
			}
		}
		HX_STACK_LINE(298)
		this->processingListeners = false;
		HX_STACK_LINE(300)
		{
			HX_STACK_LINE(300)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(300)
			Array< ::Dynamic > _g1 = this->pendingRemove;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(300)
			while((true)){
				HX_STACK_LINE(300)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(300)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(300)
				if ((tmp1)){
					HX_STACK_LINE(300)
					break;
				}
				HX_STACK_LINE(300)
				::flixel::util::_FlxSignal::FlxSignalHandler tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(300)
				::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp2;		HX_STACK_VAR(handler,"handler");
				HX_STACK_LINE(300)
				++(_g);
				HX_STACK_LINE(302)
				Dynamic tmp3 = handler->listener;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(302)
				this->remove(tmp3);
			}
		}
		HX_STACK_LINE(304)
		int tmp = this->pendingRemove->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		if ((tmp1)){
			HX_STACK_LINE(305)
			this->pendingRemove = Array_obj< ::Dynamic >::__new();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSignal2_obj,dispatch2,(void))


FlxSignal2_obj::FlxSignal2_obj()
{
}

Dynamic FlxSignal2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dispatch2") ) { return dispatch2_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dispatch2","\x38","\x14","\xf1","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSignal2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSignal2_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSignal2_obj::__mClass;

void FlxSignal2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxSignal.FlxSignal2","\x71","\x0b","\xc8","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSignal2_obj >;
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

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
