#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_TileContainer
#include <openfl/display/TileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBuffer
#include <openfl/display/_internal/Context3DBuffer.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1cbb708783dfd99e_117_new,"openfl.display.Tilemap","new",0x34c22ff6,"openfl.display.Tilemap.new","openfl/display/Tilemap.hx",117,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_153_addTile,"openfl.display.Tilemap","addTile",0xfbdef085,"openfl.display.Tilemap.addTile","openfl/display/Tilemap.hx",153,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_175_addTileAt,"openfl.display.Tilemap","addTileAt",0xe5e014d8,"openfl.display.Tilemap.addTileAt","openfl/display/Tilemap.hx",175,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_188_addTiles,"openfl.display.Tilemap","addTiles",0x6733844e,"openfl.display.Tilemap.addTiles","openfl/display/Tilemap.hx",188,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_203_contains,"openfl.display.Tilemap","contains",0x0a1cbac9,"openfl.display.Tilemap.contains","openfl/display/Tilemap.hx",203,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_214_getTileAt,"openfl.display.Tilemap","getTileAt",0xaa12690d,"openfl.display.Tilemap.getTileAt","openfl/display/Tilemap.hx",214,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_225_getTileIndex,"openfl.display.Tilemap","getTileIndex",0x74b69338,"openfl.display.Tilemap.getTileIndex","openfl/display/Tilemap.hx",225,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_236_getTiles,"openfl.display.Tilemap","getTiles",0x4dad6db9,"openfl.display.Tilemap.getTiles","openfl/display/Tilemap.hx",236,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_249_removeTile,"openfl.display.Tilemap","removeTile",0x5b5664bc,"openfl.display.Tilemap.removeTile","openfl/display/Tilemap.hx",249,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_262_removeTileAt,"openfl.display.Tilemap","removeTileAt",0xa94644cf,"openfl.display.Tilemap.removeTileAt","openfl/display/Tilemap.hx",262,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_273_removeTiles,"openfl.display.Tilemap","removeTiles",0x9041c037,"openfl.display.Tilemap.removeTiles","openfl/display/Tilemap.hx",273,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_309_setTileIndex,"openfl.display.Tilemap","setTileIndex",0x89afb6ac,"openfl.display.Tilemap.setTileIndex","openfl/display/Tilemap.hx",309,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_319_setTiles,"openfl.display.Tilemap","setTiles",0xfc0ac72d,"openfl.display.Tilemap.setTiles","openfl/display/Tilemap.hx",319,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_349_sortTiles,"openfl.display.Tilemap","sortTiles",0x283c055d,"openfl.display.Tilemap.sortTiles","openfl/display/Tilemap.hx",349,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_362_swapTiles,"openfl.display.Tilemap","swapTiles",0x95754208,"openfl.display.Tilemap.swapTiles","openfl/display/Tilemap.hx",362,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_375_swapTilesAt,"openfl.display.Tilemap","swapTilesAt",0xced00d1b,"openfl.display.Tilemap.swapTilesAt","openfl/display/Tilemap.hx",375,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_381___enterFrame,"openfl.display.Tilemap","__enterFrame",0x56d37cbf,"openfl.display.Tilemap.__enterFrame","openfl/display/Tilemap.hx",381,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_390___getBounds,"openfl.display.Tilemap","__getBounds",0x92793e21,"openfl.display.Tilemap.__getBounds","openfl/display/Tilemap.hx",390,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_404___hitTest,"openfl.display.Tilemap","__hitTest",0x7360e53b,"openfl.display.Tilemap.__hitTest","openfl/display/Tilemap.hx",404,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_429___renderFlash,"openfl.display.Tilemap","__renderFlash",0x6cc39a70,"openfl.display.Tilemap.__renderFlash","openfl/display/Tilemap.hx",429,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_436_get_height,"openfl.display.Tilemap","get_height",0x840dd6da,"openfl.display.Tilemap.get_height","openfl/display/Tilemap.hx",436,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_442_set_height,"openfl.display.Tilemap","set_height",0x878b754e,"openfl.display.Tilemap.set_height","openfl/display/Tilemap.hx",442,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_460_get_numTiles,"openfl.display.Tilemap","get_numTiles",0x9e4ec312,"openfl.display.Tilemap.get_numTiles","openfl/display/Tilemap.hx",460,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_465_get_tileset,"openfl.display.Tilemap","get_tileset",0x4d66c6e1,"openfl.display.Tilemap.get_tileset","openfl/display/Tilemap.hx",465,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_469_set_tileset,"openfl.display.Tilemap","set_tileset",0x57d3cded,"openfl.display.Tilemap.set_tileset","openfl/display/Tilemap.hx",469,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_487_get_width,"openfl.display.Tilemap","get_width",0x1d9f4673,"openfl.display.Tilemap.get_width","openfl/display/Tilemap.hx",487,0xd55dffbc)
HX_LOCAL_STACK_FRAME(_hx_pos_1cbb708783dfd99e_493_set_width,"openfl.display.Tilemap","set_width",0x00f0327f,"openfl.display.Tilemap.set_width","openfl/display/Tilemap.hx",493,0xd55dffbc)
namespace openfl{
namespace display{

void Tilemap_obj::__construct(int width,int height, ::openfl::display::Tileset tileset,::hx::Null< bool >  __o_smoothing){
            		bool smoothing = __o_smoothing.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_1cbb708783dfd99e_117_new)
HXLINE( 118)		super::__construct();
HXLINE( 121)		this->_hx___drawableType = 9;
HXLINE( 123)		this->_hx___tileset = tileset;
HXLINE( 124)		this->smoothing = smoothing;
HXLINE( 126)		this->tileAlphaEnabled = true;
HXLINE( 127)		this->tileBlendModeEnabled = true;
HXLINE( 128)		this->tileColorTransformEnabled = true;
HXLINE( 130)		this->_hx___group =  ::openfl::display::TileContainer_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null());
HXLINE( 131)		this->_hx___group->set_tileset(tileset);
HXLINE( 133)		this->_hx___width = width;
HXLINE( 134)		this->_hx___height = height;
            	}

