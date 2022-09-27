#include <hxcpp.h>

#ifndef INCLUDED_GridItem
#include <GridItem.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialog
#include <lime/ui/FileDialog.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialogType
#include <lime/ui/FileDialogType.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_16_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",16,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_31_tabs,"Main","tabs",0xf1ae98b3,"Main.tabs","Main.hx",31,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_54_homeTab,"Main","homeTab",0xb0368c61,"Main.homeTab","Main.hx",54,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_37_homeTab,"Main","homeTab",0xb0368c61,"Main.homeTab","Main.hx",37,0x087e5c05)
static const bool _hx_array_data_332f6459_4[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_96_homeBtnImg,"Main","homeBtnImg",0x65dd807b,"Main.homeBtnImg","Main.hx",96,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_111_homeBtnImg,"Main","homeBtnImg",0x65dd807b,"Main.homeBtnImg","Main.hx",111,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_76_homeBtnImg,"Main","homeBtnImg",0x65dd807b,"Main.homeBtnImg","Main.hx",76,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_139_homeBtnXml,"Main","homeBtnXml",0x65e8e24f,"Main.homeBtnXml","Main.hx",139,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_146_homeBtnXml,"Main","homeBtnXml",0x65e8e24f,"Main.homeBtnXml","Main.hx",146,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_119_homeBtnXml,"Main","homeBtnXml",0x65e8e24f,"Main.homeBtnXml","Main.hx",119,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_177_homeBtnNewTab,"Main","homeBtnNewTab",0x3e47645d,"Main.homeBtnNewTab","Main.hx",177,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_195_homeBtnNewTab,"Main","homeBtnNewTab",0x3e47645d,"Main.homeBtnNewTab","Main.hx",195,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_154_homeBtnNewTab,"Main","homeBtnNewTab",0x3e47645d,"Main.homeBtnNewTab","Main.hx",154,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_205_newTab,"Main","newTab",0xa24cdd4a,"Main.newTab","Main.hx",205,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_247_gridTab,"Main","gridTab",0x6b6fa21a,"Main.gridTab","Main.hx",247,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_230_gridTab,"Main","gridTab",0x6b6fa21a,"Main.gridTab","Main.hx",230,0x087e5c05)
static const bool _hx_array_data_332f6459_18[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_285_textTab,"Main","textTab",0x02f91693,"Main.textTab","Main.hx",285,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_267_textTab,"Main","textTab",0x02f91693,"Main.textTab","Main.hx",267,0x087e5c05)
static const bool _hx_array_data_332f6459_21[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_304_buildGrid,"Main","buildGrid",0xc53144bf,"Main.buildGrid","Main.hx",304,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_330_buildGrid,"Main","buildGrid",0xc53144bf,"Main.buildGrid","Main.hx",330,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_360_textAreaDraw,"Main","textAreaDraw",0xf5355133,"Main.textAreaDraw","Main.hx",360,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_393_rollHorizont,"Main","rollHorizont",0xe486198b,"Main.rollHorizont","Main.hx",393,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_423_rollHorizont,"Main","rollHorizont",0xe486198b,"Main.rollHorizont","Main.hx",423,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_380_rollHorizont,"Main","rollHorizont",0xe486198b,"Main.rollHorizont","Main.hx",380,0x087e5c05)
static const Float _hx_array_data_332f6459_30[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_446_rollsVertical,"Main","rollsVertical",0xeda7ca17,"Main.rollsVertical","Main.hx",446,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_476_rollsVertical,"Main","rollsVertical",0xeda7ca17,"Main.rollsVertical","Main.hx",476,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_431_rollsVertical,"Main","rollsVertical",0xeda7ca17,"Main.rollsVertical","Main.hx",431,0x087e5c05)
static const Float _hx_array_data_332f6459_34[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_484_borderText,"Main","borderText",0x9f1ba9ae,"Main.borderText","Main.hx",484,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_497_addImg1,"Main","addImg1",0xe629207a,"Main.addImg1","Main.hx",497,0x087e5c05)

void Main_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_16_new)
HXLINE(  19)		this->textArea =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  24)		super::__construct();
HXLINE(  25)		this->grids = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  27)		this->tabs();
HXLINE(  28)		this->addImg1(HX_("C:\\testT\\images\\2.png",c8,db,c0,73));
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::tabs(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_31_tabs)
HXLINE(  32)		this->homeTab(HX_("Home",3f,f6,eb,2f),0);
HXLINE(  33)		this->gridTab(HX_("Grid",e6,02,45,2f),1);
HXLINE(  34)		this->textTab(HX_("Text",cd,f8,d2,37),2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,tabs,(void))

void Main_obj::homeTab(::String name,int id){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::Main,_gthis, ::openfl::text::TextField,tab,::Array< bool >,onOff) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_54_homeTab)
HXLINE(  54)			if (onOff->__get(0)) {
HXLINE(  55)				_gthis->get_graphics()->clear();
HXLINE(  56)				_gthis->removeChildren(null(),null());
HXLINE(  57)				_gthis->tabs();
HXLINE(  58)				_gthis->textAreaDraw(HX_("",00,00,00,00));
HXLINE(  59)				_gthis->homeBtnImg();
HXLINE(  60)				_gthis->homeBtnXml();
HXLINE(  61)				_gthis->homeBtnNewTab();
HXLINE(  62)				_gthis->get_graphics()->beginFill(9413302,1);
HXLINE(  63)				 ::openfl::display::Graphics clickHandler = _gthis->get_graphics();
HXDLIN(  63)				Float clickHandler1 = (tab->get_x() + 1);
HXDLIN(  63)				Float clickHandler2 = (tab->get_y() + 1);
HXDLIN(  63)				Float clickHandler3 = (tab->get_width() - ( (Float)(2) ));
HXDLIN(  63)				clickHandler->drawRect(clickHandler1,clickHandler2,clickHandler3,(tab->get_height() - ( (Float)(2) )));
HXLINE(  64)				_gthis->get_graphics()->endFill();
HXLINE(  65)				onOff[0] = false;
            			}
            			else {
HXLINE(  67)				_gthis->get_graphics()->clear();
HXLINE(  68)				_gthis->removeChildren(null(),null());
HXLINE(  69)				_gthis->tabs();
HXLINE(  70)				onOff[0] = true;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_37_homeTab)
HXDLIN(  37)		 ::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  38)		 ::openfl::text::TextField tab =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  39)		::Array< bool > onOff = ::Array_obj< bool >::fromData( _hx_array_data_332f6459_4,1);
HXLINE(  40)		tab->set_text(name);
HXLINE(  41)		tab->set_x(( (Float)((25 + (100 * id))) ));
HXLINE(  42)		tab->set_y(( (Float)(25) ));
HXLINE(  43)		tab->set_width(( (Float)(100) ));
HXLINE(  44)		tab->set_height(( (Float)(25) ));
HXLINE(  45)		 ::openfl::display::SimpleButton btn =  ::openfl::display::SimpleButton_obj::__alloc( HX_CTX ,tab,tab,tab,tab);
HXLINE(  46)		this->addChild(btn);
HXLINE(  47)		this->get_graphics()->lineStyle(1,0,null(),null(),null(),null(),null(),null());
HXLINE(  48)		 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN(  48)		Float _hx_tmp1 = tab->get_x();
HXDLIN(  48)		_hx_tmp->moveTo(_hx_tmp1,tab->get_y());
HXLINE(  49)		 ::openfl::display::Graphics _hx_tmp2 = this->get_graphics();
HXDLIN(  49)		Float _hx_tmp3 = (tab->get_x() + 100);
HXDLIN(  49)		_hx_tmp2->lineTo(_hx_tmp3,tab->get_y());
HXLINE(  50)		 ::openfl::display::Graphics _hx_tmp4 = this->get_graphics();
HXDLIN(  50)		Float _hx_tmp5 = (tab->get_x() + 100);
HXDLIN(  50)		_hx_tmp4->lineTo(_hx_tmp5,(tab->get_y() + 25));
HXLINE(  51)		 ::openfl::display::Graphics _hx_tmp6 = this->get_graphics();
HXDLIN(  51)		Float _hx_tmp7 = tab->get_x();
HXDLIN(  51)		_hx_tmp6->lineTo(_hx_tmp7,(tab->get_y() + 25));
HXLINE(  52)		 ::openfl::display::Graphics _hx_tmp8 = this->get_graphics();
HXDLIN(  52)		Float _hx_tmp9 = tab->get_x();
HXDLIN(  52)		_hx_tmp8->lineTo(_hx_tmp9,tab->get_y());
HXLINE(  53)		 ::Dynamic clickHandler =  ::Dynamic(new _hx_Closure_0(_gthis,tab,onOff));
HXLINE(  73)		btn->addEventListener(HX_("click",48,7c,5e,48),clickHandler,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,homeTab,(void))

