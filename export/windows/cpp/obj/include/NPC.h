#ifndef INCLUDED_NPC
#define INCLUDED_NPC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(NPC)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  NPC_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef NPC_obj OBJ_;
		NPC_obj();
		Void __construct(int X,int Y,::Player player);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="NPC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NPC_obj > __new(int X,int Y,::Player player);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NPC_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NPC","\xc1","\x75","\x3b","\x00"); }

		::Player player;
		virtual Void update( Float elapsed);

};


#endif /* INCLUDED_NPC */ 