Dynamic Tilemap_obj::__CreateEmpty() { return new Tilemap_obj; }

void *Tilemap_obj::_hx_vtable = 0;

Dynamic Tilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tilemap_obj > _hx_result = new Tilemap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Tilemap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2aebe7dc) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x2aebe7dc;
		}
	} else {
		return inClassId==(int)0x6b353933;
	}
}

static ::openfl::display::ITileContainer_obj _hx_openfl_display_Tilemap__hx_openfl_display_ITileContainer= {
	( int (::hx::Object::*)())&::openfl::display::Tilemap_obj::get_numTiles,
	(  ::openfl::display::Tile (::hx::Object::*)( ::openfl::display::Tile))&::openfl::display::Tilemap_obj::addTile,
	(  ::openfl::display::Tile (::hx::Object::*)( ::openfl::display::Tile,int))&::openfl::display::Tilemap_obj::addTileAt,
	( ::Array< ::Dynamic> (::hx::Object::*)(::Array< ::Dynamic>))&::openfl::display::Tilemap_obj::addTiles,
	( bool (::hx::Object::*)( ::openfl::display::Tile))&::openfl::display::Tilemap_obj::contains,
	(  ::openfl::display::Tile (::hx::Object::*)(int))&::openfl::display::Tilemap_obj::getTileAt,
	( int (::hx::Object::*)( ::openfl::display::Tile))&::openfl::display::Tilemap_obj::getTileIndex,
	(  ::openfl::display::Tile (::hx::Object::*)( ::openfl::display::Tile))&::openfl::display::Tilemap_obj::removeTile,
	(  ::openfl::display::Tile (::hx::Object::*)(int))&::openfl::display::Tilemap_obj::removeTileAt,
	( void (::hx::Object::*)(::hx::Null< int > ,::hx::Null< int > ))&::openfl::display::Tilemap_obj::removeTiles,
	( void (::hx::Object::*)( ::openfl::display::Tile,int))&::openfl::display::Tilemap_obj::setTileIndex,
	( void (::hx::Object::*)( ::Dynamic))&::openfl::display::Tilemap_obj::sortTiles,
	( void (::hx::Object::*)( ::openfl::display::Tile, ::openfl::display::Tile))&::openfl::display::Tilemap_obj::swapTiles,
	( void (::hx::Object::*)(int,int))&::openfl::display::Tilemap_obj::swapTilesAt,
};

