#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(GridItem)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)



class HXCPP_CLASS_ATTRIBUTES Main_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();

	public:
		enum { _hx_ClassId = 0x07825a7d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Main")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Main"); }
		static ::hx::ObjectPtr< Main_obj > __new();
		static ::hx::ObjectPtr< Main_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Main",59,64,2f,33); }

		::Array< ::Dynamic> grids;
		 ::openfl::text::TextField textArea;
		Float curLocY;
		Float curLocX;
		void tabs();
		::Dynamic tabs_dyn();

		void homeTab(::String name,int id);
		::Dynamic homeTab_dyn();

		void homeBtnImg();
		::Dynamic homeBtnImg_dyn();

		void homeBtnXml();
		::Dynamic homeBtnXml_dyn();

		void homeBtnNewTab();
		::Dynamic homeBtnNewTab_dyn();

		void newTab(::String name,::String content);
		::Dynamic newTab_dyn();

		void gridTab(::String name,int id);
		::Dynamic gridTab_dyn();

		void textTab(::String name,int id);
		::Dynamic textTab_dyn();

		void buildGrid(int iteratorWidth,int iteratorHeight);
		::Dynamic buildGrid_dyn();

		void textAreaDraw(::String tab);
		::Dynamic textAreaDraw_dyn();

		void rollHorizont();
		::Dynamic rollHorizont_dyn();

		void rollsVertical();
		::Dynamic rollsVertical_dyn();

		void borderText();
		::Dynamic borderText_dyn();

		void addImg1(::String src);
		::Dynamic addImg1_dyn();

};


#endif /* INCLUDED_Main */ 