void Main_obj::homeBtnImg(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Main,_gthis) HXARGC(1)
            		void _hx_run(::String str){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_96_homeBtnImg)
HXLINE(  97)			 ::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::fromFile(str);
HXLINE(  98)			 ::openfl::display::Bitmap bitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,bitmapData,null(),null());
HXLINE(  99)			bitmap->set_x(( (Float)(450) ));
HXLINE( 100)			bitmap->set_y(( (Float)(85) ));
HXLINE( 101)			bitmap->set_width(( (Float)(150) ));
HXLINE( 102)			bitmap->set_height(( (Float)(200) ));
HXLINE( 103)			_gthis->addChild(bitmap);
HXLINE( 104)			_gthis->get_graphics()->lineStyle(1,0,null(),null(),null(),null(),null(),null());
HXLINE( 105)			 ::openfl::display::Graphics addImg = _gthis->get_graphics();
HXDLIN( 105)			Float addImg1 = bitmap->get_x();
HXDLIN( 105)			addImg->moveTo(addImg1,bitmap->get_y());
HXLINE( 106)			 ::openfl::display::Graphics addImg2 = _gthis->get_graphics();
HXDLIN( 106)			Float addImg3 = (bitmap->get_x() + 150);
HXDLIN( 106)			addImg2->lineTo(addImg3,bitmap->get_y());
HXLINE( 107)			 ::openfl::display::Graphics addImg4 = _gthis->get_graphics();
HXDLIN( 107)			Float addImg5 = (bitmap->get_x() + 150);
HXDLIN( 107)			addImg4->lineTo(addImg5,(bitmap->get_y() + 200));
HXLINE( 108)			 ::openfl::display::Graphics addImg6 = _gthis->get_graphics();
HXDLIN( 108)			Float addImg7 = bitmap->get_x();
HXDLIN( 108)			addImg6->lineTo(addImg7,(bitmap->get_y() + 200));
HXLINE( 109)			 ::openfl::display::Graphics addImg8 = _gthis->get_graphics();
HXDLIN( 109)			Float addImg9 = bitmap->get_x();
HXDLIN( 109)			addImg8->lineTo(addImg9,bitmap->get_y());
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,addImg) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_111_homeBtnImg)
HXLINE( 112)			 ::lime::ui::FileDialog fileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 113)			fileDialog->onSelect->add(addImg,null(),null());
HXLINE( 114)			fileDialog->browse(::lime::ui::FileDialogType_obj::OPEN_dyn(),HX_(".jpg;.gif;*.png",c8,b2,da,64),null(),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_76_homeBtnImg)
HXDLIN(  76)		 ::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  77)		 ::openfl::text::TextField tab =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  78)		bool onOff = true;
HXLINE(  79)		int id = 0;
HXLINE(  80)		tab->set_text(HX_("Image Button",57,4c,ad,2b));
HXLINE(  81)		tab->set_x(( (Float)(225) ));
HXLINE(  82)		tab->set_y(( (Float)((85 + (75 * id))) ));
HXLINE(  83)		tab->set_width(( (Float)(200) ));
HXLINE(  84)		tab->set_height(( (Float)(50) ));
HXLINE(  85)		 ::openfl::display::SimpleButton btn =  ::openfl::display::SimpleButton_obj::__alloc( HX_CTX ,tab,tab,tab,tab);
HXLINE(  86)		this->addChild(btn);
HXLINE(  87)		this->get_graphics()->lineStyle(1,0,null(),null(),null(),null(),null(),null());
HXLINE(  88)		 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN(  88)		Float _hx_tmp1 = tab->get_x();
HXDLIN(  88)		_hx_tmp->moveTo(_hx_tmp1,tab->get_y());
HXLINE(  89)		 ::openfl::display::Graphics _hx_tmp2 = this->get_graphics();
HXDLIN(  89)		Float _hx_tmp3 = (tab->get_x() + 200);
HXDLIN(  89)		_hx_tmp2->lineTo(_hx_tmp3,tab->get_y());
HXLINE(  90)		 ::openfl::display::Graphics _hx_tmp4 = this->get_graphics();
HXDLIN(  90)		Float _hx_tmp5 = (tab->get_x() + 200);
HXDLIN(  90)		_hx_tmp4->lineTo(_hx_tmp5,(tab->get_y() + 50));
HXLINE(  91)		 ::openfl::display::Graphics _hx_tmp6 = this->get_graphics();
HXDLIN(  91)		Float _hx_tmp7 = tab->get_x();
HXDLIN(  91)		_hx_tmp6->lineTo(_hx_tmp7,(tab->get_y() + 50));
HXLINE(  92)		 ::openfl::display::Graphics _hx_tmp8 = this->get_graphics();
HXDLIN(  92)		Float _hx_tmp9 = tab->get_x();
HXDLIN(  92)		_hx_tmp8->lineTo(_hx_tmp9,tab->get_y());
HXLINE(  93)		this->get_graphics()->beginFill(5558003,1);
HXLINE(  94)		 ::openfl::display::Graphics _hx_tmp10 = this->get_graphics();
HXDLIN(  94)		Float _hx_tmp11 = tab->get_x();
HXDLIN(  94)		Float _hx_tmp12 = tab->get_y();
HXDLIN(  94)		Float _hx_tmp13 = tab->get_width();
HXDLIN(  94)		_hx_tmp10->drawRect(_hx_tmp11,_hx_tmp12,_hx_tmp13,tab->get_height());
HXLINE(  95)		this->get_graphics()->endFill();
HXLINE(  96)		 ::Dynamic addImg =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 111)		 ::Dynamic clickHandler =  ::Dynamic(new _hx_Closure_1(addImg));
HXLINE( 116)		btn->addEventListener(HX_("click",48,7c,5e,48),clickHandler,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,homeBtnImg,(void))

void Main_obj::homeBtnXml(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Main,_gthis) HXARGC(1)
            		void _hx_run(::String str){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_139_homeBtnXml)