void *Tilemap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xcad54adc: return &_hx_openfl_display_Tilemap__hx_openfl_display_ITileContainer;
	}
	return super::_hx_getInterface(inHash);
}

 ::openfl::display::Tile Tilemap_obj::addTile( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_153_addTile)
HXDLIN( 153)		return this->_hx___group->addTile(tile);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,addTile,return )

 ::openfl::display::Tile Tilemap_obj::addTileAt( ::openfl::display::Tile tile,int index){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_175_addTileAt)
HXDLIN( 175)		return this->_hx___group->addTileAt(tile,index);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,addTileAt,return )

::Array< ::Dynamic> Tilemap_obj::addTiles(::Array< ::Dynamic> tiles){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_188_addTiles)
HXDLIN( 188)		return this->_hx___group->addTiles(tiles);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,addTiles,return )

bool Tilemap_obj::contains( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_203_contains)
HXDLIN( 203)		return this->_hx___group->contains(tile);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,contains,return )

 ::openfl::display::Tile Tilemap_obj::getTileAt(int index){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_214_getTileAt)
HXDLIN( 214)		return this->_hx___group->getTileAt(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,getTileAt,return )

int Tilemap_obj::getTileIndex( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_225_getTileIndex)
HXDLIN( 225)		return this->_hx___group->getTileIndex(tile);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,getTileIndex,return )

 ::openfl::display::TileContainer Tilemap_obj::getTiles(){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_236_getTiles)
HXDLIN( 236)		return Dynamic( this->_hx___group->clone()).StaticCast<  ::openfl::display::TileContainer >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,getTiles,return )

 ::openfl::display::Tile Tilemap_obj::removeTile( ::openfl::display::Tile tile){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_249_removeTile)
HXDLIN( 249)		return this->_hx___group->removeTile(tile);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,removeTile,return )

 ::openfl::display::Tile Tilemap_obj::removeTileAt(int index){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_262_removeTileAt)
HXDLIN( 262)		return this->_hx___group->removeTileAt(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,removeTileAt,return )

void Tilemap_obj::removeTiles(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_273_removeTiles)
HXDLIN( 273)		this->_hx___group->removeTiles(beginIndex,endIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,removeTiles,(void))

void Tilemap_obj::setTileIndex( ::openfl::display::Tile tile,int index){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_309_setTileIndex)
HXDLIN( 309)		this->_hx___group->setTileIndex(tile,index);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,setTileIndex,(void))

void Tilemap_obj::setTiles( ::openfl::display::TileContainer group){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_319_setTiles)
HXLINE( 320)		{
HXLINE( 320)			int _g = 0;
HXDLIN( 320)			::Array< ::Dynamic> _g1 = this->_hx___group->_hx___tiles;
HXDLIN( 320)			while((_g < _g1->length)){
HXLINE( 320)				 ::openfl::display::Tile tile = _g1->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 320)				_g = (_g + 1);
HXLINE( 322)				this->removeTile(tile);
            			}
            		}
