#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_StyleSheet
#include <openfl/text/StyleSheet.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__internal_CSSParser
#include <openfl/text/_internal/CSSParser.h>
#endif
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_67_new,"openfl.text.StyleSheet","new",0xd37f3283,"openfl.text.StyleSheet.new","openfl/text/StyleSheet.hx",67,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_76_clear,"openfl.text.StyleSheet","clear",0xc6bde270,"openfl.text.StyleSheet.clear","openfl/text/StyleSheet.hx",76,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_90_getStyle,"openfl.text.StyleSheet","getStyle",0xacc3b3b8,"openfl.text.StyleSheet.getStyle","openfl/text/StyleSheet.hx",90,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_113_parseCSS,"openfl.text.StyleSheet","parseCSS",0x9f3c704d,"openfl.text.StyleSheet.parseCSS","openfl/text/StyleSheet.hx",113,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_187_setStyle,"openfl.text.StyleSheet","setStyle",0x5b210d2c,"openfl.text.StyleSheet.setStyle","openfl/text/StyleSheet.hx",187,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_215_transform,"openfl.text.StyleSheet","transform",0x31e34bcf,"openfl.text.StyleSheet.transform","openfl/text/StyleSheet.hx",215,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_222___applyStyle,"openfl.text.StyleSheet","__applyStyle",0x23895d80,"openfl.text.StyleSheet.__applyStyle","openfl/text/StyleSheet.hx",222,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_233___applyStyleObject,"openfl.text.StyleSheet","__applyStyleObject",0x50fc705f,"openfl.text.StyleSheet.__applyStyleObject","openfl/text/StyleSheet.hx",233,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_334___parseFont,"openfl.text.StyleSheet","__parseFont",0xb0f1b5a5,"openfl.text.StyleSheet.__parseFont","openfl/text/StyleSheet.hx",334,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_353_get_styleNames,"openfl.text.StyleSheet","get_styleNames",0x48484bdd,"openfl.text.StyleSheet.get_styleNames","openfl/text/StyleSheet.hx",353,0xaad435ed)
HX_LOCAL_STACK_FRAME(_hx_pos_aa62e0dbceb4da36_54_boot,"openfl.text.StyleSheet","boot",0x33e600af,"openfl.text.StyleSheet.boot","openfl/text/StyleSheet.hx",54,0xaad435ed)
static const ::String _hx_array_data_2fb53511_21[] = {
	HX_("color",63,71,5c,4a),HX_("display",42,2a,4a,bb),HX_("font-family",a2,c9,66,81),HX_("font-size",3f,ef,09,4e),HX_("font-style",f3,04,ec,01),HX_("font-weight",76,db,6b,98),HX_("kerning",cc,ba,37,b0),HX_("leading",c6,32,61,09),HX_("letter-spacing",dc,45,12,42),HX_("margin-left",c6,4b,ff,e7),HX_("margin-right",3d,0f,70,8e),HX_("text-align",e5,9f,fc,21),HX_("text-decoration",10,b8,a7,ac),HX_("text-indent",4c,bf,67,f1),
};
namespace openfl{
namespace text{

void StyleSheet_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_67_new)
HXLINE(  68)		super::__construct(null());
HXLINE(  69)		this->clear();
            	}

Dynamic StyleSheet_obj::__CreateEmpty() { return new StyleSheet_obj; }

void *StyleSheet_obj::_hx_vtable = 0;

Dynamic StyleSheet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyleSheet_obj > _hx_result = new StyleSheet_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StyleSheet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x1cad992f;
	}
}

void StyleSheet_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_76_clear)
HXLINE(  77)		this->_hx___styleNamesDirty = false;
HXLINE(  78)		this->_hx___styleNames = null();
HXLINE(  79)		this->_hx___styles =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(StyleSheet_obj,clear,(void))

 ::Dynamic StyleSheet_obj::getStyle(::String styleName){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_90_getStyle)
HXLINE(  91)		styleName = styleName.toLowerCase();
HXLINE(  92)		if (this->_hx___styles->exists(styleName)) {
HXLINE(  94)			return this->_hx___styles->get(styleName);
            		}
            		else {
HXLINE(  98)			return null();
            		}
HXLINE(  92)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,getStyle,return )

void StyleSheet_obj::parseCSS(::String CSSText){
            	HX_GC_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_113_parseCSS)