HXLINE( 140)			::String content = ::sys::io::File_obj::getContent(str);
HXLINE( 141)			_gthis->get_graphics()->clear();
HXLINE( 142)			_gthis->removeChildren(null(),null());
HXLINE( 143)			_gthis->tabs();
HXLINE( 144)			_gthis->textAreaDraw(content);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,addXml) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_146_homeBtnXml)
HXLINE( 147)			 ::lime::ui::FileDialog fileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 148)			fileDialog->onSelect->add(addXml,null(),null());
HXLINE( 149)			fileDialog->browse(::lime::ui::FileDialogType_obj::OPEN_dyn(),HX_("xml",d7,6d,5b,00),null(),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_119_homeBtnXml)
HXDLIN( 119)		 ::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 120)		 ::openfl::text::TextField tab =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 121)		bool onOff = true;
HXLINE( 122)		int id = 1;
HXLINE( 123)		tab->set_text(HX_("Download XML",3f,f9,d2,f8));
HXLINE( 124)		tab->set_x(( (Float)(225) ));
HXLINE( 125)		tab->set_y(( (Float)((85 + (75 * id))) ));
HXLINE( 126)		tab->set_width(( (Float)(200) ));
HXLINE( 127)		tab->set_height(( (Float)(50) ));
HXLINE( 128)		 ::openfl::display::SimpleButton btn =  ::openfl::display::SimpleButton_obj::__alloc( HX_CTX ,tab,tab,tab,tab);
HXLINE( 129)		this->addChild(btn);
HXLINE( 130)		this->get_graphics()->lineStyle(1,0,null(),null(),null(),null(),null(),null());
HXLINE( 131)		 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN( 131)		Float _hx_tmp1 = tab->get_x();
HXDLIN( 131)		_hx_tmp->moveTo(_hx_tmp1,tab->get_y());
HXLINE( 132)		 ::openfl::display::Graphics _hx_tmp2 = this->get_graphics();
HXDLIN( 132)		Float _hx_tmp3 = (tab->get_x() + 200);
HXDLIN( 132)		_hx_tmp2->lineTo(_hx_tmp3,tab->get_y());
HXLINE( 133)		 ::openfl::display::Graphics _hx_tmp4 = this->get_graphics();
HXDLIN( 133)		Float _hx_tmp5 = (tab->get_x() + 200);
HXDLIN( 133)		_hx_tmp4->lineTo(_hx_tmp5,(tab->get_y() + 50));
HXLINE( 134)		 ::openfl::display::Graphics _hx_tmp6 = this->get_graphics();
HXDLIN( 134)		Float _hx_tmp7 = tab->get_x();
HXDLIN( 134)		_hx_tmp6->lineTo(_hx_tmp7,(tab->get_y() + 50));
HXLINE( 135)		 ::openfl::display::Graphics _hx_tmp8 = this->get_graphics();
HXDLIN( 135)		Float _hx_tmp9 = tab->get_x();
HXDLIN( 135)		_hx_tmp8->lineTo(_hx_tmp9,tab->get_y());
HXLINE( 136)		this->get_graphics()->beginFill(5558003,1);
HXLINE( 137)		 ::openfl::display::Graphics _hx_tmp10 = this->get_graphics();
HXDLIN( 137)		Float _hx_tmp11 = tab->get_x();
HXDLIN( 137)		Float _hx_tmp12 = tab->get_y();
HXDLIN( 137)		Float _hx_tmp13 = tab->get_width();
HXDLIN( 137)		_hx_tmp10->drawRect(_hx_tmp11,_hx_tmp12,_hx_tmp13,tab->get_height());
HXLINE( 138)		this->get_graphics()->endFill();
HXLINE( 139)		 ::Dynamic addXml =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 146)		 ::Dynamic clickHandler =  ::Dynamic(new _hx_Closure_1(addXml));
HXLINE( 151)		btn->addEventListener(HX_("click",48,7c,5e,48),clickHandler,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,homeBtnXml,(void))

void Main_obj::homeBtnNewTab(){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::Main,_gthis, ::openfl::text::TextField,tabName, ::openfl::text::TextField,tabContent) HXARGC(1)
            		void _hx_run(::String str){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_177_homeBtnNewTab)
HXLINE( 178)			::String content = ::sys::io::File_obj::getContent(str);
HXLINE( 179)			 ::Xml root = ::Xml_obj::parse(content)->firstElement();
HXLINE( 180)			{
HXLINE( 180)				 ::Dynamic elt = root->elements();
HXDLIN( 180)				while(( (bool)(elt->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 180)					 ::Xml elt1 = ( ( ::Xml)(elt->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 185)					bool addXml;
HXDLIN( 185)					if ((elt1->nodeType != ::Xml_obj::Document)) {
HXLINE( 185)						addXml = (elt1->nodeType != ::Xml_obj::Element);
            					}
            					else {
HXLINE( 185)						addXml = false;
            					}
HXDLIN( 185)					if (addXml) {
HXLINE( 185)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(elt1->nodeType))));
            					}
HXDLIN( 185)					if (::hx::IsNull( elt1->children->__get(0).StaticCast<  ::Xml >() )) {
HXLINE( 186)						 ::Dynamic addXml = ::haxe::Log_obj::trace;
HXDLIN( 186)						if ((elt1->nodeType != ::Xml_obj::Element)) {
HXLINE( 186)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(elt1->nodeType))));
            						}
HXDLIN( 186)						addXml((elt1->nodeName + HX_(" - no content in this obj",bd,1b,62,c3)),::hx::SourceInfo(HX_("Source/Main.hx",b1,67,fd,ea),186,HX_("Main",59,64,2f,33),HX_("homeBtnNewTab",32,7b,d1,65)));
            					}
            					else {
HXLINE( 187)						if ((elt1->nodeType != ::Xml_obj::Element)) {
HXLINE( 187)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(elt1->nodeType))));
            						}
HXDLIN( 187)						if ((elt1->nodeName == HX_("heading",c2,57,0b,63))) {
HXLINE( 188)							 ::openfl::text::TextField tabName1 = tabName;
HXDLIN( 188)							bool addXml;
HXDLIN( 188)							if ((elt1->nodeType != ::Xml_obj::Document)) {
HXLINE( 188)								addXml = (elt1->nodeType != ::Xml_obj::Element);
            							}
            							else {
HXLINE( 188)								addXml = false;
            							}
HXDLIN( 188)							if (addXml) {
HXLINE( 188)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(elt1->nodeType))));
            							}
HXDLIN( 188)							 ::Xml _this = elt1->children->__get(0).StaticCast<  ::Xml >();
HXDLIN( 188)							bool addXml1;
HXDLIN( 188)							if ((_this->nodeType != ::Xml_obj::Document)) {
HXLINE( 188)								addXml1 = (_this->nodeType == ::Xml_obj::Element);
            							}
            							else {
HXLINE( 188)								addXml1 = true;
            							}
HXDLIN( 188)							if (addXml1) {
HXLINE( 188)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(_this->nodeType))));
            							}
HXDLIN( 188)							tabName1->set_text(_this->nodeValue);
            						}
            						else {
HXLINE( 190)							 ::openfl::text::TextField tabContent1 = tabContent;
HXDLIN( 190)							::String addXml = tabContent->get_text();
HXDLIN( 190)							bool addXml1;
HXDLIN( 190)							if ((elt1->nodeType != ::Xml_obj::Document)) {
HXLINE( 190)								addXml1 = (elt1->nodeType != ::Xml_obj::Element);
            							}
            							else {
HXLINE( 190)								addXml1 = false;
            							}
HXDLIN( 190)							if (addXml1) {
HXLINE( 190)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(elt1->nodeType))));
            							}
HXDLIN( 190)							tabContent1->set_text((addXml + ::Std_obj::string(elt1->children->__get(0).StaticCast<  ::Xml >())));
            						}
            					}
            				}
            			}