HXLINE( 325)		{
HXLINE( 325)			int _g2 = 0;
HXDLIN( 325)			::Array< ::Dynamic> _g3 = group->_hx___tiles;
HXDLIN( 325)			while((_g2 < _g3->length)){
HXLINE( 325)				 ::openfl::display::Tile tile = _g3->__get(_g2).StaticCast<  ::openfl::display::Tile >();
HXDLIN( 325)				_g2 = (_g2 + 1);
HXLINE( 327)				this->addTile(tile);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,setTiles,(void))

void Tilemap_obj::sortTiles( ::Dynamic compareFunction){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_349_sortTiles)
HXDLIN( 349)		this->_hx___group->sortTiles(compareFunction);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,sortTiles,(void))

void Tilemap_obj::swapTiles( ::openfl::display::Tile tile1, ::openfl::display::Tile tile2){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_362_swapTiles)
HXDLIN( 362)		this->_hx___group->swapTiles(tile1,tile2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,swapTiles,(void))

void Tilemap_obj::swapTilesAt(int index1,int index2){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_375_swapTilesAt)
HXDLIN( 375)		this->_hx___group->swapTilesAt(index1,index2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,swapTilesAt,(void))

void Tilemap_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_381___enterFrame)
HXDLIN( 381)		if (this->_hx___group->_hx___dirty) {
HXLINE( 383)			if (!(this->_hx___renderDirty)) {
HXLINE( 383)				this->_hx___renderDirty = true;
HXDLIN( 383)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


void Tilemap_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_390___getBounds)
HXLINE( 391)		 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 392)		bounds->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->_hx___width) ),( (Float)(this->_hx___height) ));
HXLINE( 393)		bounds->_hx___transform(bounds,matrix);
HXLINE( 395)		rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE( 397)		::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            	}


bool Tilemap_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_404___hitTest)
HXLINE( 405)		bool _hx_tmp;
HXDLIN( 405)		if (hitObject->get_visible()) {
HXLINE( 405)			_hx_tmp = this->_hx___isMask;
            		}
            		else {
HXLINE( 405)			_hx_tmp = true;
            		}
HXDLIN( 405)		if (_hx_tmp) {
HXLINE( 405)			return false;
            		}
HXLINE( 406)		bool _hx_tmp1;
HXDLIN( 406)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 406)			_hx_tmp1 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 406)			_hx_tmp1 = false;
            		}
HXDLIN( 406)		if (_hx_tmp1) {
HXLINE( 406)			return false;
            		}
HXLINE( 408)		this->_hx___getRenderTransform();
HXLINE( 410)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 410)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 410)		Float px;
HXDLIN( 410)		if ((norm == 0)) {
HXLINE( 410)			px = -(_this->tx);
            		}
            		else {
HXLINE( 410)			px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE( 411)		 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN( 411)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN( 411)		Float py;
HXDLIN( 411)		if ((norm1 == 0)) {
HXLINE( 411)			py = -(_this1->ty);
            		}
            		else {
HXLINE( 411)			py = ((((Float)1.0) / norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE( 413)		bool _hx_tmp2;
HXDLIN( 413)		bool _hx_tmp3;
HXDLIN( 413)		bool _hx_tmp4;
HXDLIN( 413)		if ((px > 0)) {
HXLINE( 413)			_hx_tmp4 = (py > 0);
            		}
            		else {
HXLINE( 413)			_hx_tmp4 = false;
            		}
HXDLIN( 413)		if (_hx_tmp4) {
HXLINE( 413)			_hx_tmp3 = (px <= this->_hx___width);
            		}
            		else {
HXLINE( 413)			_hx_tmp3 = false;
            		}
HXDLIN( 413)		if (_hx_tmp3) {
HXLINE( 413)			_hx_tmp2 = (py <= this->_hx___height);
            		}
            		else {
HXLINE( 413)			_hx_tmp2 = false;
            		}
HXDLIN( 413)		if (_hx_tmp2) {
HXLINE( 415)			bool _hx_tmp;
HXDLIN( 415)			if (::hx::IsNotNull( stack )) {
HXLINE( 415)				_hx_tmp = !(interactiveOnly);
            			}
            			else {
HXLINE( 415)				_hx_tmp = false;
            			}
HXDLIN( 415)			if (_hx_tmp) {
HXLINE( 417)				stack->push(hitObject);
            			}
HXLINE( 420)			return true;
            		}
HXLINE( 423)		return false;
            	}


void Tilemap_obj::_hx___renderFlash(){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_429___renderFlash)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,_hx___renderFlash,(void))

Float Tilemap_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_436_get_height)
HXDLIN( 436)		int _hx_tmp = this->_hx___height;
HXDLIN( 436)		return (( (Float)(_hx_tmp) ) * ::Math_obj::abs(this->get_scaleY()));
            	}


