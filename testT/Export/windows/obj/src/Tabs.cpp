#include <hxcpp.h>

#ifndef INCLUDED_Tabs
#include <Tabs.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5e0bc0c7211e7f05_11_new,"Tabs","new",0x0af92490,"Tabs.new","Tabs.hx",11,0x27149ce0)
HX_LOCAL_STACK_FRAME(_hx_pos_5e0bc0c7211e7f05_23_h,"Tabs","h",0xb0f6e898,"Tabs.h","Tabs.hx",23,0x27149ce0)

void Tabs_obj::__construct(::String name,int id){
            	HX_GC_STACKFRAME(&_hx_pos_5e0bc0c7211e7f05_11_new)
HXLINE(  13)		this->tab =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  12)		this->q =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  15)		this->tab->set_text(name);
HXLINE(  16)		this->tab->set_x(( (Float)((25 + (100 * id))) ));
HXLINE(  17)		this->tab->set_y(( (Float)(25) ));
HXLINE(  18)		this->tab->set_width(( (Float)(100) ));
HXLINE(  19)		this->tab->set_height(( (Float)(25) ));
HXLINE(  20)		super::__construct(this->tab,this->tab,this->tab,this->tab);
            	}

Dynamic Tabs_obj::__CreateEmpty() { return new Tabs_obj; }

void *Tabs_obj::_hx_vtable = 0;

Dynamic Tabs_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tabs_obj > _hx_result = new Tabs_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Tabs_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c22d2c2) {
		if (inClassId<=(int)0x0a9c7d56) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0a9c7d56;
			}
		} else {
			return inClassId==(int)0x0c22d2c2;
		}
	} else {
		return inClassId==(int)0x0c89e854 || inClassId==(int)0x6b353933;
	}
}

void Tabs_obj::h(){
            	HX_STACKFRAME(&_hx_pos_5e0bc0c7211e7f05_23_h)
HXLINE(  24)		this->q->get_graphics()->lineStyle(1,0,null(),null(),null(),null(),null(),null());
HXLINE(  25)		 ::openfl::display::Graphics _hx_tmp = this->q->get_graphics();
HXDLIN(  25)		Float _hx_tmp1 = this->tab->get_x();
HXDLIN(  25)		_hx_tmp->moveTo(_hx_tmp1,this->tab->get_y());
HXLINE(  26)		 ::openfl::display::Graphics _hx_tmp2 = this->q->get_graphics();
HXDLIN(  26)		Float _hx_tmp3 = (this->tab->get_x() + 100);
HXDLIN(  26)		_hx_tmp2->lineTo(_hx_tmp3,this->tab->get_y());
HXLINE(  27)		 ::openfl::display::Graphics _hx_tmp4 = this->q->get_graphics();
HXDLIN(  27)		Float _hx_tmp5 = (this->tab->get_x() + 100);
HXDLIN(  27)		_hx_tmp4->lineTo(_hx_tmp5,(this->tab->get_y() + 25));
HXLINE(  28)		 ::openfl::display::Graphics _hx_tmp6 = this->q->get_graphics();
HXDLIN(  28)		Float _hx_tmp7 = this->tab->get_x();
HXDLIN(  28)		_hx_tmp6->lineTo(_hx_tmp7,(this->tab->get_y() + 25));
HXLINE(  29)		 ::openfl::display::Graphics _hx_tmp8 = this->q->get_graphics();
HXDLIN(  29)		Float _hx_tmp9 = this->tab->get_x();
HXDLIN(  29)		_hx_tmp8->lineTo(_hx_tmp9,this->tab->get_y());
HXLINE(  30)		{
HXLINE(  31)			this->q->get_graphics()->beginFill(9413302,1);
HXLINE(  32)			 ::openfl::display::Graphics _hx_tmp10 = this->q->get_graphics();
HXDLIN(  32)			Float _hx_tmp11 = this->tab->get_x();
HXDLIN(  32)			Float _hx_tmp12 = this->tab->get_y();
HXDLIN(  32)			Float _hx_tmp13 = this->tab->get_width();
HXDLIN(  32)			_hx_tmp10->drawRect(_hx_tmp11,_hx_tmp12,_hx_tmp13,this->tab->get_height());
HXLINE(  33)			this->q->get_graphics()->endFill();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tabs_obj,h,(void))


::hx::ObjectPtr< Tabs_obj > Tabs_obj::__new(::String name,int id) {
	::hx::ObjectPtr< Tabs_obj > __this = new Tabs_obj();
	__this->__construct(name,id);
	return __this;
}

::hx::ObjectPtr< Tabs_obj > Tabs_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,int id) {
	Tabs_obj *__this = (Tabs_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tabs_obj), true, "Tabs"));
	*(void **)__this = Tabs_obj::_hx_vtable;
	__this->__construct(name,id);
	return __this;
}

Tabs_obj::Tabs_obj()
{
}

void Tabs_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tabs);
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(tab,"tab");
	 ::openfl::display::SimpleButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tabs_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(tab,"tab");
	 ::openfl::display::SimpleButton_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Tabs_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { return ::hx::Val( q ); }
		if (HX_FIELD_EQ(inName,"h") ) { return ::hx::Val( h_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"tab") ) { return ::hx::Val( tab ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Tabs_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"tab") ) { tab=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tabs_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("q",71,00,00,00));
	outFields->push(HX_("tab",55,5a,58,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tabs_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(Tabs_obj,q),HX_("q",71,00,00,00)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Tabs_obj,tab),HX_("tab",55,5a,58,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tabs_obj_sStaticStorageInfo = 0;
#endif

static ::String Tabs_obj_sMemberFields[] = {
	HX_("q",71,00,00,00),
	HX_("tab",55,5a,58,00),
	HX_("h",68,00,00,00),
	::String(null()) };

::hx::Class Tabs_obj::__mClass;

void Tabs_obj::__register()
{
	Tabs_obj _hx_dummy;
	Tabs_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Tabs",9e,dc,cf,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tabs_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tabs_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tabs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tabs_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