HXLINE( 193)			 ::Main _gthis1 = _gthis;
HXDLIN( 193)			::String addXml = tabName->get_text();
HXDLIN( 193)			_gthis1->newTab(addXml,tabContent->get_text());
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,addXml) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_195_homeBtnNewTab)
HXLINE( 196)			 ::lime::ui::FileDialog fileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 197)			fileDialog->onSelect->add(addXml,null(),null());
HXLINE( 198)			fileDialog->browse(::lime::ui::FileDialogType_obj::OPEN_dyn(),HX_("xml",d7,6d,5b,00),null(),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_154_homeBtnNewTab)
HXDLIN( 154)		 ::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 155)		 ::openfl::text::TextField tab =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 156)		bool onOff = true;
HXLINE( 157)		int id = 2;
HXLINE( 158)		tab->set_text(HX_("New Tab by parsed XML",86,7f,e6,1f));
HXLINE( 159)		tab->set_x(( (Float)(225) ));
HXLINE( 160)		tab->set_y(( (Float)((85 + (75 * id))) ));
HXLINE( 161)		tab->set_width(( (Float)(200) ));
HXLINE( 162)		tab->set_height(( (Float)(50) ));
HXLINE( 163)		 ::openfl::display::SimpleButton btn =  ::openfl::display::SimpleButton_obj::__alloc( HX_CTX ,tab,tab,tab,tab);
HXLINE( 164)		this->addChild(btn);
HXLINE( 165)		this->get_graphics()->lineStyle(1,0,null(),null(),null(),null(),null(),null());
HXLINE( 166)		 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN( 166)		Float _hx_tmp1 = tab->get_x();
HXDLIN( 166)		_hx_tmp->moveTo(_hx_tmp1,tab->get_y());
HXLINE( 167)		 ::openfl::display::Graphics _hx_tmp2 = this->get_graphics();
HXDLIN( 167)		Float _hx_tmp3 = (tab->get_x() + 200);
HXDLIN( 167)		_hx_tmp2->lineTo(_hx_tmp3,tab->get_y());
HXLINE( 168)		 ::openfl::display::Graphics _hx_tmp4 = this->get_graphics();
HXDLIN( 168)		Float _hx_tmp5 = (tab->get_x() + 200);
HXDLIN( 168)		_hx_tmp4->lineTo(_hx_tmp5,(tab->get_y() + 50));
HXLINE( 169)		 ::openfl::display::Graphics _hx_tmp6 = this->get_graphics();
HXDLIN( 169)		Float _hx_tmp7 = tab->get_x();
HXDLIN( 169)		_hx_tmp6->lineTo(_hx_tmp7,(tab->get_y() + 50));
HXLINE( 170)		 ::openfl::display::Graphics _hx_tmp8 = this->get_graphics();
HXDLIN( 170)		Float _hx_tmp9 = tab->get_x();
HXDLIN( 170)		_hx_tmp8->lineTo(_hx_tmp9,tab->get_y());
HXLINE( 171)		this->get_graphics()->beginFill(5558003,1);
HXLINE( 172)		 ::openfl::display::Graphics _hx_tmp10 = this->get_graphics();
HXDLIN( 172)		Float _hx_tmp11 = tab->get_x();
HXDLIN( 172)		Float _hx_tmp12 = tab->get_y();
HXDLIN( 172)		Float _hx_tmp13 = tab->get_width();
HXDLIN( 172)		_hx_tmp10->drawRect(_hx_tmp11,_hx_tmp12,_hx_tmp13,tab->get_height());
HXLINE( 173)		this->get_graphics()->endFill();
HXLINE( 174)		 ::openfl::text::TextField tabName =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 175)		tabName->set_text(HX_("New Page",4f,26,cc,0b));
HXLINE( 176)		 ::openfl::text::TextField tabContent =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 177)		 ::Dynamic addXml =  ::Dynamic(new _hx_Closure_0(_gthis,tabName,tabContent));
HXLINE( 195)		 ::Dynamic clickHandler =  ::Dynamic(new _hx_Closure_1(addXml));
HXLINE( 202)		btn->addEventListener(HX_("click",48,7c,5e,48),clickHandler,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,homeBtnNewTab,(void))

void Main_obj::newTab(::String name,::String content){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_205_newTab)
HXLINE( 206)		 ::openfl::text::TextField tab =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 207)		int id = 3;
HXLINE( 208)		tab->set_text(name);
HXLINE( 209)		tab->set_x(( (Float)((25 + (100 * id))) ));
HXLINE( 210)		tab->set_y(( (Float)(25) ));
HXLINE( 211)		tab->set_width(( (Float)(100) ));
HXLINE( 212)		tab->set_height(( (Float)(25) ));
HXLINE( 213)		 ::openfl::display::SimpleButton btn =  ::openfl::display::SimpleButton_obj::__alloc( HX_CTX ,tab,tab,tab,tab);
HXLINE( 214)		this->get_graphics()->clear();
HXLINE( 215)		this->get_graphics()->lineStyle(1,0,null(),null(),null(),null(),null(),null());
HXLINE( 216)		 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN( 216)		Float _hx_tmp1 = tab->get_x();
HXDLIN( 216)		_hx_tmp->moveTo(_hx_tmp1,tab->get_y());
HXLINE( 217)		 ::openfl::display::Graphics _hx_tmp2 = this->get_graphics();
HXDLIN( 217)		Float _hx_tmp3 = (tab->get_x() + 100);
HXDLIN( 217)		_hx_tmp2->lineTo(_hx_tmp3,tab->get_y());
HXLINE( 218)		 ::openfl::display::Graphics _hx_tmp4 = this->get_graphics();
HXDLIN( 218)		Float _hx_tmp5 = (tab->get_x() + 100);
HXDLIN( 218)		_hx_tmp4->lineTo(_hx_tmp5,(tab->get_y() + 25));
HXLINE( 219)		 ::openfl::display::Graphics _hx_tmp6 = this->get_graphics();
HXDLIN( 219)		Float _hx_tmp7 = tab->get_x();
HXDLIN( 219)		_hx_tmp6->lineTo(_hx_tmp7,(tab->get_y() + 25));
HXLINE( 220)		 ::openfl::display::Graphics _hx_tmp8 = this->get_graphics();
HXDLIN( 220)		Float _hx_tmp9 = tab->get_x();
HXDLIN( 220)		_hx_tmp8->lineTo(_hx_tmp9,tab->get_y());
HXLINE( 221)		this->get_graphics()->beginFill(9413302,1);
HXLINE( 222)		 ::openfl::display::Graphics _hx_tmp10 = this->get_graphics();
HXDLIN( 222)		Float _hx_tmp11 = (tab->get_x() + 1);
HXDLIN( 222)		Float _hx_tmp12 = (tab->get_y() + 1);
HXDLIN( 222)		Float _hx_tmp13 = (tab->get_width() - ( (Float)(2) ));
HXDLIN( 222)		_hx_tmp10->drawRect(_hx_tmp11,_hx_tmp12,_hx_tmp13,(tab->get_height() - ( (Float)(2) )));
HXLINE( 223)		this->get_graphics()->endFill();
HXLINE( 224)		this->removeChildren(null(),null());
HXLINE( 225)		this->addChild(btn);
HXLINE( 226)		this->tabs();
HXLINE( 227)		this->textAreaDraw(content);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,newTab,(void))