HXLINE( 114)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 114)		_g->set(HX_("silent",95,76,cd,b7),true);
HXDLIN( 114)		 ::openfl::text::_internal::CSSParser parser =  ::openfl::text::_internal::CSSParser_obj::__alloc( HX_CTX ,_g);
HXLINE( 115)		 ::haxe::ds::StringMap ast = parser->parse(CSSText);
HXLINE( 116)		if (::hx::IsNotNull( ast )) {
HXLINE( 118)			::Array< ::Dynamic> rules = ( (::Array< ::Dynamic>)(ast->get(HX_("rules",f7,63,56,f1))) );
HXLINE( 119)			{
HXLINE( 119)				int _g = 0;
HXDLIN( 119)				while((_g < rules->length)){
HXLINE( 119)					 ::haxe::ds::StringMap rule = rules->__get(_g).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 119)					_g = (_g + 1);
HXLINE( 121)					::String styleName;
HXDLIN( 121)					if (rule->exists(HX_("selectors",74,88,1f,8e))) {
HXLINE( 121)						styleName = ( (::String)(rule->get(HX_("selectors",74,88,1f,8e))) );
            					}
            					else {
HXLINE( 121)						styleName = null();
            					}
HXLINE( 122)					if (::hx::IsNotNull( styleName )) {
HXLINE( 124)						styleName = styleName.toLowerCase();
HXLINE( 125)						if (!(this->_hx___styles->exists(styleName))) {
HXLINE( 127)							{
HXLINE( 127)								 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN( 127)								this->_hx___styles->set(styleName,this1);
            							}
HXLINE( 128)							this->_hx___styleNamesDirty = true;
            						}
HXLINE( 131)						 ::Dynamic object = this->_hx___styles->get(styleName);
HXLINE( 132)						::Array< ::Dynamic> declarations = ( (::Array< ::Dynamic>)(rule->get(HX_("declarations",39,36,ad,ea))) );
HXLINE( 133)						if (::hx::IsNotNull( declarations )) {
HXLINE( 135)							int _g = 0;
HXDLIN( 135)							while((_g < declarations->length)){
HXLINE( 135)								 ::haxe::ds::StringMap declaration = declarations->__get(_g).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 135)								_g = (_g + 1);
HXLINE( 137)								::String property = declaration->get_string(HX_("property",55,48,38,ac));
HXLINE( 138)								::String value = ::Std_obj::string(declaration->get_string(HX_("value",71,7f,b8,31)));
HXLINE( 139)								if (::hx::IsNotNull( property )) {
HXLINE( 141)									if (::hx::IsNull( property )) {
HXLINE( 162)										::Reflect_obj::setField(object,property,value);
            									}
            									else {
HXLINE( 141)										::String _hx_switch_0 = property;
            										if (  (_hx_switch_0==HX_("font-family",a2,c9,66,81)) ){
HXLINE( 144)											 ::Dynamic value1 = ::StringTools_obj::replace(value,HX_("\"",22,00,00,00),HX_("",00,00,00,00));
HXDLIN( 144)											{
HXLINE( 144)												 ::Dynamic this1 = object;
HXDLIN( 144)												if (::hx::IsNotNull( this1 )) {
HXLINE( 144)													::Reflect_obj::setProperty(this1,HX_("fontFamily",d3,f6,f4,9e),value1);
            												}
            											}
HXDLIN( 144)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("font-size",3f,ef,09,4e)) ){
HXLINE( 146)											 ::Dynamic this1 = object;
HXDLIN( 146)											if (::hx::IsNotNull( this1 )) {
HXLINE( 146)												::Reflect_obj::setProperty(this1,HX_("fontSize",30,be,d1,ce),value);
            											}
HXDLIN( 146)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("font-style",f3,04,ec,01)) ){
HXLINE( 148)											 ::Dynamic this1 = object;
HXDLIN( 148)											if (::hx::IsNotNull( this1 )) {
HXLINE( 148)												::Reflect_obj::setProperty(this1,HX_("fontStyle",e2,48,f9,2f),value);
            											}
HXDLIN( 148)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("font-weight",76,db,6b,98)) ){
HXLINE( 150)											 ::Dynamic this1 = object;
HXDLIN( 150)											if (::hx::IsNotNull( this1 )) {
HXLINE( 150)												::Reflect_obj::setProperty(this1,HX_("fontWeight",a7,08,fa,b5),value);
            											}
HXDLIN( 150)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("letter-spacing",dc,45,12,42)) ){
HXLINE( 152)											 ::Dynamic this1 = object;
HXDLIN( 152)											if (::hx::IsNotNull( this1 )) {
HXLINE( 152)												::Reflect_obj::setProperty(this1,HX_("letterSpacing",3d,b7,03,f5),value);
            											}
HXDLIN( 152)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("margin-left",c6,4b,ff,e7)) ){
HXLINE( 154)											 ::Dynamic this1 = object;
HXDLIN( 154)											if (::hx::IsNotNull( this1 )) {
HXLINE( 154)												::Reflect_obj::setProperty(this1,HX_("marginLeft",55,53,dd,84),value);
            											}
HXDLIN( 154)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("text-align",e5,9f,fc,21)) ){
HXLINE( 156)											 ::Dynamic this1 = object;
HXDLIN( 156)											if (::hx::IsNotNull( this1 )) {
HXLINE( 156)												::Reflect_obj::setProperty(this1,HX_("textAlign",d8,e6,7e,ba),value);
            											}
HXDLIN( 156)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("text-decoration",10,b8,a7,ac)) ){
HXLINE( 158)											 ::Dynamic this1 = object;
HXDLIN( 158)											if (::hx::IsNotNull( this1 )) {
HXLINE( 158)												::Reflect_obj::setProperty(this1,HX_("textDecoration",3d,60,e0,20),value);
            											}
HXDLIN( 158)											goto _hx_goto_5;
            										}
            										if (  (_hx_switch_0==HX_("text-indent",4c,bf,67,f1)) ){
HXLINE( 160)											 ::Dynamic this1 = object;
HXDLIN( 160)											if (::hx::IsNotNull( this1 )) {
HXLINE( 160)												::Reflect_obj::setProperty(this1,HX_("textIndent",f9,8c,e3,ca),value);
            											}
HXDLIN( 160)											goto _hx_goto_5;
            										}
            										/* default */{
HXLINE( 162)											::Reflect_obj::setField(object,property,value);
            										}
            										_hx_goto_5:;
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,parseCSS,(void))

