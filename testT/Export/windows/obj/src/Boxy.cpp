#include <hxcpp.h>

#ifndef INCLUDED_Boxy
#include <Boxy.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_237f0dfe55feb1bf_10_new,"Boxy","new",0x8bdb0820,"Boxy.new","Boxy.hx",10,0x82595b50)

void Boxy_obj::__construct(::hx::Null< Float >  __o_xPos,::hx::Null< Float >  __o_yPos,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float xPos = __o_xPos.Default(0);
            		Float yPos = __o_yPos.Default(0);
            		Float width = __o_width.Default(100);
            		Float height = __o_height.Default(30);
            	HX_GC_STACKFRAME(&_hx_pos_237f0dfe55feb1bf_10_new)
HXLINE(  11)		this->position =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,xPos,yPos);
HXLINE(  12)		this->size =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,width,height);
            	}

Dynamic Boxy_obj::__CreateEmpty() { return new Boxy_obj; }

void *Boxy_obj::_hx_vtable = 0;

Dynamic Boxy_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Boxy_obj > _hx_result = new Boxy_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Boxy_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0047ae52;
}


::hx::ObjectPtr< Boxy_obj > Boxy_obj::__new(::hx::Null< Float >  __o_xPos,::hx::Null< Float >  __o_yPos,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	::hx::ObjectPtr< Boxy_obj > __this = new Boxy_obj();
	__this->__construct(__o_xPos,__o_yPos,__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< Boxy_obj > Boxy_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_xPos,::hx::Null< Float >  __o_yPos,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	Boxy_obj *__this = (Boxy_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Boxy_obj), true, "Boxy"));
	*(void **)__this = Boxy_obj::_hx_vtable;
	__this->__construct(__o_xPos,__o_yPos,__o_width,__o_height);
	return __this;
}

Boxy_obj::Boxy_obj()
{
}

void Boxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Boxy);
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_END_CLASS();
}

void Boxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(size,"size");
}

::hx::Val Boxy_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Boxy_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Boxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("size",c1,a0,53,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Boxy_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(Boxy_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(Boxy_obj,size),HX_("size",c1,a0,53,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Boxy_obj_sStaticStorageInfo = 0;
#endif

static ::String Boxy_obj_sMemberFields[] = {
	HX_("position",a9,a0,fa,ca),
	HX_("size",c1,a0,53,4c),
	::String(null()) };

::hx::Class Boxy_obj::__mClass;

void Boxy_obj::__register()
{
	Boxy_obj _hx_dummy;
	Boxy_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Boxy",2e,b8,f4,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Boxy_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Boxy_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Boxy_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Boxy_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