void Main_obj::gridTab(::String name,int id){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::Main,_gthis, ::openfl::text::TextField,tab,::Array< bool >,onOff) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_247_gridTab)
HXLINE( 247)			if (onOff->__get(0)) {
HXLINE( 248)				_gthis->get_graphics()->clear();
HXLINE( 249)				_gthis->removeChildren(null(),null());
HXLINE( 250)				_gthis->tabs();
HXLINE( 251)				_gthis->textAreaDraw(HX_("",00,00,00,00));
HXLINE( 252)				_gthis->buildGrid(4,4);
HXLINE( 253)				_gthis->get_graphics()->beginFill(9413302,1);
HXLINE( 254)				 ::openfl::display::Graphics clickHandler = _gthis->get_graphics();
HXDLIN( 254)				Float clickHandler1 = (tab->get_x() + 1);
HXDLIN( 254)				Float clickHandler2 = (tab->get_y() + 1);
HXDLIN( 254)				Float clickHandler3 = (tab->get_width() - ( (Float)(2) ));
HXDLIN( 254)				clickHandler->drawRect(clickHandler1,clickHandler2,clickHandler3,(tab->get_height() - ( (Float)(2) )));
HXLINE( 255)				_gthis->get_graphics()->endFill();
HXLINE( 256)				onOff[0] = false;
            			}
            			else {
HXLINE( 258)				_gthis->get_graphics()->clear();
HXLINE( 259)				_gthis->removeChildren(null(),null());
HXLINE( 260)				_gthis->tabs();
HXLINE( 261)				onOff[0] = true;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_230_gridTab)
HXDLIN( 230)		 ::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 231)		 ::openfl::text::TextField tab =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 232)		::Array< bool > onOff = ::Array_obj< bool >::fromData( _hx_array_data_332f6459_18,1);
HXLINE( 233)		tab->set_text(HX_("Grid",e6,02,45,2f));
HXLINE( 234)		tab->set_x(( (Float)((25 + (100 * id))) ));
HXLINE( 235)		tab->set_y(( (Float)(25) ));
HXLINE( 236)		tab->set_width(( (Float)(100) ));
HXLINE( 237)		tab->set_height(( (Float)(25) ));
HXLINE( 238)		 ::openfl::display::SimpleButton btn =  ::openfl::display::SimpleButton_obj::__alloc( HX_CTX ,tab,tab,tab,tab);
HXLINE( 239)		this->addChild(btn);
HXLINE( 240)		this->get_graphics()->lineStyle(1,0,null(),null(),null(),null(),null(),null());
HXLINE( 241)		 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN( 241)		Float _hx_tmp1 = tab->get_x();
HXDLIN( 241)		_hx_tmp->moveTo(_hx_tmp1,tab->get_y());
HXLINE( 242)		 ::openfl::display::Graphics _hx_tmp2 = this->get_graphics();
HXDLIN( 242)		Float _hx_tmp3 = (tab->get_x() + 100);
HXDLIN( 242)		_hx_tmp2->lineTo(_hx_tmp3,tab->get_y());
HXLINE( 243)		 ::openfl::display::Graphics _hx_tmp4 = this->get_graphics();
HXDLIN( 243)		Float _hx_tmp5 = (tab->get_x() + 100);
HXDLIN( 243)		_hx_tmp4->lineTo(_hx_tmp5,(tab->get_y() + 25));
HXLINE( 244)		 ::openfl::display::Graphics _hx_tmp6 = this->get_graphics();
HXDLIN( 244)		Float _hx_tmp7 = tab->get_x();
HXDLIN( 244)		_hx_tmp6->lineTo(_hx_tmp7,(tab->get_y() + 25));
HXLINE( 245)		 ::openfl::display::Graphics _hx_tmp8 = this->get_graphics();
HXDLIN( 245)		Float _hx_tmp9 = tab->get_x();
HXDLIN( 245)		_hx_tmp8->lineTo(_hx_tmp9,tab->get_y());
HXLINE( 246)		 ::Dynamic clickHandler =  ::Dynamic(new _hx_Closure_0(_gthis,tab,onOff));
HXLINE( 264)		btn->addEventListener(HX_("click",48,7c,5e,48),clickHandler,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,gridTab,(void))

void Main_obj::textTab(::String name,int id){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::Main,_gthis,::String,content, ::openfl::text::TextField,tab,::Array< bool >,onOff) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_285_textTab)
HXLINE( 285)			if (onOff->__get(0)) {
HXLINE( 286)				_gthis->get_graphics()->clear();
HXLINE( 287)				_gthis->removeChildren(null(),null());
HXLINE( 288)				_gthis->tabs();
HXLINE( 289)				_gthis->textAreaDraw(content);
HXLINE( 290)				_gthis->get_graphics()->beginFill(9413302,1);
HXLINE( 291)				 ::openfl::display::Graphics clickHandler = _gthis->get_graphics();
HXDLIN( 291)				Float clickHandler1 = (tab->get_x() + 1);
HXDLIN( 291)				Float clickHandler2 = (tab->get_y() + 1);
HXDLIN( 291)				Float clickHandler3 = (tab->get_width() - ( (Float)(2) ));
HXDLIN( 291)				clickHandler->drawRect(clickHandler1,clickHandler2,clickHandler3,(tab->get_height() - ( (Float)(2) )));
HXLINE( 292)				_gthis->get_graphics()->endFill();
HXLINE( 293)				onOff[0] = false;
            			}
            			else {
HXLINE( 295)				_gthis->get_graphics()->clear();
HXLINE( 296)				_gthis->removeChildren(null(),null());
HXLINE( 297)				_gthis->tabs();
HXLINE( 298)				onOff[0] = true;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_267_textTab)
HXDLIN( 267)		 ::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 268)		::String content = ::sys::io::File_obj::getContent(HX_("c:\\textTab.txt",c5,f4,4b,bf));
HXLINE( 269)		 ::openfl::text::TextField tab =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 270)		::Array< bool > onOff = ::Array_obj< bool >::fromData( _hx_array_data_332f6459_21,1);
HXLINE( 271)		tab->set_text(HX_("Text",cd,f8,d2,37));
HXLINE( 272)		tab->set_x(( (Float)((25 + (100 * id))) ));
HXLINE( 273)		tab->set_y(( (Float)(25) ));
HXLINE( 274)		tab->set_width(( (Float)(100) ));
HXLINE( 275)		tab->set_height(( (Float)(25) ));
HXLINE( 276)		 ::openfl::display::SimpleButton btn =  ::openfl::display::SimpleButton_obj::__alloc( HX_CTX ,tab,tab,tab,tab);
HXLINE( 277)		this->addChild(btn);
HXLINE( 278)		this->get_graphics()->lineStyle(1,0,null(),null(),null(),null(),null(),null());
HXLINE( 279)		 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN( 279)		Float _hx_tmp1 = tab->get_x();
HXDLIN( 279)		_hx_tmp->moveTo(_hx_tmp1,tab->get_y());
HXLINE( 280)		 ::openfl::display::Graphics _hx_tmp2 = this->get_graphics();
HXDLIN( 280)		Float _hx_tmp3 = (tab->get_x() + 100);
HXDLIN( 280)		_hx_tmp2->lineTo(_hx_tmp3,tab->get_y());
HXLINE( 281)		 ::openfl::display::Graphics _hx_tmp4 = this->get_graphics();
HXDLIN( 281)		Float _hx_tmp5 = (tab->get_x() + 100);
HXDLIN( 281)		_hx_tmp4->lineTo(_hx_tmp5,(tab->get_y() + 25));
HXLINE( 282)		 ::openfl::display::Graphics _hx_tmp6 = this->get_graphics();
HXDLIN( 282)		Float _hx_tmp7 = tab->get_x();
HXDLIN( 282)		_hx_tmp6->lineTo(_hx_tmp7,(tab->get_y() + 25));
HXLINE( 283)		 ::openfl::display::Graphics _hx_tmp8 = this->get_graphics();
HXDLIN( 283)		Float _hx_tmp9 = tab->get_x();
HXDLIN( 283)		_hx_tmp8->lineTo(_hx_tmp9,tab->get_y());
HXLINE( 284)		 ::Dynamic clickHandler =  ::Dynamic(new _hx_Closure_0(_gthis,content,tab,onOff));
HXLINE( 301)		btn->addEventListener(HX_("click",48,7c,5e,48),clickHandler,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,textTab,(void))