void StyleSheet_obj::setStyle(::String styleName, ::Dynamic styleObject){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_187_setStyle)
HXLINE( 188)		styleName = styleName.toLowerCase();
HXLINE( 189)		if (::hx::IsNull( styleObject )) {
HXLINE( 191)			if (this->_hx___styles->exists(styleName)) {
HXLINE( 193)				this->_hx___styles->remove(styleName);
            			}
            		}
            		else {
HXLINE( 198)			 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN( 198)			 ::Dynamic object = this1;
HXLINE( 199)			{
HXLINE( 199)				int _g = 0;
HXDLIN( 199)				::Array< ::String > _g1 = ::Reflect_obj::fields(styleObject);
HXDLIN( 199)				while((_g < _g1->length)){
HXLINE( 199)					::String field = _g1->__get(_g);
HXDLIN( 199)					_g = (_g + 1);
HXLINE( 201)					::Reflect_obj::setField(object,field,::Reflect_obj::field(styleObject,field));
            				}
            			}
HXLINE( 203)			this->_hx___styles->set(styleName,object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(StyleSheet_obj,setStyle,(void))

 ::openfl::text::TextFormat StyleSheet_obj::transform( ::Dynamic formatObject){
            	HX_GC_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_215_transform)
HXLINE( 216)		 ::openfl::text::TextFormat format =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 217)		this->_hx___applyStyleObject(formatObject,format);
HXLINE( 218)		return format;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,transform,return )

