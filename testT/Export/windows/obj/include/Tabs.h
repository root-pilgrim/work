#ifndef INCLUDED_Tabs
#define INCLUDED_Tabs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
HX_DECLARE_CLASS0(Tabs)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)



class HXCPP_CLASS_ATTRIBUTES Tabs_obj : public  ::openfl::display::SimpleButton_obj
{
	public:
		typedef  ::openfl::display::SimpleButton_obj super;
		typedef Tabs_obj OBJ_;
		Tabs_obj();

	public:
		enum { _hx_ClassId = 0x0c22d2c2 };

		void __construct(::String name,int id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Tabs")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Tabs"); }
		static ::hx::ObjectPtr< Tabs_obj > __new(::String name,int id);
		static ::hx::ObjectPtr< Tabs_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tabs_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tabs",9e,dc,cf,37); }

		 ::openfl::display::Sprite q;
		 ::openfl::text::TextField tab;
		void h();
		::Dynamic h_dyn();

};


#endif /* INCLUDED_Tabs */ 
