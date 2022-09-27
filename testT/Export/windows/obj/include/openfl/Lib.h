#ifndef INCLUDED_openfl_Lib
#define INCLUDED_openfl_Lib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS1(openfl,Lib)
HX_DECLARE_CLASS2(openfl,display,Application)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,URLRequest)

namespace openfl{


class HXCPP_CLASS_ATTRIBUTES Lib_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Lib_obj OBJ_;
		Lib_obj();

	public:
		enum { _hx_ClassId = 0x0758d9a1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.Lib")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.Lib"); }

		inline static ::hx::ObjectPtr< Lib_obj > __new() {
			::hx::ObjectPtr< Lib_obj > __this = new Lib_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Lib_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Lib_obj *__this = (Lib_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Lib_obj), false, "openfl.Lib"));
			*(void **)__this = Lib_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Lib_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Lib",25,07,3a,00); }

		static void __boot();
		static int _hx___lastTimerID;
		static  ::haxe::ds::StringMap _hx___sentWarnings;
		static  ::haxe::ds::IntMap _hx___timers;
		static  ::haxe::ds::StringMap _hx___registeredClassAliases;
		static  ::Dynamic as( ::Dynamic v,::hx::Class c);
		static ::Dynamic as_dyn();

		static  ::openfl::display::MovieClip attach(::String name);
		static ::Dynamic attach_dyn();

		static void clearInterval(int id);
		static ::Dynamic clearInterval_dyn();

		static void clearTimeout(int id);
		static ::Dynamic clearTimeout_dyn();

		static ::hx::Class getDefinitionByName(::String name);
		static ::Dynamic getDefinitionByName_dyn();

		static ::String getQualifiedClassName( ::Dynamic value);
		static ::Dynamic getQualifiedClassName_dyn();

		static ::String getQualifiedSuperclassName( ::Dynamic value);
		static ::Dynamic getQualifiedSuperclassName_dyn();

		static int getTimer();
		static ::Dynamic getTimer_dyn();

		static void getURL( ::openfl::net::URLRequest request,::String target);
		static ::Dynamic getURL_dyn();

		static void navigateToURL( ::openfl::net::URLRequest request,::String window);
		static ::Dynamic navigateToURL_dyn();

		static void notImplemented( ::Dynamic posInfo);
		static ::Dynamic notImplemented_dyn();

		static void preventDefaultTouchMove();
		static ::Dynamic preventDefaultTouchMove_dyn();

		static void sendToURL( ::openfl::net::URLRequest request);
		static ::Dynamic sendToURL_dyn();

		static int setInterval( ::Dynamic closure,int delay,::cpp::VirtualArray args);
		static ::Dynamic setInterval_dyn();

		static int setTimeout( ::Dynamic closure,int delay,::cpp::VirtualArray args);
		static ::Dynamic setTimeout_dyn();

		static void trace( ::Dynamic arg);
		static ::Dynamic trace_dyn();

		static bool isXMLName(::String name);
		static ::Dynamic isXMLName_dyn();

		static ::hx::Class getClassByAlias(::String aliasName);
		static ::Dynamic getClassByAlias_dyn();

		static void registerClassAlias(::String aliasName,::hx::Class classObject);
		static ::Dynamic registerClassAlias_dyn();

		static  ::openfl::display::Application get_application();
		static ::Dynamic get_application_dyn();

		static  ::openfl::display::MovieClip get_current();
		static ::Dynamic get_current_dyn();

};

} // end namespace openfl

#endif /* INCLUDED_openfl_Lib */ 