void StyleSheet_obj::_hx___applyStyle(::String styleName, ::openfl::text::TextFormat textFormat){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_222___applyStyle)
HXLINE( 223)		styleName = styleName.toLowerCase();
HXLINE( 224)		if (this->_hx___styles->exists(styleName)) {
HXLINE( 226)			 ::Dynamic style = this->_hx___styles->get(styleName);
HXLINE( 227)			this->_hx___applyStyleObject(style,textFormat);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(StyleSheet_obj,_hx___applyStyle,(void))

void StyleSheet_obj::_hx___applyStyleObject( ::Dynamic styleObject, ::openfl::text::TextFormat textFormat){
            	HX_GC_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_233___applyStyleObject)
HXDLIN( 233)		if (::hx::IsNotNull( styleObject )) {
HXLINE( 235)			 ::EReg hex =  ::EReg_obj::__alloc( HX_CTX ,HX_("[0-9A-Fa-f]+",cf,38,92,17),HX_("",00,00,00,00));
HXLINE( 236)			 ::EReg numeric =  ::EReg_obj::__alloc( HX_CTX ,HX_("[0-9]+",8f,d9,9f,23),HX_("",00,00,00,00));
HXLINE( 237)			bool _hx_tmp;
HXDLIN( 237)			 ::Dynamic this1 = styleObject;
HXDLIN( 237)			bool _hx_tmp1;
HXDLIN( 237)			if (::hx::IsNotNull( this1 )) {
HXLINE( 237)				_hx_tmp1 = ::Reflect_obj::hasField(this1,HX_("color",63,71,5c,4a));
            			}
            			else {
HXLINE( 237)				_hx_tmp1 = false;
            			}
HXDLIN( 237)			if (_hx_tmp1) {
HXLINE( 237)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("color",63,71,5c,4a));
HXDLIN( 237)				::String _hx_tmp1;
HXDLIN( 237)				if (::hx::IsNull( this1 )) {
HXLINE( 237)					_hx_tmp1 = null();
            				}
            				else {
HXLINE( 237)					_hx_tmp1 = ::Std_obj::string(this1);
            				}
HXDLIN( 237)				_hx_tmp = hex->match(_hx_tmp1);
            			}
            			else {
HXLINE( 237)				_hx_tmp = false;
            			}
HXDLIN( 237)			if (_hx_tmp) {
HXLINE( 239)				textFormat->color = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + hex->matched(0)));
            			}
HXLINE( 251)			 ::Dynamic this2 = styleObject;
HXDLIN( 251)			bool _hx_tmp2;
HXDLIN( 251)			if (::hx::IsNotNull( this2 )) {
HXLINE( 251)				_hx_tmp2 = ::Reflect_obj::hasField(this2,HX_("fontFamily",d3,f6,f4,9e));
            			}
            			else {
HXLINE( 251)				_hx_tmp2 = false;
            			}
HXDLIN( 251)			if (_hx_tmp2) {
HXLINE( 253)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("fontFamily",d3,f6,f4,9e));
HXDLIN( 253)				::String _hx_tmp;
HXDLIN( 253)				if (::hx::IsNull( this1 )) {
HXLINE( 253)					_hx_tmp = null();
            				}
            				else {
HXLINE( 253)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 253)				textFormat->font = this->_hx___parseFont(_hx_tmp);
            			}
HXLINE( 255)			bool _hx_tmp3;
HXDLIN( 255)			 ::Dynamic this3 = styleObject;
HXDLIN( 255)			bool _hx_tmp4;
HXDLIN( 255)			if (::hx::IsNotNull( this3 )) {
HXLINE( 255)				_hx_tmp4 = ::Reflect_obj::hasField(this3,HX_("fontSize",30,be,d1,ce));
            			}
            			else {
HXLINE( 255)				_hx_tmp4 = false;
            			}
HXDLIN( 255)			if (_hx_tmp4) {
HXLINE( 255)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("fontSize",30,be,d1,ce));
HXDLIN( 255)				::String _hx_tmp;
HXDLIN( 255)				if (::hx::IsNull( this1 )) {
HXLINE( 255)					_hx_tmp = null();
            				}
            				else {
HXLINE( 255)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 255)				_hx_tmp3 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 255)				_hx_tmp3 = false;
            			}
HXDLIN( 255)			if (_hx_tmp3) {
HXLINE( 257)				textFormat->size = ::Std_obj::parseInt(numeric->matched(0));
            			}
HXLINE( 259)			 ::Dynamic this4 = styleObject;
HXDLIN( 259)			bool _hx_tmp5;
HXDLIN( 259)			if (::hx::IsNotNull( this4 )) {
HXLINE( 259)				_hx_tmp5 = ::Reflect_obj::hasField(this4,HX_("fontStyle",e2,48,f9,2f));
            			}
            			else {
HXLINE( 259)				_hx_tmp5 = false;
            			}
