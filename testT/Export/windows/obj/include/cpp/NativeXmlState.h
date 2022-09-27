#ifndef INCLUDED_cpp_NativeXmlState
#define INCLUDED_cpp_NativeXmlState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cpp,NativeXmlState)
HX_DECLARE_CLASS1(cpp,Xml)

namespace cpp{


class HXCPP_CLASS_ATTRIBUTES NativeXmlState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NativeXmlState_obj OBJ_;
		NativeXmlState_obj();

	public:
		enum { _hx_ClassId = 0x329d41d0 };

		void __construct( ::cpp::Xml x);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cpp.NativeXmlState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"cpp.NativeXmlState"); }
		static ::hx::ObjectPtr< NativeXmlState_obj > __new( ::cpp::Xml x);
		static ::hx::ObjectPtr< NativeXmlState_obj > __alloc(::hx::Ctx *_hx_ctx, ::cpp::Xml x);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeXmlState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeXmlState",91,f5,06,e4); }

		 ::cpp::Xml cur;
		void xml(::String name, ::Dynamic att);
		::Dynamic xml_dyn();

		void cdata(::String text);
		::Dynamic cdata_dyn();

		void pcdata(::String text);
		::Dynamic pcdata_dyn();

		void comment(::String text);
		::Dynamic comment_dyn();

		void doctype(::String text);
		::Dynamic doctype_dyn();

		void done();
		::Dynamic done_dyn();

};

} // end namespace cpp

#endif /* INCLUDED_cpp_NativeXmlState */ 
