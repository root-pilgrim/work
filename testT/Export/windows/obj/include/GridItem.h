#ifndef INCLUDED_GridItem
#define INCLUDED_GridItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
HX_DECLARE_CLASS0(GridItem)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)



class HXCPP_CLASS_ATTRIBUTES GridItem_obj : public  ::openfl::display::SimpleButton_obj
{
	public:
		typedef  ::openfl::display::SimpleButton_obj super;
		typedef GridItem_obj OBJ_;
		GridItem_obj();

	public:
		enum { _hx_ClassId = 0x7d4151d9 };

		void __construct(::String name,int locateX,int locateY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GridItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GridItem"); }
		static ::hx::ObjectPtr< GridItem_obj > __new(::String name,int locateX,int locateY);
		static ::hx::ObjectPtr< GridItem_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int locateX,int locateY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GridItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GridItem",19,5f,b0,21); }

		 ::openfl::text::TextField item;
};


#endif /* INCLUDED_GridItem */ 
