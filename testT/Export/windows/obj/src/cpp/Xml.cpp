#include <hxcpp.h>

#ifndef INCLUDED_cpp_Xml
#include <cpp/Xml.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_35dac9c015ca1197_221_new,"cpp.Xml","new",0xb58fcbde,"cpp.Xml.new","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",221,0x6a01d7e3)
HX_LOCAL_STACK_FRAME(_hx_pos_35dac9c015ca1197_390_addChild,"cpp.Xml","addChild",0x28846b7d,"cpp.Xml.addChild","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",390,0x6a01d7e3)
#include "C:/HaxeToolkit/haxe/std/cpp/NativeXmlImport.cpp"
namespace cpp{

void Xml_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_35dac9c015ca1197_221_new)
            	}

Dynamic Xml_obj::__CreateEmpty() { return new Xml_obj; }

void *Xml_obj::_hx_vtable = 0;

Dynamic Xml_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Xml_obj > _hx_result = new Xml_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Xml_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x56288318;
}

void Xml_obj::addChild( ::cpp::Xml x){
            	HX_STACKFRAME(&_hx_pos_35dac9c015ca1197_390_addChild)
HXLINE( 391)		if (::hx::IsNull( this->_children )) {
HXLINE( 392)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("bad nodetype",77,b3,7f,86)));
            		}
HXLINE( 393)		if (::hx::IsNotNull( x->_parent )) {
HXLINE( 394)			x->_parent->_children->remove(x);
            		}
HXLINE( 395)		x->_parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 396)		this->_children->push(x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,addChild,(void))


::hx::ObjectPtr< Xml_obj > Xml_obj::__new() {
	::hx::ObjectPtr< Xml_obj > __this = new Xml_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Xml_obj > Xml_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Xml_obj *__this = (Xml_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Xml_obj), true, "cpp.Xml"));
	*(void **)__this = Xml_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Xml_obj::Xml_obj()
{
}

void Xml_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Xml);
	HX_MARK_MEMBER_NAME(_nodeName,"_nodeName");
	HX_MARK_MEMBER_NAME(_nodeValue,"_nodeValue");
	HX_MARK_MEMBER_NAME(_attributes,"_attributes");
	HX_MARK_MEMBER_NAME(_children,"_children");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(nodeType,"nodeType");
	HX_MARK_END_CLASS();
}

void Xml_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_nodeName,"_nodeName");
	HX_VISIT_MEMBER_NAME(_nodeValue,"_nodeValue");
	HX_VISIT_MEMBER_NAME(_attributes,"_attributes");
	HX_VISIT_MEMBER_NAME(_children,"_children");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(nodeType,"nodeType");
}

::hx::Val Xml_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return ::hx::Val( _parent ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nodeType") ) { return ::hx::Val( nodeType ); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_nodeName") ) { return ::hx::Val( _nodeName ); }
		if (HX_FIELD_EQ(inName,"_children") ) { return ::hx::Val( _children ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_nodeValue") ) { return ::hx::Val( _nodeValue ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { return ::hx::Val( _attributes ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Xml_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast<  ::cpp::Xml >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nodeType") ) { nodeType=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_nodeName") ) { _nodeName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_children") ) { _children=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_nodeValue") ) { _nodeValue=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { _attributes=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Xml_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_nodeName",cc,c8,12,3a));
	outFields->push(HX_("_nodeValue",d0,d9,90,31));
	outFields->push(HX_("_attributes",f6,75,fb,69));
	outFields->push(HX_("_children",9e,10,00,b8));
	outFields->push(HX_("_parent",c9,16,f5,5b));
	outFields->push(HX_("nodeType",dc,51,86,f6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Xml_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Xml_obj,_nodeName),HX_("_nodeName",cc,c8,12,3a)},
	{::hx::fsString,(int)offsetof(Xml_obj,_nodeValue),HX_("_nodeValue",d0,d9,90,31)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Xml_obj,_attributes),HX_("_attributes",f6,75,fb,69)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Xml_obj,_children),HX_("_children",9e,10,00,b8)},
	{::hx::fsObject /*  ::cpp::Xml */ ,(int)offsetof(Xml_obj,_parent),HX_("_parent",c9,16,f5,5b)},
	{::hx::fsInt,(int)offsetof(Xml_obj,nodeType),HX_("nodeType",dc,51,86,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Xml_obj_sStaticStorageInfo = 0;
#endif

static ::String Xml_obj_sMemberFields[] = {
	HX_("_nodeName",cc,c8,12,3a),
	HX_("_nodeValue",d0,d9,90,31),
	HX_("_attributes",f6,75,fb,69),
	HX_("_children",9e,10,00,b8),
	HX_("_parent",c9,16,f5,5b),
	HX_("nodeType",dc,51,86,f6),
	HX_("addChild",bb,cf,16,bf),
	::String(null()) };

::hx::Class Xml_obj::__mClass;

void Xml_obj::__register()
{
	Xml_obj _hx_dummy;
	Xml_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("cpp.Xml",ec,44,51,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Xml_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Xml_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Xml_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Xml_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