void Main_obj::buildGrid(int iteratorWidth,int iteratorHeight){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_304_buildGrid)
HXDLIN( 304)		 ::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 305)		int boxWidth = 50;
HXLINE( 306)		int boxHeight = 50;
HXLINE( 307)		int blank = 10;
HXLINE( 308)		int startCoordX = 175;
HXLINE( 309)		int startCoordY = 70;
HXLINE( 310)		int step = (boxWidth + blank);
HXLINE( 311)		{
HXLINE( 311)			int _g = 0;
HXDLIN( 311)			int _g1 = iteratorHeight;
HXDLIN( 311)			while((_g < _g1)){
HXLINE( 311)				_g = (_g + 1);
HXDLIN( 311)				int i = (_g - 1);
HXLINE( 312)				this->get_graphics()->beginFill(5558003,1);
HXLINE( 313)				this->get_graphics()->drawRect(( (Float)(startCoordX) ),( (Float)((startCoordY + (step * i))) ),( (Float)(boxWidth) ),( (Float)(boxHeight) ));
HXLINE( 314)				this->get_graphics()->endFill();
HXLINE( 315)				{
HXLINE( 315)					int _g1 = 0;
HXDLIN( 315)					int _g2 = iteratorWidth;
HXDLIN( 315)					while((_g1 < _g2)){
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Main,_gthis, ::openfl::text::TextField,btnName) HXARGC(1)
            						void _hx_run( ::openfl::events::MouseEvent event){
            							HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_330_buildGrid)
HXLINE( 347)							::String winAtt = btnName->get_text();
HXLINE( 331)							 ::Dynamic winAtt1 =  ::Dynamic(::hx::Anon_obj::Create(11)
            								->setFixed(0,HX_("resizable",6b,37,50,a9),true)
            								->setFixed(1,HX_("allowHighDPI",92,07,a2,b4),true)
            								->setFixed(2,HX_("width",06,b6,62,ca),300)
            								->setFixed(3,HX_("fullscreen",3b,3a,b4,f9),false)
            								->setFixed(4,HX_("maximized",18,0e,e1,fe),false)
            								->setFixed(5,HX_("height",e7,07,4c,02),0)
            								->setFixed(6,HX_("title",98,15,3b,10),winAtt)
            								->setFixed(7,HX_("alwaysOnTop",67,4d,53,16),false)
            								->setFixed(8,HX_("borderless",45,46,71,17),false)
            								->setFixed(9,HX_("context",ef,95,77,19), ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("background",ee,93,1d,26),16777215)
            									->setFixed(1,HX_("antialiasing",f4,16,b3,48),2)
            									->setFixed(2,HX_("hardware",a8,e2,d3,75),true)))
            								->setFixed(10,HX_("frameRate",ad,11,25,39),60));
HXLINE( 350)							 ::lime::ui::Window window = _gthis->stage->application->createWindow(winAtt1);
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 315)						_g1 = (_g1 + 1);
HXDLIN( 315)						int j = (_g1 - 1);
HXLINE( 316)						this->get_graphics()->beginFill(5558003,1);
HXLINE( 317)						this->get_graphics()->drawRect(( (Float)((startCoordX + (step * j))) ),( (Float)((startCoordY + (step * i))) ),( (Float)(boxWidth) ),( (Float)(boxHeight) ));
HXLINE( 318)						this->get_graphics()->endFill();
HXLINE( 319)						 ::openfl::text::TextField btnName =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 320)						btnName->set_text(((HX_("btn",5c,c2,4a,00) + i) + j));
HXLINE( 321)						 ::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::fromFile(HX_("C:\\testT\\images\\1.png",47,47,5a,e0));
HXLINE( 322)						 ::openfl::display::Bitmap bitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,bitmapData,null(),null());
HXLINE( 323)						bitmap->set_x(( (Float)((175 + (60 * i))) ));
HXLINE( 324)						bitmap->set_y(( (Float)((70 + (60 * j))) ));
HXLINE( 325)						bitmap->set_width(( (Float)(50) ));
HXLINE( 326)						bitmap->set_height(( (Float)(50) ));
HXLINE( 327)						this->addChild(bitmap);
HXLINE( 328)						 ::GridItem btn1 =  ::GridItem_obj::__alloc( HX_CTX ,btnName->get_text(),i,j);
HXLINE( 329)						this->addChild(btn1);
HXLINE( 330)						 ::Dynamic clickHandler =  ::Dynamic(new _hx_Closure_0(_gthis,btnName));
HXLINE( 352)						btn1->addEventListener(HX_("click",48,7c,5e,48),clickHandler,null(),null(),null());
HXLINE( 353)						this->grids->push(btn1);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,buildGrid,(void))

void Main_obj::textAreaDraw(::String tab){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_360_textAreaDraw)
HXLINE( 361)		this->textArea->set_text(tab);
HXLINE( 362)		 ::openfl::text::TextField _hx_tmp = this->textArea;
HXDLIN( 362)		_hx_tmp->set_scrollRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,600,250));
HXLINE( 363)		this->textArea->set_cacheAsBitmap(true);
HXLINE( 364)		this->textArea->set_autoSize(1);
HXLINE( 365)		this->textArea->set_x(( (Float)(25) ));
HXLINE( 366)		this->textArea->set_y(( (Float)(60) ));
HXLINE( 367)		this->textArea->set_width(( (Float)(600) ));
HXLINE( 368)		this->textArea->set_height(( (Float)(250) ));
HXLINE( 369)		this->addChild(this->textArea);
HXLINE( 370)		this->borderText();
HXLINE( 371)		if ((this->textArea->get_textWidth() > 600)) {
HXLINE( 372)			this->rollHorizont();
            		}
HXLINE( 374)		if ((this->textArea->get_textHeight() > 250)) {
HXLINE( 375)			this->rollsVertical();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,textAreaDraw,(void))

void Main_obj::rollHorizont(){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::Main,_gthis,::Array< Float >,counter,Float,rollLength, ::openfl::text::TextField,rollH) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_393_rollHorizont)
HXLINE( 394)			bool moveHandler;
HXDLIN( 394)			bool moveHandler1;
HXDLIN( 394)			if ((event->localX > _gthis->curLocX)) {
HXLINE( 394)				moveHandler1 = event->buttonDown;
            			}
            			else {
HXLINE( 394)				moveHandler1 = false;
            			}
HXDLIN( 394)			if (moveHandler1) {
HXLINE( 394)				Float moveHandler1 = rollH->get_height();
HXDLIN( 394)				moveHandler = ((moveHandler1 + counter->__get(0)) < 600);
            			}
            			else {
HXLINE( 394)				moveHandler = false;
            			}
HXDLIN( 394)			if (moveHandler) {
HXLINE( 395)				 ::openfl::geom::Rectangle rect = _gthis->textArea->get_scrollRect();
HXLINE( 396)				 ::openfl::geom::Rectangle rect1 = rect;
HXDLIN( 396)				rect1->x = (rect1->x + 1);
HXLINE( 397)				::haxe::Log_obj::trace(rect->x,::hx::SourceInfo(HX_("Source/Main.hx",b1,67,fd,ea),397,HX_("Main",59,64,2f,33),HX_("rollHorizont",56,74,ab,bd)));
HXLINE( 398)				_gthis->textArea->set_scrollRect(rect);
HXLINE( 399)				counter[0]++;
HXLINE( 400)				_gthis->curLocX = event->localX;
HXLINE( 401)				_gthis->get_graphics()->beginFill((int)-1637963787,1);
HXLINE( 402)				 ::openfl::display::Graphics moveHandler = _gthis->get_graphics();
HXDLIN( 402)				Float moveHandler1 = rollH->get_x();
HXDLIN( 402)				moveHandler->drawRect((moveHandler1 + counter->__get(0)),( (Float)(315) ),(( (Float)(600) ) * rollLength),( (Float)(5) ));
HXLINE( 403)				_gthis->get_graphics()->endFill();
HXLINE( 404)				_gthis->get_graphics()->beginFill(16777215,1);
HXLINE( 405)				 ::openfl::display::Graphics moveHandler2 = _gthis->get_graphics();
HXDLIN( 405)				Float moveHandler3 = rollH->get_x();
HXDLIN( 405)				moveHandler2->drawRect(((moveHandler3 + counter->__get(0)) - ( (Float)(5) )),( (Float)(315) ),( (Float)(5) ),( (Float)(5) ));
HXLINE( 406)				_gthis->borderText();
            			}
HXLINE( 408)			bool moveHandler2;
HXDLIN( 408)			bool moveHandler3;
HXDLIN( 408)			if ((event->localX < _gthis->curLocX)) {
HXLINE( 408)				moveHandler3 = event->buttonDown;
            			}
            			else {
HXLINE( 408)				moveHandler3 = false;
            			}
HXDLIN( 408)			if (moveHandler3) {
HXLINE( 408)				Float moveHandler = rollH->get_x();
HXDLIN( 408)				moveHandler2 = ((moveHandler + counter->__get(0)) >= 25);
            			}
            			else {
HXLINE( 408)				moveHandler2 = false;
            			}
