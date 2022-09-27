#ifndef INCLUDED_openfl_display3D__internal_AGALConverter
#define INCLUDED_openfl_display3D__internal_AGALConverter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,display,_internal,SamplerState)
HX_DECLARE_CLASS3(openfl,display3D,_internal,AGALConverter)
HX_DECLARE_CLASS4(openfl,display3D,_internal,_AGALConverter,ProgramType)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES AGALConverter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AGALConverter_obj OBJ_;
		AGALConverter_obj();

	public:
		enum { _hx_ClassId = 0x1cd8d5b2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._internal.AGALConverter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display3D._internal.AGALConverter"); }

		inline static ::hx::ObjectPtr< AGALConverter_obj > __new() {
			::hx::ObjectPtr< AGALConverter_obj > __this = new AGALConverter_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AGALConverter_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AGALConverter_obj *__this = (AGALConverter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AGALConverter_obj), false, "openfl.display3D._internal.AGALConverter"));
			*(void **)__this = AGALConverter_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AGALConverter_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AGALConverter",8f,ef,1a,42); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::Dynamic limitedProfile;
		static ::String prefixFromType(int regType, ::openfl::display3D::_internal::_AGALConverter::ProgramType programType);
		static ::Dynamic prefixFromType_dyn();

		static  cpp::Int64Struct readUInt64( ::openfl::utils::ByteArrayData byteArray);
		static ::Dynamic readUInt64_dyn();

		static ::String convertToGLSL( ::openfl::utils::ByteArrayData agal,::Array< ::Dynamic> samplerState);
		static ::Dynamic convertToGLSL_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal

#endif /* INCLUDED_openfl_display3D__internal_AGALConverter */ 
