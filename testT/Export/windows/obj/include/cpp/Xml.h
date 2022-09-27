#ifndef INCLUDED_cpp_Xml
#define INCLUDED_cpp_Xml

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cpp,Xml)

namespace cpp{


class HXCPP_CLASS_ATTRIBUTES Xml_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Xml_obj OBJ_;
		Xml_obj();

	public:
		enum { _hx_ClassId = 0x56288318 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cpp.Xml")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"cpp.Xml"); }
		static ::hx::ObjectPtr< Xml_obj > __new();
		static ::hx::ObjectPtr< Xml_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Xml_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Xml",b7,25,43,00); }

		::String _nodeName;
		::String _nodeValue;
		 ::Dynamic _attributes;
		::Array< ::Dynamic> _children;
		 ::cpp::Xml _parent;
		int nodeType;
		void addChild( ::cpp::Xml x);
		::Dynamic addChild_dyn();

};

} // end namespace cpp

#endif /* INCLUDED_cpp_Xml */ 