HXDLIN( 259)			if (_hx_tmp5) {
HXLINE( 261)				 ::Dynamic _hx_switch_0 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("fontStyle",e2,48,f9,2f));
            				if (  (_hx_switch_0==HX_("italic",f0,2e,64,06)) ){
HXLINE( 266)					textFormat->italic = true;
HXDLIN( 266)					goto _hx_goto_11;
            				}
            				if (  (_hx_switch_0==HX_("normal",27,72,69,30)) ){
HXLINE( 264)					textFormat->italic = false;
HXDLIN( 264)					goto _hx_goto_11;
            				}
            				/* default */{
            				}
            				_hx_goto_11:;
            			}
HXLINE( 270)			 ::Dynamic this5 = styleObject;
HXDLIN( 270)			bool _hx_tmp6;
HXDLIN( 270)			if (::hx::IsNotNull( this5 )) {
HXLINE( 270)				_hx_tmp6 = ::Reflect_obj::hasField(this5,HX_("fontWeight",a7,08,fa,b5));
            			}
            			else {
HXLINE( 270)				_hx_tmp6 = false;
            			}
HXDLIN( 270)			if (_hx_tmp6) {
HXLINE( 272)				 ::Dynamic _hx_switch_1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("fontWeight",a7,08,fa,b5));
            				if (  (_hx_switch_1==HX_("bold",85,81,1b,41)) ){
HXLINE( 277)					textFormat->bold = true;
HXDLIN( 277)					goto _hx_goto_12;
            				}
            				if (  (_hx_switch_1==HX_("normal",27,72,69,30)) ){
HXLINE( 275)					textFormat->bold = false;
HXDLIN( 275)					goto _hx_goto_12;
            				}
            				/* default */{
            				}
            				_hx_goto_12:;
            			}
HXLINE( 284)			bool _hx_tmp7;
HXDLIN( 284)			 ::Dynamic this6 = styleObject;
HXDLIN( 284)			bool _hx_tmp8;
HXDLIN( 284)			if (::hx::IsNotNull( this6 )) {
HXLINE( 284)				_hx_tmp8 = ::Reflect_obj::hasField(this6,HX_("leading",c6,32,61,09));
            			}
            			else {
HXLINE( 284)				_hx_tmp8 = false;
            			}
HXDLIN( 284)			if (_hx_tmp8) {
HXLINE( 284)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("leading",c6,32,61,09));
HXDLIN( 284)				::String _hx_tmp;
HXDLIN( 284)				if (::hx::IsNull( this1 )) {
HXLINE( 284)					_hx_tmp = null();
            				}
            				else {
HXLINE( 284)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 284)				_hx_tmp7 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 284)				_hx_tmp7 = false;
            			}
HXDLIN( 284)			if (_hx_tmp7) {
HXLINE( 286)				textFormat->leading = ::Std_obj::parseInt(numeric->matched(0));
            			}
HXLINE( 288)			bool _hx_tmp9;
HXDLIN( 288)			 ::Dynamic this7 = styleObject;
HXDLIN( 288)			bool _hx_tmp10;
HXDLIN( 288)			if (::hx::IsNotNull( this7 )) {
HXLINE( 288)				_hx_tmp10 = ::Reflect_obj::hasField(this7,HX_("letterSpacing",3d,b7,03,f5));
            			}
            			else {
HXLINE( 288)				_hx_tmp10 = false;
            			}
HXDLIN( 288)			if (_hx_tmp10) {
HXLINE( 288)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("letterSpacing",3d,b7,03,f5));
HXDLIN( 288)				::String _hx_tmp;
HXDLIN( 288)				if (::hx::IsNull( this1 )) {
HXLINE( 288)					_hx_tmp = null();
            				}
            				else {
HXLINE( 288)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 288)				_hx_tmp9 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 288)				_hx_tmp9 = false;
            			}
HXDLIN( 288)			if (_hx_tmp9) {
HXLINE( 290)				textFormat->letterSpacing = ::Std_obj::parseFloat(numeric->matched(0));
            			}
HXLINE( 292)			bool _hx_tmp11;
HXDLIN( 292)			 ::Dynamic this8 = styleObject;
HXDLIN( 292)			bool _hx_tmp12;
HXDLIN( 292)			if (::hx::IsNotNull( this8 )) {
HXLINE( 292)				_hx_tmp12 = ::Reflect_obj::hasField(this8,HX_("marginLeft",55,53,dd,84));
            			}
            			else {
HXLINE( 292)				_hx_tmp12 = false;
            			}
