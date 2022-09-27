#include <hxcpp.h>

#ifndef INCLUDED_GridItem
#include <GridItem.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11e150052c43abeb_6_new,"GridItem","new",0x4e8c008b,"GridItem.new","GridItem.hx",6,0xe83e9945)

void GridItem_obj::__construct(::String name,int locateX,int locateY){
            	HX_GC_STACKFRAME(&_hx_pos_11e150052c43abeb_6_new)
HXLINE(   7)		this->item =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(   9)		this->item->set_text(name);
HXLINE(  10)		this->item->set_width(( (Float)(50) ));
HXLINE(  11)		this->item->set_height(( (Float)(50) ));
HXLINE(  12)		this->item->set_x(( (Float)((175 + (60 * locateX))) ));
HXLINE(  13)		this->item->set_y(( (Float)((70 + (60 * locateY))) ));
HXLINE(  14)		super::__construct(this->item,this->item,this->item,this->item);
            	}

Dynamic GridItem_obj::__CreateEmpty() { return new GridItem_obj; }

void *GridItem_obj::_hx_vtable = 0;

Dynamic GridItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GridItem_obj > _hx_result = new GridItem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GridItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0a9c7d56) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0a9c7d56;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x6b353933 || inClassId==(int)0x7d4151d9;
	}
}


::hx::ObjectPtr< GridItem_obj > GridItem_obj::__new(::String name,int locateX,int locateY) {
	::hx::ObjectPtr< GridItem_obj > __this = new GridItem_obj();
	__this->__construct(name,locateX,locateY);
	return __this;
}

::hx::ObjectPtr< GridItem_obj > GridItem_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,int locateX,int locateY) {
	GridItem_obj *__this = (GridItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GridItem_obj), true, "GridItem"));
	*(void **)__this = GridItem_obj::_hx_vtable;
	__this->__construct(name,locateX,locateY);
	return __this;
}

GridItem_obj::GridItem_obj()
{
}

void GridItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GridItem);
	HX_MARK_MEMBER_NAME(item,"item");
	 ::openfl::display::SimpleButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GridItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(item,"item");
	 ::openfl::display::SimpleButton_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GridItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"item") ) { return ::hx::Val( item ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GridItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"item") ) { item=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GridItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("item",13,c5,bf,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GridItem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(GridItem_obj,item),HX_("item",13,c5,bf,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GridItem_obj_sStaticStorageInfo = 0;
#endif

static ::String GridItem_obj_sMemberFields[] = {
	HX_("item",13,c5,bf,45),
	::String(null()) };

::hx::Class GridItem_obj::__mClass;

void GridItem_obj::__register()
{
	GridItem_obj _hx_dummy;
	GridItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GridItem",19,5f,b0,21);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GridItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GridItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GridItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GridItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

