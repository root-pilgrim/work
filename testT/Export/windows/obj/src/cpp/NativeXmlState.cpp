#include <hxcpp.h>

#ifndef INCLUDED_cpp_NativeXmlState
#include <cpp/NativeXmlState.h>
#endif
#ifndef INCLUDED_cpp_Xml
#include <cpp/Xml.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7bf6f5e3b67aeaed_65_new,"cpp.NativeXmlState","new",0x00a0776e,"cpp.NativeXmlState.new","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",65,0x6a01d7e3)
HX_LOCAL_STACK_FRAME(_hx_pos_7bf6f5e3b67aeaed_71_xml,"cpp.NativeXmlState","xml",0x00a814e5,"cpp.NativeXmlState.xml","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",71,0x6a01d7e3)
HX_LOCAL_STACK_FRAME(_hx_pos_7bf6f5e3b67aeaed_83_cdata,"cpp.NativeXmlState","cdata",0x6d1dca9b,"cpp.NativeXmlState.cdata","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",83,0x6a01d7e3)
HX_LOCAL_STACK_FRAME(_hx_pos_7bf6f5e3b67aeaed_92_pcdata,"cpp.NativeXmlState","pcdata",0xae1de34f,"cpp.NativeXmlState.pcdata","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",92,0x6a01d7e3)
HX_LOCAL_STACK_FRAME(_hx_pos_7bf6f5e3b67aeaed_101_comment,"cpp.NativeXmlState","comment",0x9238c06d,"cpp.NativeXmlState.comment","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",101,0x6a01d7e3)
HX_LOCAL_STACK_FRAME(_hx_pos_7bf6f5e3b67aeaed_115_doctype,"cpp.NativeXmlState","doctype",0xfe7c1740,"cpp.NativeXmlState.doctype","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",115,0x6a01d7e3)
HX_LOCAL_STACK_FRAME(_hx_pos_7bf6f5e3b67aeaed_125_done,"cpp.NativeXmlState","done",0x853375b4,"cpp.NativeXmlState.done","C:\\HaxeToolkit\\haxe\\std/cpp/NativeXml.hx",125,0x6a01d7e3)
namespace cpp{

void NativeXmlState_obj::__construct( ::cpp::Xml x){
            	HX_STACKFRAME(&_hx_pos_7bf6f5e3b67aeaed_65_new)
HXLINE(  66)		x->_children = ::Array_obj< ::Dynamic>::__new();
HXLINE(  67)		this->cur = x;
            	}

Dynamic NativeXmlState_obj::__CreateEmpty() { return new NativeXmlState_obj; }

void *NativeXmlState_obj::_hx_vtable = 0;

Dynamic NativeXmlState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeXmlState_obj > _hx_result = new NativeXmlState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NativeXmlState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x329d41d0;
}

void NativeXmlState_obj::xml(::String name, ::Dynamic att){
            	HX_GC_STACKFRAME(&_hx_pos_7bf6f5e3b67aeaed_71_xml)
HXLINE(  72)		 ::cpp::Xml x =  ::cpp::Xml_obj::__alloc( HX_CTX );
HXLINE(  73)		x->_parent = this->cur;
HXLINE(  74)		x->nodeType = 0;
HXLINE(  75)		x->_nodeName = name;
HXLINE(  76)		x->_attributes = att;
HXLINE(  77)		x->_children = ::Array_obj< ::Dynamic>::__new();
HXLINE(  78)		this->cur->addChild(x);
HXLINE(  79)		this->cur = x;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeXmlState_obj,xml,(void))

void NativeXmlState_obj::cdata(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_7bf6f5e3b67aeaed_83_cdata)
HXLINE(  84)		 ::cpp::Xml x =  ::cpp::Xml_obj::__alloc( HX_CTX );
HXLINE(  85)		x->_parent = this->cur;
HXLINE(  86)		x->nodeType = 2;
HXLINE(  87)		x->_nodeValue = text;
HXLINE(  88)		this->cur->addChild(x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeXmlState_obj,cdata,(void))

void NativeXmlState_obj::pcdata(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_7bf6f5e3b67aeaed_92_pcdata)
HXLINE(  93)		 ::cpp::Xml x =  ::cpp::Xml_obj::__alloc( HX_CTX );
HXLINE(  94)		x->_parent = this->cur;
HXLINE(  95)		x->nodeType = 1;
HXLINE(  96)		x->_nodeValue = text;
HXLINE(  97)		this->cur->addChild(x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeXmlState_obj,pcdata,(void))