HXDLIN( 408)			if (moveHandler2) {
HXLINE( 409)				 ::openfl::geom::Rectangle rect = _gthis->textArea->get_scrollRect();
HXLINE( 410)				 ::openfl::geom::Rectangle rect1 = rect;
HXDLIN( 410)				rect1->x = (rect1->x - ( (Float)(1) ));
HXLINE( 411)				_gthis->textArea->set_scrollRect(rect);
HXLINE( 412)				counter[0]--;
HXLINE( 413)				_gthis->curLocX = event->localX;
HXLINE( 414)				_gthis->get_graphics()->beginFill((int)-1637963787,1);
HXLINE( 415)				 ::openfl::display::Graphics moveHandler = _gthis->get_graphics();
HXDLIN( 415)				Float moveHandler1 = rollH->get_x();
HXDLIN( 415)				moveHandler->drawRect((moveHandler1 + counter->__get(0)),( (Float)(315) ),(( (Float)(600) ) * rollLength),( (Float)(5) ));
HXLINE( 416)				_gthis->get_graphics()->endFill();
HXLINE( 417)				_gthis->get_graphics()->beginFill(16777215,1);
HXLINE( 418)				 ::openfl::display::Graphics moveHandler2 = _gthis->get_graphics();
HXDLIN( 418)				Float moveHandler3 = rollH->get_x();
HXDLIN( 418)				moveHandler2->drawRect(((moveHandler3 + counter->__get(0)) + (( (Float)(600) ) * rollLength)),( (Float)(315) ),( (Float)(5) ),( (Float)(5) ));
HXLINE( 419)				_gthis->borderText();
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Main,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_423_rollHorizont)
HXLINE( 423)			_gthis->curLocX = event->localX;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_380_rollHorizont)
HXDLIN( 380)		 ::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 381)		 ::openfl::text::TextField rollH =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 382)		rollH->set_x(( (Float)(25) ));
HXLINE( 383)		rollH->set_y(( (Float)(305) ));
HXLINE( 384)		rollH->set_width(( (Float)(600) ));
HXLINE( 385)		rollH->set_height(( (Float)(25) ));
HXLINE( 386)		this->addChild(rollH);
HXLINE( 387)		Float rollLength = (( (Float)(600) ) / this->textArea->get_textWidth());
HXLINE( 388)		 ::openfl::display::SimpleButton but =  ::openfl::display::SimpleButton_obj::__alloc( HX_CTX ,rollH,rollH,rollH,rollH);
HXLINE( 389)		this->addChild(but);
HXLINE( 390)		this->get_graphics()->beginFill((int)-1637963787,1);
HXLINE( 391)		 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN( 391)		Float _hx_tmp1 = rollH->get_x();
HXDLIN( 391)		_hx_tmp->drawRect(_hx_tmp1,( (Float)(315) ),(( (Float)(600) ) * rollLength),( (Float)(5) ));
HXLINE( 392)		::Array< Float > counter = ::Array_obj< Float >::fromData( _hx_array_data_332f6459_30,1);
HXLINE( 393)		 ::Dynamic moveHandler =  ::Dynamic(new _hx_Closure_0(_gthis,counter,rollLength,rollH));
HXLINE( 422)		 ::Dynamic downHandler =  ::Dynamic(new _hx_Closure_1(_gthis));
HXLINE( 426)		but->addEventListener(HX_("mouseMove",d6,9b,b5,f4),moveHandler,null(),null(),null());
HXLINE( 427)		but->addEventListener(HX_("mouseDown",27,b1,c2,ee),downHandler,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,rollHorizont,(void))

void Main_obj::rollsVertical(){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::Main,_gthis,::Array< Float >,counter,Float,rollLength, ::openfl::text::TextField,rollV) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_446_rollsVertical)
HXLINE( 447)			bool moveHandler;
HXDLIN( 447)			bool moveHandler1;
HXDLIN( 447)			if ((event->localY > _gthis->curLocY)) {
HXLINE( 447)				moveHandler1 = event->buttonDown;
            			}
            			else {
HXLINE( 447)				moveHandler1 = false;
            			}
HXDLIN( 447)			if (moveHandler1) {
HXLINE( 447)				Float moveHandler1 = rollV->get_height();
HXDLIN( 447)				moveHandler = (((moveHandler1 * rollLength) + counter->__get(0)) < 250);
            			}
            			else {
HXLINE( 447)				moveHandler = false;
            			}
HXDLIN( 447)			if (moveHandler) {
HXLINE( 448)				 ::openfl::geom::Rectangle rect = _gthis->textArea->get_scrollRect();
HXLINE( 449)				 ::openfl::geom::Rectangle rect1 = rect;
HXDLIN( 449)				rect1->y = (rect1->y + 1);
HXLINE( 450)				_gthis->textArea->set_scrollRect(rect);
HXLINE( 451)				counter[0]++;
HXLINE( 452)				_gthis->curLocY = event->localY;
HXLINE( 453)				_gthis->get_graphics()->beginFill((int)-1637963787,1);
HXLINE( 454)				 ::openfl::display::Graphics moveHandler = _gthis->get_graphics();
HXDLIN( 454)				Float moveHandler1 = rollV->get_y();
HXDLIN( 454)				Float moveHandler2 = (moveHandler1 + counter->__get(0));
HXDLIN( 454)				Float moveHandler3 = rollV->get_height();
HXDLIN( 454)				moveHandler->drawRect(( (Float)(630) ),moveHandler2,( (Float)(5) ),(moveHandler3 * rollLength));
HXLINE( 455)				_gthis->get_graphics()->endFill();
HXLINE( 456)				_gthis->get_graphics()->beginFill(16777215,1);
HXLINE( 457)				 ::openfl::display::Graphics moveHandler4 = _gthis->get_graphics();
HXDLIN( 457)				Float moveHandler5 = rollV->get_y();
HXDLIN( 457)				moveHandler4->drawRect(( (Float)(630) ),((moveHandler5 + counter->__get(0)) - ( (Float)(5) )),( (Float)(5) ),( (Float)(5) ));
HXLINE( 458)				_gthis->borderText();
            			}
HXLINE( 460)			bool moveHandler2;
HXDLIN( 460)			bool moveHandler3;
HXDLIN( 460)			if ((event->localY < _gthis->curLocY)) {
HXLINE( 460)				moveHandler3 = event->buttonDown;
            			}
            			else {
HXLINE( 460)				moveHandler3 = false;
            			}
HXDLIN( 460)			if (moveHandler3) {
HXLINE( 460)				Float moveHandler = rollV->get_y();
HXDLIN( 460)				moveHandler2 = ((moveHandler + counter->__get(0)) >= 60);
            			}
            			else {
HXLINE( 460)				moveHandler2 = false;
            			}
