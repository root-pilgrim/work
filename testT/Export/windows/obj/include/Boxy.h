#ifndef INCLUDED_Boxy
#define INCLUDED_Boxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Boxy)
HX_DECLARE_CLASS2(openfl,geom,Point)



class HXCPP_CLASS_ATTRIBUTES Boxy_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Boxy_obj OBJ_;
		Boxy_obj();

	public:
		enum { _hx_ClassId = 0x0047ae52 };

		void __construct(::hx::Null< Float >  __o_xPos,::hx::Null< Float >  __o_yPos,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Boxy")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Boxy"); }
		static ::hx::ObjectPtr< Boxy_obj > __new(::hx::Null< Float >  __o_xPos,::hx::Null< Float >  __o_yPos,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static ::hx::ObjectPtr< Boxy_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_xPos,::hx::Null< Float >  __o_yPos,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Boxy_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Boxy",2e,b8,f4,2b); }

		 ::openfl::geom::Point position;
		 ::openfl::geom::Point size;
};


#endif /* INCLUDED_Boxy */ 
