#ifndef INCLUDED_haxe_Unserializer
#define INCLUDED_haxe_Unserializer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Unserializer)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES Unserializer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Unserializer_obj OBJ_;
		Unserializer_obj();

	public:
		enum { _hx_ClassId = 0x10bb6271 };

		void __construct(::String buf);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.Unserializer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.Unserializer"); }
		static ::hx::ObjectPtr< Unserializer_obj > __new(::String buf);
		static ::hx::ObjectPtr< Unserializer_obj > __alloc(::hx::Ctx *_hx_ctx,::String buf);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Unserializer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Unserializer",4b,42,41,93); }

		static void __boot();
		static  ::Dynamic DEFAULT_RESOLVER;
		static ::String BASE64;
		static ::Array< int > CODES;
		static ::Array< int > initCodes();
		static ::Dynamic initCodes_dyn();

		static  ::Dynamic run(::String v);
		static ::Dynamic run_dyn();

		::String buf;
		int pos;
		int length;
		::cpp::VirtualArray cache;
		::Array< ::String > scache;
		 ::Dynamic resolver;
		int readDigits();
		::Dynamic readDigits_dyn();

		Float readFloat();
		::Dynamic readFloat_dyn();

		void unserializeObject( ::Dynamic o);
		::Dynamic unserializeObject_dyn();

		 ::Dynamic unserializeEnum(::hx::Class edecl,::String tag);
		::Dynamic unserializeEnum_dyn();

		 ::Dynamic unserialize();
		::Dynamic unserialize_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Unserializer */ 
