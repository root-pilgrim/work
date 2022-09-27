#ifndef INCLUDED_openfl_media_SoundMixer
#define INCLUDED_openfl_media_SoundMixer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundMixer)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)

namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES SoundMixer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SoundMixer_obj OBJ_;
		SoundMixer_obj();

	public:
		enum { _hx_ClassId = 0x24ff9a8a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.media.SoundMixer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.media.SoundMixer"); }

		inline static ::hx::ObjectPtr< SoundMixer_obj > __new() {
			::hx::ObjectPtr< SoundMixer_obj > __this = new SoundMixer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SoundMixer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SoundMixer_obj *__this = (SoundMixer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SoundMixer_obj), false, "openfl.media.SoundMixer"));
			*(void **)__this = SoundMixer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SoundMixer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SoundMixer",da,21,66,68); }

		static void __boot();
		static int MAX_ACTIVE_CHANNELS;
		static int bufferTime;
		static ::Array< ::Dynamic> _hx___soundChannels;
		static  ::openfl::media::SoundTransform _hx___soundTransform;
		static bool areSoundsInaccessible();
		static ::Dynamic areSoundsInaccessible_dyn();

		static void stopAll();
		static ::Dynamic stopAll_dyn();

		static void _hx___registerSoundChannel( ::openfl::media::SoundChannel soundChannel);
		static ::Dynamic _hx___registerSoundChannel_dyn();

		static void _hx___unregisterSoundChannel( ::openfl::media::SoundChannel soundChannel);
		static ::Dynamic _hx___unregisterSoundChannel_dyn();

		static  ::openfl::media::SoundTransform get_soundTransform();
		static ::Dynamic get_soundTransform_dyn();

		static  ::openfl::media::SoundTransform set_soundTransform( ::openfl::media::SoundTransform value);
		static ::Dynamic set_soundTransform_dyn();

};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_SoundMixer */ 