HXDLIN( 292)			if (_hx_tmp12) {
HXLINE( 292)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("marginLeft",55,53,dd,84));
HXDLIN( 292)				::String _hx_tmp;
HXDLIN( 292)				if (::hx::IsNull( this1 )) {
HXLINE( 292)					_hx_tmp = null();
            				}
            				else {
HXLINE( 292)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 292)				_hx_tmp11 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 292)				_hx_tmp11 = false;
            			}
HXDLIN( 292)			if (_hx_tmp11) {
HXLINE( 294)				textFormat->leftMargin = ::Std_obj::parseInt(numeric->matched(0));
            			}
HXLINE( 296)			bool _hx_tmp13;
HXDLIN( 296)			 ::Dynamic this9 = styleObject;
HXDLIN( 296)			bool _hx_tmp14;
HXDLIN( 296)			if (::hx::IsNotNull( this9 )) {
HXLINE( 296)				_hx_tmp14 = ::Reflect_obj::hasField(this9,HX_("marginRight",ce,a4,d8,33));
            			}
            			else {
HXLINE( 296)				_hx_tmp14 = false;
            			}
HXDLIN( 296)			if (_hx_tmp14) {
HXLINE( 296)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("marginRight",ce,a4,d8,33));
HXDLIN( 296)				::String _hx_tmp;
HXDLIN( 296)				if (::hx::IsNull( this1 )) {
HXLINE( 296)					_hx_tmp = null();
            				}
            				else {
HXLINE( 296)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 296)				_hx_tmp13 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 296)				_hx_tmp13 = false;
            			}
HXDLIN( 296)			if (_hx_tmp13) {
HXLINE( 298)				textFormat->rightMargin = ::Std_obj::parseInt(numeric->matched(0));
            			}
HXLINE( 300)			 ::Dynamic this10 = styleObject;
HXDLIN( 300)			bool _hx_tmp15;
HXDLIN( 300)			if (::hx::IsNotNull( this10 )) {
HXLINE( 300)				_hx_tmp15 = ::Reflect_obj::hasField(this10,HX_("textAlign",d8,e6,7e,ba));
            			}
            			else {
HXLINE( 300)				_hx_tmp15 = false;
            			}
HXDLIN( 300)			if (_hx_tmp15) {
HXLINE( 302)				 ::Dynamic _hx_switch_2 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("textAlign",d8,e6,7e,ba));
            				if (  (_hx_switch_2==HX_("center",d5,25,db,05)) ){
HXLINE( 309)					textFormat->align = 0;
HXDLIN( 309)					goto _hx_goto_13;
            				}
            				if (  (_hx_switch_2==HX_("justify",50,df,b5,83)) ){
HXLINE( 311)					textFormat->align = 2;
HXDLIN( 311)					goto _hx_goto_13;
            				}
            				if (  (_hx_switch_2==HX_("left",07,08,b0,47)) ){
HXLINE( 305)					textFormat->align = 3;
HXDLIN( 305)					goto _hx_goto_13;
            				}
            				if (  (_hx_switch_2==HX_("right",dc,0b,64,e9)) ){
HXLINE( 307)					textFormat->align = 4;
HXDLIN( 307)					goto _hx_goto_13;
            				}
            				/* default */{
            				}
            				_hx_goto_13:;
            			}
HXLINE( 315)			 ::Dynamic this11 = styleObject;
HXDLIN( 315)			bool _hx_tmp16;
HXDLIN( 315)			if (::hx::IsNotNull( this11 )) {
HXLINE( 315)				_hx_tmp16 = ::Reflect_obj::hasField(this11,HX_("textDecoration",3d,60,e0,20));
            			}
            			else {
HXLINE( 315)				_hx_tmp16 = false;
            			}
HXDLIN( 315)			if (_hx_tmp16) {
HXLINE( 317)				 ::Dynamic _hx_switch_3 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("textDecoration",3d,60,e0,20));
            				if (  (_hx_switch_3==HX_("none",b8,12,0a,49)) ){
HXLINE( 320)					textFormat->underline = false;
HXDLIN( 320)					goto _hx_goto_14;
            				}
            				if (  (_hx_switch_3==HX_("underline",0c,15,d1,87)) ){
HXLINE( 322)					textFormat->underline = true;
HXDLIN( 322)					goto _hx_goto_14;
            				}
            				/* default */{
            				}
            				_hx_goto_14:;
            			}
