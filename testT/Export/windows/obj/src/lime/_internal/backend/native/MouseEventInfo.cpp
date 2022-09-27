#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_MouseEventInfo
#include <lime/_internal/backend/native/MouseEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3eb566585b06ea2e_790_new,"lime._internal.backend.native.MouseEventInfo","new",0x46fd57c7,"lime._internal.backend.native.MouseEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",790,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_3eb566585b06ea2e_802_clone,"lime._internal.backend.native.MouseEventInfo","clone",0xb20a8284,"lime._internal.backend.native.MouseEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",802,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void MouseEventInfo_obj::__construct( ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_button,::hx::Null< Float >  __o_movementX,::hx::Null< Float >  __o_movementY){
            		int windowID = __o_windowID.Default(0);
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		int button = __o_button.Default(0);
            		Float movementX = __o_movementX.Default(0);
            		Float movementY = __o_movementY.Default(0);
            	HX_STACKFRAME(&_hx_pos_3eb566585b06ea2e_790_new)
HXLINE( 791)		this->type = ( (int)(type) );
HXLINE( 792)		this->windowID = 0;
HXLINE( 793)		this->x = x;
HXLINE( 794)		this->y = y;
HXLINE( 795)		this->button = button;
HXLINE( 796)		this->movementX = movementX;
HXLINE( 797)		this->movementY = movementY;
            	}

Dynamic MouseEventInfo_obj::__CreateEmpty() { return new MouseEventInfo_obj; }

void *MouseEventInfo_obj::_hx_vtable = 0;

Dynamic MouseEventInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MouseEventInfo_obj > _hx_result = new MouseEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool MouseEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x41ab0347;
}

 ::lime::_internal::backend::native::MouseEventInfo MouseEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_3eb566585b06ea2e_802_clone)
HXDLIN( 802)		return  ::lime::_internal::backend::native::MouseEventInfo_obj::__alloc( HX_CTX ,this->type,this->windowID,this->x,this->y,this->button,this->movementX,this->movementY);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MouseEventInfo_obj,clone,return )


MouseEventInfo_obj::MouseEventInfo_obj()
{
}

::hx::Val MouseEventInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return ::hx::Val( button ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { return ::hx::Val( windowID ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movementX") ) { return ::hx::Val( movementX ); }
		if (HX_FIELD_EQ(inName,"movementY") ) { return ::hx::Val( movementY ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MouseEventInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { windowID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movementX") ) { movementX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movementY") ) { movementY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("button",f2,61,e0,d9));
	outFields->push(HX_("movementX",49,04,5d,30));
	outFields->push(HX_("movementY",4a,04,5d,30));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("windowID",cb,af,cd,7d));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MouseEventInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(MouseEventInfo_obj,button),HX_("button",f2,61,e0,d9)},
	{::hx::fsFloat,(int)offsetof(MouseEventInfo_obj,movementX),HX_("movementX",49,04,5d,30)},
	{::hx::fsFloat,(int)offsetof(MouseEventInfo_obj,movementY),HX_("movementY",4a,04,5d,30)},
	{::hx::fsInt,(int)offsetof(MouseEventInfo_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsInt,(int)offsetof(MouseEventInfo_obj,windowID),HX_("windowID",cb,af,cd,7d)},
	{::hx::fsFloat,(int)offsetof(MouseEventInfo_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(MouseEventInfo_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MouseEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String MouseEventInfo_obj_sMemberFields[] = {
	HX_("button",f2,61,e0,d9),
	HX_("movementX",49,04,5d,30),
	HX_("movementY",4a,04,5d,30),
	HX_("type",ba,f2,08,4d),
	HX_("windowID",cb,af,cd,7d),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class MouseEventInfo_obj::__mClass;

void MouseEventInfo_obj::__register()
{
	MouseEventInfo_obj _hx_dummy;
	MouseEventInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.MouseEventInfo",55,68,de,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MouseEventInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MouseEventInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseEventInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