void NativeXmlState_obj::comment(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_7bf6f5e3b67aeaed_101_comment)
HXLINE( 102)		 ::cpp::Xml x =  ::cpp::Xml_obj::__alloc( HX_CTX );
HXLINE( 103)		x->_parent = this->cur;
HXLINE( 104)		bool _hx_tmp;
HXDLIN( 104)		if ((text.length > 1)) {
HXLINE( 104)			_hx_tmp = (text.cca(0) == 63);
            		}
            		else {
HXLINE( 104)			_hx_tmp = false;
            		}
HXDLIN( 104)		if (_hx_tmp) {
HXLINE( 105)			x->nodeType = 5;
HXLINE( 106)			text = text.substr(1,(text.length - 2));
            		}
            		else {
HXLINE( 108)			x->nodeType = 3;
            		}
HXLINE( 110)		x->_nodeValue = text;
HXLINE( 111)		this->cur->addChild(x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeXmlState_obj,comment,(void))

void NativeXmlState_obj::doctype(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_7bf6f5e3b67aeaed_115_doctype)
HXLINE( 116)		 ::cpp::Xml x =  ::cpp::Xml_obj::__alloc( HX_CTX );
HXLINE( 117)		x->_parent = this->cur;
HXLINE( 118)		x->nodeType = 4;
HXLINE( 119)		x->_nodeValue = text.substr(1,null());
HXLINE( 120)		this->cur->addChild(x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeXmlState_obj,doctype,(void))

void NativeXmlState_obj::done(){
            	HX_STACKFRAME(&_hx_pos_7bf6f5e3b67aeaed_125_done)
HXDLIN( 125)		this->cur = this->cur->_parent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeXmlState_obj,done,(void))


::hx::ObjectPtr< NativeXmlState_obj > NativeXmlState_obj::__new( ::cpp::Xml x) {
	::hx::ObjectPtr< NativeXmlState_obj > __this = new NativeXmlState_obj();
	__this->__construct(x);
	return __this;
}

::hx::ObjectPtr< NativeXmlState_obj > NativeXmlState_obj::__alloc(::hx::Ctx *_hx_ctx, ::cpp::Xml x) {
	NativeXmlState_obj *__this = (NativeXmlState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeXmlState_obj), true, "cpp.NativeXmlState"));
	*(void **)__this = NativeXmlState_obj::_hx_vtable;
	__this->__construct(x);
	return __this;
}

NativeXmlState_obj::NativeXmlState_obj()
{
}

void NativeXmlState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeXmlState);
	HX_MARK_MEMBER_NAME(cur,"cur");
	HX_MARK_END_CLASS();
}

void NativeXmlState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cur,"cur");
}

::hx::Val NativeXmlState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cur") ) { return ::hx::Val( cur ); }
		if (HX_FIELD_EQ(inName,"xml") ) { return ::hx::Val( xml_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return ::hx::Val( done_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cdata") ) { return ::hx::Val( cdata_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pcdata") ) { return ::hx::Val( pcdata_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"comment") ) { return ::hx::Val( comment_dyn() ); }
		if (HX_FIELD_EQ(inName,"doctype") ) { return ::hx::Val( doctype_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NativeXmlState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cur") ) { cur=inValue.Cast<  ::cpp::Xml >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeXmlState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cur",80,85,4b,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeXmlState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::cpp::Xml */ ,(int)offsetof(NativeXmlState_obj,cur),HX_("cur",80,85,4b,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NativeXmlState_obj_sStaticStorageInfo = 0;
#endif

static ::String NativeXmlState_obj_sMemberFields[] = {
	HX_("cur",80,85,4b,00),
	HX_("xml",d7,6d,5b,00),
	HX_("cdata",0d,c4,0e,43),
	HX_("pcdata",9d,2d,07,0b),
	HX_("comment",5f,7a,70,81),
	HX_("doctype",32,d1,b3,ed),
	HX_("done",82,f0,6d,42),
	::String(null()) };

::hx::Class NativeXmlState_obj::__mClass;

void NativeXmlState_obj::__register()
{
	NativeXmlState_obj _hx_dummy;
	NativeXmlState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("cpp.NativeXmlState",7c,e8,a0,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeXmlState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeXmlState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeXmlState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeXmlState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