HXLINE( 326)			bool _hx_tmp17;
HXDLIN( 326)			 ::Dynamic this12 = styleObject;
HXDLIN( 326)			bool _hx_tmp18;
HXDLIN( 326)			if (::hx::IsNotNull( this12 )) {
HXLINE( 326)				_hx_tmp18 = ::Reflect_obj::hasField(this12,HX_("textIndent",f9,8c,e3,ca));
            			}
            			else {
HXLINE( 326)				_hx_tmp18 = false;
            			}
HXDLIN( 326)			if (_hx_tmp18) {
HXLINE( 326)				 ::Dynamic this1 = ::openfl::utils::_Object::Object_Impl__obj::__get(styleObject,HX_("textIndent",f9,8c,e3,ca));
HXDLIN( 326)				::String _hx_tmp;
HXDLIN( 326)				if (::hx::IsNull( this1 )) {
HXLINE( 326)					_hx_tmp = null();
            				}
            				else {
HXLINE( 326)					_hx_tmp = ::Std_obj::string(this1);
            				}
HXDLIN( 326)				_hx_tmp17 = numeric->match(_hx_tmp);
            			}
            			else {
HXLINE( 326)				_hx_tmp17 = false;
            			}
HXDLIN( 326)			if (_hx_tmp17) {
HXLINE( 328)				textFormat->blockIndent = ::Std_obj::parseInt(numeric->matched(0));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(StyleSheet_obj,_hx___applyStyleObject,(void))

::String StyleSheet_obj::_hx___parseFont(::String fontFamily){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_334___parseFont)
HXLINE( 335)		if (::hx::IsNull( fontFamily )) {
HXLINE( 335)			return null();
            		}
HXLINE( 336)		if ((fontFamily.indexOf(HX_(",",2c,00,00,00),null()) > -1)) {
HXLINE( 336)			fontFamily = fontFamily.substr(0,fontFamily.indexOf(HX_(",",2c,00,00,00),null()));
            		}
HXLINE( 337)		::String _hx_switch_0 = fontFamily;
            		if (  (_hx_switch_0==HX_("mono",23,dc,60,48)) ){
HXLINE( 340)			return HX_("_typewriter",0c,5e,52,94);
HXDLIN( 340)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("sans-serif",c3,60,fb,08)) ){
HXLINE( 342)			return HX_("_sans",32,a0,5e,ff);
HXDLIN( 342)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("serif",7d,1f,2e,7a)) ){
HXLINE( 344)			return HX_("_serif",be,66,15,76);
HXDLIN( 344)			goto _hx_goto_16;
            		}
            		/* default */{
HXLINE( 346)			return fontFamily;
            		}
            		_hx_goto_16:;
HXLINE( 337)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,_hx___parseFont,return )

::Array< ::String > StyleSheet_obj::get_styleNames(){
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_353_get_styleNames)
HXLINE( 354)		bool _hx_tmp;
HXDLIN( 354)		if (::hx::IsNotNull( this->_hx___styleNames )) {
HXLINE( 354)			_hx_tmp = this->_hx___styleNamesDirty;
            		}
            		else {
HXLINE( 354)			_hx_tmp = true;
            		}
HXDLIN( 354)		if (_hx_tmp) {
HXLINE( 356)			this->_hx___styleNames = ::Array_obj< ::String >::__new(0);
HXLINE( 357)			{
HXLINE( 357)				 ::Dynamic style = this->_hx___styles->keys();
HXDLIN( 357)				while(( (bool)(style->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 357)					::String style1 = ( (::String)(style->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 359)					this->_hx___styleNames->push(style1);
            				}
            			}
HXLINE( 361)			this->_hx___styleNamesDirty = false;
            		}
HXLINE( 363)		return this->_hx___styleNames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StyleSheet_obj,get_styleNames,return )

::Array< ::String > StyleSheet_obj::_hx___supportedStyles;


::hx::ObjectPtr< StyleSheet_obj > StyleSheet_obj::__new() {
	::hx::ObjectPtr< StyleSheet_obj > __this = new StyleSheet_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StyleSheet_obj > StyleSheet_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StyleSheet_obj *__this = (StyleSheet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StyleSheet_obj), true, "openfl.text.StyleSheet"));
	*(void **)__this = StyleSheet_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StyleSheet_obj::StyleSheet_obj()
{
}

void StyleSheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleSheet);
	HX_MARK_MEMBER_NAME(_hx___styleNames,"__styleNames");
	HX_MARK_MEMBER_NAME(_hx___styleNamesDirty,"__styleNamesDirty");
	HX_MARK_MEMBER_NAME(_hx___styles,"__styles");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StyleSheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___styleNames,"__styleNames");
	HX_VISIT_MEMBER_NAME(_hx___styleNamesDirty,"__styleNamesDirty");
	HX_VISIT_MEMBER_NAME(_hx___styles,"__styles");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StyleSheet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__styles") ) { return ::hx::Val( _hx___styles ); }
		if (HX_FIELD_EQ(inName,"getStyle") ) { return ::hx::Val( getStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseCSS") ) { return ::hx::Val( parseCSS_dyn() ); }
		if (HX_FIELD_EQ(inName,"setStyle") ) { return ::hx::Val( setStyle_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"styleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleNames() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__parseFont") ) { return ::hx::Val( _hx___parseFont_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__styleNames") ) { return ::hx::Val( _hx___styleNames ); }
		if (HX_FIELD_EQ(inName,"__applyStyle") ) { return ::hx::Val( _hx___applyStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_styleNames") ) { return ::hx::Val( get_styleNames_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__styleNamesDirty") ) { return ::hx::Val( _hx___styleNamesDirty ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__applyStyleObject") ) { return ::hx::Val( _hx___applyStyleObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool StyleSheet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__supportedStyles") ) { outValue = ( _hx___supportedStyles ); return true; }
	}
	return false;
}

::hx::Val StyleSheet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__styles") ) { _hx___styles=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__styleNames") ) { _hx___styleNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__styleNamesDirty") ) { _hx___styleNamesDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StyleSheet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__supportedStyles") ) { _hx___supportedStyles=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void StyleSheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("styleNames",d7,e8,7a,16));
	outFields->push(HX_("__styleNames",f7,63,0e,4f));
	outFields->push(HX_("__styleNamesDirty",9b,9c,0e,e2));
	outFields->push(HX_("__styles",42,51,02,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StyleSheet_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(StyleSheet_obj,_hx___styleNames),HX_("__styleNames",f7,63,0e,4f)},
	{::hx::fsBool,(int)offsetof(StyleSheet_obj,_hx___styleNamesDirty),HX_("__styleNamesDirty",9b,9c,0e,e2)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(StyleSheet_obj,_hx___styles),HX_("__styles",42,51,02,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo StyleSheet_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &StyleSheet_obj::_hx___supportedStyles,HX_("__supportedStyles",d0,27,3f,e2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String StyleSheet_obj_sMemberFields[] = {
	HX_("__styleNames",f7,63,0e,4f),
	HX_("__styleNamesDirty",9b,9c,0e,e2),
	HX_("__styles",42,51,02,be),
	HX_("clear",8d,71,5b,48),
	HX_("getStyle",bb,b4,f4,e3),
	HX_("parseCSS",50,71,6d,d6),
	HX_("setStyle",2f,0e,52,92),
	HX_("transform",6c,2d,93,45),
	HX_("__applyStyle",03,9c,02,68),
	HX_("__applyStyleObject",22,f3,73,30),
	HX_("__parseFont",82,f8,92,f9),
	HX_("get_styleNames",20,71,70,8c),
	::String(null()) };

static void StyleSheet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleSheet_obj::_hx___supportedStyles,"__supportedStyles");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StyleSheet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleSheet_obj::_hx___supportedStyles,"__supportedStyles");
};

#endif

::hx::Class StyleSheet_obj::__mClass;

static ::String StyleSheet_obj_sStaticFields[] = {
	HX_("__supportedStyles",d0,27,3f,e2),
	::String(null())
};

void StyleSheet_obj::__register()
{
	StyleSheet_obj _hx_dummy;
	StyleSheet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text.StyleSheet",11,35,b5,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyleSheet_obj::__GetStatic;
	__mClass->mSetStaticField = &StyleSheet_obj::__SetStatic;
	__mClass->mMarkFunc = StyleSheet_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StyleSheet_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StyleSheet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StyleSheet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StyleSheet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyleSheet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyleSheet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StyleSheet_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_aa62e0dbceb4da36_54_boot)
HXDLIN(  54)		_hx___supportedStyles = ::Array_obj< ::String >::fromData( _hx_array_data_2fb53511_21,14);
            	}
}

} // end namespace openfl
} // end namespace text