Float Tilemap_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_442_set_height)
HXLINE( 443)		this->_hx___height = ::Std_obj::_hx_int(value);
HXLINE( 444)		int _hx_tmp = this->_hx___height;
HXDLIN( 444)		return (( (Float)(_hx_tmp) ) * ::Math_obj::abs(this->get_scaleY()));
            	}


int Tilemap_obj::get_numTiles(){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_460_get_numTiles)
HXDLIN( 460)		return this->_hx___group->__length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_numTiles,return )

 ::openfl::display::Tileset Tilemap_obj::get_tileset(){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_465_get_tileset)
HXDLIN( 465)		return this->_hx___tileset;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,get_tileset,return )

 ::openfl::display::Tileset Tilemap_obj::set_tileset( ::openfl::display::Tileset value){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_469_set_tileset)
HXLINE( 470)		if (::hx::IsInstanceNotEq( value,this->_hx___tileset )) {
HXLINE( 472)			this->_hx___tileset = value;
HXLINE( 473)			this->_hx___group->set_tileset(value);
HXLINE( 474)			this->_hx___group->_hx___dirty = true;
HXLINE( 477)			if (!(this->_hx___renderDirty)) {
HXLINE( 477)				this->_hx___renderDirty = true;
HXDLIN( 477)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE( 481)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,set_tileset,return )

Float Tilemap_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_487_get_width)
HXDLIN( 487)		return (( (Float)(this->_hx___width) ) * ::Math_obj::abs(this->_hx___scaleX));
            	}


Float Tilemap_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_1cbb708783dfd99e_493_set_width)
HXLINE( 494)		this->_hx___width = ::Std_obj::_hx_int(value);
HXLINE( 495)		return (( (Float)(this->_hx___width) ) * ::Math_obj::abs(this->_hx___scaleX));
            	}



::hx::ObjectPtr< Tilemap_obj > Tilemap_obj::__new(int width,int height, ::openfl::display::Tileset tileset,::hx::Null< bool >  __o_smoothing) {
	::hx::ObjectPtr< Tilemap_obj > __this = new Tilemap_obj();
	__this->__construct(width,height,tileset,__o_smoothing);
	return __this;
}

::hx::ObjectPtr< Tilemap_obj > Tilemap_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::openfl::display::Tileset tileset,::hx::Null< bool >  __o_smoothing) {
	Tilemap_obj *__this = (Tilemap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tilemap_obj), true, "openfl.display.Tilemap"));
	*(void **)__this = Tilemap_obj::_hx_vtable;
	__this->__construct(width,height,tileset,__o_smoothing);
	return __this;
}

Tilemap_obj::Tilemap_obj()
{
}

void Tilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilemap);
	HX_MARK_MEMBER_NAME(tileAlphaEnabled,"tileAlphaEnabled");
	HX_MARK_MEMBER_NAME(tileBlendModeEnabled,"tileBlendModeEnabled");
	HX_MARK_MEMBER_NAME(tileColorTransformEnabled,"tileColorTransformEnabled");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(_hx___group,"__group");
	HX_MARK_MEMBER_NAME(_hx___tileset,"__tileset");
	HX_MARK_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_MARK_MEMBER_NAME(_hx___bufferDirty,"__bufferDirty");
	HX_MARK_MEMBER_NAME(_hx___height,"__height");
	HX_MARK_MEMBER_NAME(_hx___width,"__width");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileAlphaEnabled,"tileAlphaEnabled");
	HX_VISIT_MEMBER_NAME(tileBlendModeEnabled,"tileBlendModeEnabled");
	HX_VISIT_MEMBER_NAME(tileColorTransformEnabled,"tileColorTransformEnabled");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(_hx___group,"__group");
	HX_VISIT_MEMBER_NAME(_hx___tileset,"__tileset");
	HX_VISIT_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(_hx___bufferDirty,"__bufferDirty");
	HX_VISIT_MEMBER_NAME(_hx___height,"__height");
	HX_VISIT_MEMBER_NAME(_hx___width,"__width");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Tilemap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tileset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tileset() ); }
		if (HX_FIELD_EQ(inName,"__group") ) { return ::hx::Val( _hx___group ); }
		if (HX_FIELD_EQ(inName,"__width") ) { return ::hx::Val( _hx___width ); }
		if (HX_FIELD_EQ(inName,"addTile") ) { return ::hx::Val( addTile_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numTiles() ); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return ::hx::Val( _hx___buffer ); }
		if (HX_FIELD_EQ(inName,"__height") ) { return ::hx::Val( _hx___height ); }
		if (HX_FIELD_EQ(inName,"addTiles") ) { return ::hx::Val( addTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTiles") ) { return ::hx::Val( getTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTiles") ) { return ::hx::Val( setTiles_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return ::hx::Val( smoothing ); }
		if (HX_FIELD_EQ(inName,"__tileset") ) { return ::hx::Val( _hx___tileset ); }
		if (HX_FIELD_EQ(inName,"addTileAt") ) { return ::hx::Val( addTileAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileAt") ) { return ::hx::Val( getTileAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"sortTiles") ) { return ::hx::Val( sortTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapTiles") ) { return ::hx::Val( swapTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeTile") ) { return ::hx::Val( removeTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeTiles") ) { return ::hx::Val( removeTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapTilesAt") ) { return ::hx::Val( swapTilesAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tileset") ) { return ::hx::Val( get_tileset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tileset") ) { return ::hx::Val( set_tileset_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTileIndex") ) { return ::hx::Val( getTileIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeTileAt") ) { return ::hx::Val( removeTileAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileIndex") ) { return ::hx::Val( setTileIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numTiles") ) { return ::hx::Val( get_numTiles_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bufferDirty") ) { return ::hx::Val( _hx___bufferDirty ); }
		if (HX_FIELD_EQ(inName,"__renderFlash") ) { return ::hx::Val( _hx___renderFlash_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tileAlphaEnabled") ) { return ::hx::Val( tileAlphaEnabled ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"tileBlendModeEnabled") ) { return ::hx::Val( tileBlendModeEnabled ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"tileColorTransformEnabled") ) { return ::hx::Val( tileColorTransformEnabled ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Tilemap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tileset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tileset(inValue.Cast<  ::openfl::display::Tileset >()) ); }
		if (HX_FIELD_EQ(inName,"__group") ) { _hx___group=inValue.Cast<  ::openfl::display::TileContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { _hx___width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { _hx___buffer=inValue.Cast<  ::openfl::display::_internal::Context3DBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { _hx___height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileset") ) { _hx___tileset=inValue.Cast<  ::openfl::display::Tileset >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bufferDirty") ) { _hx___bufferDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tileAlphaEnabled") ) { tileAlphaEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"tileBlendModeEnabled") ) { tileBlendModeEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"tileColorTransformEnabled") ) { tileColorTransformEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numTiles",5f,11,45,cd));
	outFields->push(HX_("tileAlphaEnabled",11,71,ce,dc));
	outFields->push(HX_("tileBlendModeEnabled",db,9d,a9,f4));
	outFields->push(HX_("tileColorTransformEnabled",ea,29,1c,dd));
	outFields->push(HX_("tileset",34,81,93,45));
	outFields->push(HX_("smoothing",74,d5,e1,95));
	outFields->push(HX_("__group",1f,0c,53,04));
	outFields->push(HX_("__tileset",14,d2,e1,c6));
	outFields->push(HX_("__buffer",20,28,c4,78));
	outFields->push(HX_("__bufferDirty",d2,23,94,bf));
	outFields->push(HX_("__height",07,73,7b,aa));
	outFields->push(HX_("__width",e6,0e,c1,34));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tilemap_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Tilemap_obj,tileAlphaEnabled),HX_("tileAlphaEnabled",11,71,ce,dc)},
	{::hx::fsBool,(int)offsetof(Tilemap_obj,tileBlendModeEnabled),HX_("tileBlendModeEnabled",db,9d,a9,f4)},
	{::hx::fsBool,(int)offsetof(Tilemap_obj,tileColorTransformEnabled),HX_("tileColorTransformEnabled",ea,29,1c,dd)},
	{::hx::fsBool,(int)offsetof(Tilemap_obj,smoothing),HX_("smoothing",74,d5,e1,95)},
	{::hx::fsObject /*  ::openfl::display::TileContainer */ ,(int)offsetof(Tilemap_obj,_hx___group),HX_("__group",1f,0c,53,04)},
	{::hx::fsObject /*  ::openfl::display::Tileset */ ,(int)offsetof(Tilemap_obj,_hx___tileset),HX_("__tileset",14,d2,e1,c6)},
	{::hx::fsObject /*  ::openfl::display::_internal::Context3DBuffer */ ,(int)offsetof(Tilemap_obj,_hx___buffer),HX_("__buffer",20,28,c4,78)},
	{::hx::fsBool,(int)offsetof(Tilemap_obj,_hx___bufferDirty),HX_("__bufferDirty",d2,23,94,bf)},
	{::hx::fsInt,(int)offsetof(Tilemap_obj,_hx___height),HX_("__height",07,73,7b,aa)},
	{::hx::fsInt,(int)offsetof(Tilemap_obj,_hx___width),HX_("__width",e6,0e,c1,34)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tilemap_obj_sStaticStorageInfo = 0;
#endif

static ::String Tilemap_obj_sMemberFields[] = {
	HX_("tileAlphaEnabled",11,71,ce,dc),
	HX_("tileBlendModeEnabled",db,9d,a9,f4),
	HX_("tileColorTransformEnabled",ea,29,1c,dd),
	HX_("smoothing",74,d5,e1,95),
	HX_("__group",1f,0c,53,04),
	HX_("__tileset",14,d2,e1,c6),
	HX_("__buffer",20,28,c4,78),
	HX_("__bufferDirty",d2,23,94,bf),
	HX_("__height",07,73,7b,aa),
	HX_("__width",e6,0e,c1,34),
	HX_("addTile",ef,0d,3a,89),
	HX_("addTileAt",c2,e0,4c,d6),
	HX_("addTiles",a4,23,92,89),
	HX_("contains",1f,5a,7b,2c),
	HX_("getTileAt",f7,34,7f,9a),
	HX_("getTileIndex",8e,95,c6,58),
	HX_("getTiles",0f,0d,0c,70),
	HX_("removeTile",92,05,1c,ca),
	HX_("removeTileAt",25,47,56,8d),
	HX_("removeTiles",a1,da,68,0e),
	HX_("setTileIndex",02,b9,bf,6d),
	HX_("setTiles",83,66,69,1e),
	HX_("sortTiles",47,d1,a8,18),
	HX_("swapTiles",f2,0d,e2,85),
	HX_("swapTilesAt",85,27,f7,4c),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__renderFlash",5a,a3,b5,16),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_numTiles",68,c5,5e,82),
	HX_("get_tileset",4b,e1,8d,cb),
	HX_("set_tileset",57,e8,fa,d5),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	::String(null()) };

::hx::Class Tilemap_obj::__mClass;

void Tilemap_obj::__register()
{
	Tilemap_obj _hx_dummy;
	Tilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Tilemap",04,bd,49,b4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tilemap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tilemap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