HXDLIN( 460)			if (moveHandler2) {
HXLINE( 461)				 ::openfl::geom::Rectangle rect = _gthis->textArea->get_scrollRect();
HXLINE( 462)				 ::openfl::geom::Rectangle rect1 = rect;
HXDLIN( 462)				rect1->y = (rect1->y - ( (Float)(1) ));
HXLINE( 463)				_gthis->textArea->set_scrollRect(rect);
HXLINE( 464)				counter[0]--;
HXLINE( 465)				_gthis->curLocY = event->localY;
HXLINE( 466)				_gthis->get_graphics()->beginFill((int)-1637963787,1);
HXLINE( 467)				 ::openfl::display::Graphics moveHandler = _gthis->get_graphics();
HXDLIN( 467)				Float moveHandler1 = rollV->get_y();
HXDLIN( 467)				Float moveHandler2 = (moveHandler1 + counter->__get(0));
HXDLIN( 467)				Float moveHandler3 = rollV->get_height();
HXDLIN( 467)				moveHandler->drawRect(( (Float)(630) ),moveHandler2,( (Float)(5) ),(moveHandler3 * rollLength));
HXLINE( 468)				_gthis->get_graphics()->endFill();
HXLINE( 469)				_gthis->get_graphics()->beginFill(16777215,1);
HXLINE( 470)				 ::openfl::display::Graphics moveHandler4 = _gthis->get_graphics();
HXDLIN( 470)				Float moveHandler5 = rollV->get_y();
HXDLIN( 470)				Float moveHandler6 = rollV->get_height();
HXDLIN( 470)				moveHandler4->drawRect(( (Float)(630) ),((moveHandler5 + (moveHandler6 * rollLength)) + counter->__get(0)),( (Float)(5) ),( (Float)(5) ));
HXLINE( 471)				_gthis->borderText();
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Main,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_476_rollsVertical)
HXLINE( 476)			_gthis->curLocY = event->localY;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_431_rollsVertical)
HXDLIN( 431)		 ::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 432)		 ::openfl::text::TextField rollV =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 433)		Float rollLength = (( (Float)(250) ) / this->textArea->get_textHeight());
HXLINE( 434)		rollV->set_x(( (Float)(620) ));
HXLINE( 435)		rollV->set_y(( (Float)(60) ));
HXLINE( 436)		rollV->set_width(( (Float)(20) ));
HXLINE( 437)		rollV->set_height(( (Float)(250) ));
HXLINE( 438)		this->addChild(rollV);
HXLINE( 439)		 ::openfl::display::SimpleButton but =  ::openfl::display::SimpleButton_obj::__alloc( HX_CTX ,rollV,rollV,rollV,rollV);
HXLINE( 440)		this->addChild(but);
HXLINE( 441)		this->get_graphics()->beginFill((int)-1637963787,1);
HXLINE( 442)		 ::openfl::display::Graphics _hx_tmp = this->get_graphics();
HXDLIN( 442)		Float _hx_tmp1 = rollV->get_y();
HXDLIN( 442)		Float _hx_tmp2 = rollV->get_height();
HXDLIN( 442)		_hx_tmp->drawRect(( (Float)(630) ),_hx_tmp1,( (Float)(5) ),(_hx_tmp2 * rollLength));
HXLINE( 443)		this->get_graphics()->endFill();
HXLINE( 445)		::Array< Float > counter = ::Array_obj< Float >::fromData( _hx_array_data_332f6459_34,1);
HXLINE( 446)		 ::Dynamic moveHandler =  ::Dynamic(new _hx_Closure_0(_gthis,counter,rollLength,rollV));
HXLINE( 475)		 ::Dynamic downHandler =  ::Dynamic(new _hx_Closure_1(_gthis));
HXLINE( 480)		but->addEventListener(HX_("mouseMove",d6,9b,b5,f4),moveHandler,null(),null(),null());
HXLINE( 481)		but->addEventListener(HX_("mouseDown",27,b1,c2,ee),downHandler,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,rollsVertical,(void))

void Main_obj::borderText(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_484_borderText)
HXLINE( 485)		this->get_graphics()->lineStyle(1,0,null(),null(),null(),null(),null(),null());
HXLINE( 486)		this->get_graphics()->moveTo(( (Float)(25) ),( (Float)(60) ));
HXLINE( 487)		this->get_graphics()->lineTo(( (Float)(625) ),( (Float)(60) ));
HXLINE( 488)		this->get_graphics()->lineTo(( (Float)(625) ),( (Float)(310) ));
HXLINE( 489)		this->get_graphics()->lineTo(( (Float)(25) ),( (Float)(310) ));
HXLINE( 490)		this->get_graphics()->lineTo(( (Float)(25) ),( (Float)(60) ));
HXLINE( 491)		this->get_graphics()->beginFill(9413302,1);
HXLINE( 492)		this->get_graphics()->drawRect(( (Float)(25) ),( (Float)(60) ),( (Float)(600) ),( (Float)(250) ));
HXLINE( 493)		this->get_graphics()->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,borderText,(void))

void Main_obj::addImg1(::String src){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_497_addImg1)
HXLINE( 498)		 ::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::fromFile(src);
HXLINE( 499)		 ::openfl::display::Bitmap bitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,bitmapData,null(),null());
HXLINE( 500)		bitmap->set_x(( (Float)(25) ));
HXLINE( 501)		bitmap->set_y(( (Float)(85) ));
HXLINE( 502)		bitmap->set_width(( (Float)(150) ));
HXLINE( 503)		bitmap->set_height(( (Float)(200) ));
HXLINE( 504)		this->addChild(bitmap);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,addImg1,(void))


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(grids,"grids");
	HX_MARK_MEMBER_NAME(textArea,"textArea");
	HX_MARK_MEMBER_NAME(curLocY,"curLocY");
	HX_MARK_MEMBER_NAME(curLocX,"curLocX");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grids,"grids");
	HX_VISIT_MEMBER_NAME(textArea,"textArea");
	HX_VISIT_MEMBER_NAME(curLocY,"curLocY");
	HX_VISIT_MEMBER_NAME(curLocX,"curLocX");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tabs") ) { return ::hx::Val( tabs_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"grids") ) { return ::hx::Val( grids ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"newTab") ) { return ::hx::Val( newTab_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curLocY") ) { return ::hx::Val( curLocY ); }
		if (HX_FIELD_EQ(inName,"curLocX") ) { return ::hx::Val( curLocX ); }
		if (HX_FIELD_EQ(inName,"homeTab") ) { return ::hx::Val( homeTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"gridTab") ) { return ::hx::Val( gridTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"textTab") ) { return ::hx::Val( textTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"addImg1") ) { return ::hx::Val( addImg1_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textArea") ) { return ::hx::Val( textArea ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buildGrid") ) { return ::hx::Val( buildGrid_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"homeBtnImg") ) { return ::hx::Val( homeBtnImg_dyn() ); }
		if (HX_FIELD_EQ(inName,"homeBtnXml") ) { return ::hx::Val( homeBtnXml_dyn() ); }
		if (HX_FIELD_EQ(inName,"borderText") ) { return ::hx::Val( borderText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textAreaDraw") ) { return ::hx::Val( textAreaDraw_dyn() ); }
		if (HX_FIELD_EQ(inName,"rollHorizont") ) { return ::hx::Val( rollHorizont_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"homeBtnNewTab") ) { return ::hx::Val( homeBtnNewTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"rollsVertical") ) { return ::hx::Val( rollsVertical_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"grids") ) { grids=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curLocY") ) { curLocY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curLocX") ) { curLocX=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textArea") ) { textArea=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grids",ed,16,f0,99));
	outFields->push(HX_("textArea",da,de,6f,43));
	outFields->push(HX_("curLocY",79,0d,cd,b2));
	outFields->push(HX_("curLocX",78,0d,cd,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Main_obj,grids),HX_("grids",ed,16,f0,99)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Main_obj,textArea),HX_("textArea",da,de,6f,43)},
	{::hx::fsFloat,(int)offsetof(Main_obj,curLocY),HX_("curLocY",79,0d,cd,b2)},
	{::hx::fsFloat,(int)offsetof(Main_obj,curLocX),HX_("curLocX",78,0d,cd,b2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Main_obj_sStaticStorageInfo = 0;
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("grids",ed,16,f0,99),
	HX_("textArea",da,de,6f,43),
	HX_("curLocY",79,0d,cd,b2),
	HX_("curLocX",78,0d,cd,b2),
	HX_("tabs",7e,b0,f6,4c),
	HX_("homeTab",76,25,05,4c),
	HX_("homeBtnImg",86,02,56,ce),
	HX_("homeBtnXml",5a,64,61,ce),
	HX_("homeBtnNewTab",32,7b,d1,65),
	HX_("newTab",d5,bd,a2,71),
	HX_("gridTab",2f,3b,3e,07),
	HX_("textTab",a8,af,c7,9e),
	HX_("buildGrid",14,0d,a8,e4),
	HX_("textAreaDraw",fe,ab,5a,ce),
	HX_("rollHorizont",56,74,ab,bd),
	HX_("rollsVertical",ec,e0,31,15),
	HX_("borderText",b9,2b,94,07),
	HX_("addImg1",8f,b9,f7,81),
	::String(null()) };

::hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

