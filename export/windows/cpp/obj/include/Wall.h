#ifndef INCLUDED_Wall
#define INCLUDED_Wall

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Wall)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Wall_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Wall_obj OBJ_;
		Wall_obj();
		Void __construct(int X,int Y,int W,int H);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Wall")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Wall_obj > __new(int X,int Y,int W,int H);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Wall_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Wall","\x2a","\x89","\xcb","\x39"); }

		virtual Void update( Float elapsed);

};


#endif /* INCLUDED_Wall */ 
