package;

import openfl.display.BitmapData;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.display.SimpleButton;
import lime.ui.WindowAttributes;
import openfl.geom.Rectangle;
import openfl.text.TextFieldAutoSize;
import sys.io.File;
import lime.ui.FileDialog;
import lime.ui.FileDialogType;
import openfl.display.Bitmap;

class Main extends Sprite
{
	public var grids:Array<GridItem>;
	public var textArea = new TextField ();
	public var curLocY:Float;
	public var curLocX:Float;

	public function new() {
		super();
		grids = [];

		tabs();
		addImg1("C:\\testT\\images\\2.png");
	}

	public function tabs() {
		homeTab("Home", 0);
		gridTab("Grid", 1);
		textTab("Text", 2);
	}

	private function homeTab(name:String, id:Int) {
		var tab = new TextField ();
		var onOff:Bool = true;
        tab.text = name;
        tab.x = 25 + 100*id;
		tab.y = 25;
        tab.width = 100;
        tab.height = 25;
        var btn = new SimpleButton(tab, tab, tab ,tab);
        addChild(btn);
        this.graphics.lineStyle(1, 0x000000);
        this.graphics.moveTo (tab.x, tab.y);
        this.graphics.lineTo (tab.x +100, tab.y);
        this.graphics.lineTo (tab.x +100, tab.y+25);
        this.graphics.lineTo (tab.x , tab.y+25);
        this.graphics.lineTo (tab.x , tab.y);
		var clickHandler = function (event:MouseEvent) {
			if(onOff){
				this.graphics.clear();
				removeChildren();
				tabs();
				textAreaDraw("");
				homeBtnImg();
				homeBtnXml();
				homeBtnNewTab();
				this.graphics.beginFill( 0x8FA2B6, 1);
				this.graphics.drawRect(tab.x+1, tab.y+1, tab.width-2, tab.height-2);
				this.graphics.endFill();
				onOff = false;
				}else {
					this.graphics.clear();
					removeChildren();
					tabs();
					onOff = true;
				}
		}
		btn.addEventListener(MouseEvent.CLICK, clickHandler);
	}

	private function homeBtnImg() {
		var tab = new TextField ();
		var onOff:Bool = true;
		var id:Int = 0;
        tab.text = "Image Button";
        tab.x = 225;
		tab.y = 85 + 75*id;
        tab.width = 200;
        tab.height = 50;
        var btn = new SimpleButton(tab, tab, tab ,tab);
        addChild(btn);
        this.graphics.lineStyle(1, 0x000000);
        this.graphics.moveTo (tab.x, tab.y);
        this.graphics.lineTo (tab.x +200, tab.y);
        this.graphics.lineTo (tab.x +200, tab.y+50);
        this.graphics.lineTo (tab.x , tab.y+50);
        this.graphics.lineTo (tab.x , tab.y);
		this.graphics.beginFill( 0x54CEF3, 1);
		this.graphics.drawRect(tab.x, tab.y, tab.width, tab.height);
		this.graphics.endFill();
		var addImg = function(str:String){
			var bitmapData = BitmapData.fromFile(str);
     		var bitmap = new Bitmap (bitmapData);
			 bitmap.x = 450;
			 bitmap.y = 85;
			 bitmap.width = 150;
			 bitmap.height = 200;
        	addChild (bitmap);
			this.graphics.lineStyle(1, 0x000000);
			this.graphics.moveTo (bitmap.x , bitmap.y);
			this.graphics.lineTo (bitmap.x  +150, bitmap.y);
			this.graphics.lineTo (bitmap.x  +150, bitmap.y+200);
			this.graphics.lineTo (bitmap.x  , bitmap.y+200);
			this.graphics.lineTo (bitmap.x  , bitmap.y);
		}
		var clickHandler = function (event:MouseEvent) {
			var fileDialog = new FileDialog();
			fileDialog.onSelect.add(addImg);
			fileDialog.browse(FileDialogType.OPEN,".jpg;.gif;*.png");
		}
		btn.addEventListener(MouseEvent.CLICK, clickHandler);
	}

	private function homeBtnXml() {
		var tab = new TextField ();
		var onOff:Bool = true;
		var id:Int = 1;
        tab.text = "Download XML";
        tab.x = 225;
		tab.y = 85 + 75*id;
        tab.width = 200;
        tab.height = 50;
        var btn = new SimpleButton(tab, tab, tab ,tab);
        addChild(btn);
        this.graphics.lineStyle(1, 0x000000);
        this.graphics.moveTo (tab.x, tab.y);
        this.graphics.lineTo (tab.x +200, tab.y);
        this.graphics.lineTo (tab.x +200, tab.y+50);
        this.graphics.lineTo (tab.x , tab.y+50);
        this.graphics.lineTo (tab.x , tab.y);
		this.graphics.beginFill( 0x54CEF3, 1);
		this.graphics.drawRect(tab.x, tab.y, tab.width, tab.height);
		this.graphics.endFill();
		var addXml = function(str:String){
			var content:String = File.getContent(str);
			this.graphics.clear();
			removeChildren();
			tabs();
			textAreaDraw(content);
			}
		var clickHandler = function (event:MouseEvent) {
			var fileDialog = new FileDialog();
			fileDialog.onSelect.add(addXml);
			fileDialog.browse(FileDialogType.OPEN,"xml");
		}
		btn.addEventListener(MouseEvent.CLICK, clickHandler);
	}

	private function homeBtnNewTab() {
		var tab = new TextField ();
		var onOff:Bool = true;
		var id:Int = 2;
        tab.text = "New Tab by parsed XML";
        tab.x = 225;
		tab.y = 85 + 75*id;
        tab.width = 200;
        tab.height = 50;
        var btn = new SimpleButton(tab, tab, tab ,tab);
        addChild(btn);
        this.graphics.lineStyle(1, 0x000000);
        this.graphics.moveTo (tab.x, tab.y);
        this.graphics.lineTo (tab.x +200, tab.y);
        this.graphics.lineTo (tab.x +200, tab.y+50);
        this.graphics.lineTo (tab.x , tab.y+50);
        this.graphics.lineTo (tab.x , tab.y);
		this.graphics.beginFill( 0x54CEF3, 1);
		this.graphics.drawRect(tab.x, tab.y, tab.width, tab.height);
		this.graphics.endFill();
		var tabName = new TextField ();
		tabName.text = "New Page";
		var tabContent = new TextField ();
		var addXml = function(str:String){
			var content:String = File.getContent(str);
			var root = Xml.parse(content).firstElement(); 		
			for( elt in root.elements() ) {
				// switch elt.nodeName {
				// 	case 'heading': tabName.text = elt.firstChild().nodeValue;
				// 	case 'body': tabContent.text = elt.firstChild().nodeValue;
				// }
				if(elt.firstChild() == null){
					trace(elt.nodeName + " - no content in this obj");
				}else if(elt.nodeName == "heading"){
					tabName.text = elt.firstChild().nodeValue;
				}else {
					tabContent.text += elt.firstChild();
				}
			}
			newTab(tabName.text, tabContent.text);
			}
		var clickHandler = function (event:MouseEvent) {	
			var fileDialog = new FileDialog();
			fileDialog.onSelect.add(addXml);
			fileDialog.browse(FileDialogType.OPEN,"xml");
			
		}

		btn.addEventListener(MouseEvent.CLICK, clickHandler);
	}

	private function newTab(name:String, content:String) {
		var tab = new TextField ();
		var id:Int = 3;
        tab.text = name;
        tab.x = 25 + 100*id;
		tab.y = 25;
        tab.width = 100;
        tab.height = 25;
        var btn = new SimpleButton(tab, tab, tab ,tab);
		this.graphics.clear();
        this.graphics.lineStyle(1, 0x000000);
        this.graphics.moveTo (tab.x, tab.y);
        this.graphics.lineTo (tab.x +100, tab.y);
        this.graphics.lineTo (tab.x +100, tab.y+25);
        this.graphics.lineTo (tab.x , tab.y+25);
        this.graphics.lineTo (tab.x , tab.y);
		this.graphics.beginFill( 0x8FA2B6, 1);
		this.graphics.drawRect(tab.x+1, tab.y+1, tab.width-2, tab.height-2);
		this.graphics.endFill();
		removeChildren();
		addChild(btn);
		tabs();
		textAreaDraw(content);
	}

	private function gridTab(name:String, id:Int) {
		var tab = new TextField ();
		var onOff:Bool = true;
        tab.text = "Grid";
        tab.x = 25 + 100*id;
		tab.y = 25;
        tab.width = 100;
        tab.height = 25;
        var btn = new SimpleButton(tab, tab, tab ,tab);
        addChild(btn);
        this.graphics.lineStyle(1, 0x000000);
        this.graphics.moveTo (tab.x, tab.y);
        this.graphics.lineTo (tab.x +100, tab.y);
        this.graphics.lineTo (tab.x +100, tab.y+25);
        this.graphics.lineTo (tab.x , tab.y+25);
        this.graphics.lineTo (tab.x , tab.y);
		var clickHandler = function (event:MouseEvent) {
			if(onOff){
				this.graphics.clear();
				removeChildren();
				tabs();
				textAreaDraw("");
				buildGrid(4, 4);
				this.graphics.beginFill( 0x8FA2B6, 1);
				this.graphics.drawRect(tab.x+1, tab.y+1, tab.width-2, tab.height-2);
				this.graphics.endFill();
				onOff = false;
				}else {
					this.graphics.clear();
					removeChildren();
					tabs();
					onOff = true;
				}
		}
		btn.addEventListener(MouseEvent.CLICK, clickHandler);
	}

	private function textTab(name:String, id:Int) {
		var content:String = File.getContent("c:\\textTab.txt");
		var tab = new TextField ();
		var onOff:Bool = true;
        tab.text = "Text";
        tab.x = 25 + 100*id;
		tab.y = 25;
        tab.width = 100;
        tab.height = 25;
        var btn = new SimpleButton(tab, tab, tab ,tab);
        addChild(btn);
        this.graphics.lineStyle(1, 0x000000);
        this.graphics.moveTo (tab.x, tab.y);
        this.graphics.lineTo (tab.x +100, tab.y);
        this.graphics.lineTo (tab.x +100, tab.y+25);
        this.graphics.lineTo (tab.x , tab.y+25);
        this.graphics.lineTo (tab.x , tab.y);
		var clickHandler = function (event:MouseEvent) {
			if(onOff){
				this.graphics.clear();
				removeChildren();
				tabs();
				textAreaDraw(content);
				this.graphics.beginFill( 0x8FA2B6, 1);
				this.graphics.drawRect(tab.x+1, tab.y+1, tab.width-2, tab.height-2);
				this.graphics.endFill();
				onOff = false;
				}else {
					this.graphics.clear();
					removeChildren();
					tabs();
					onOff = true;
				}
		}
		btn.addEventListener(MouseEvent.CLICK, clickHandler);
	}

	private function buildGrid(iteratorWidth, iteratorHeight) {
		var boxWidth:Int = 50;
		var boxHeight:Int = 50;
		var blank:Int = 10;
		var startCoordX:Int = 175;
		var startCoordY:Int = 70;
		var step:Int = boxWidth+blank;
		for(i in 0...iteratorHeight){
			this.graphics.beginFill( 0x54CEF3, 1);
			this.graphics.drawRect(startCoordX, startCoordY + step * i, boxWidth, boxHeight);
			this.graphics.endFill();
			for(j in 0...iteratorWidth){
				this.graphics.beginFill( 0x54CEF3, 1);
				this.graphics.drawRect(startCoordX +step * j, startCoordY + step * i, boxWidth, boxHeight);
				this.graphics.endFill();
				var btnName = new TextField ();
				btnName.text = "btn"+i+j;
				var bitmapData = BitmapData.fromFile("C:\\testT\\images\\1.png");
				var bitmap = new Bitmap (bitmapData);
				bitmap.x = 175 + 60*i;
				bitmap.y = 70 + 60*j;
				bitmap.width = 50;
				bitmap.height = 50;
				addChild (bitmap);
				var btn1 = new GridItem (btnName.text, i, j);
				addChild(btn1);
				var clickHandler = function (event:MouseEvent) {
					var winAtt:WindowAttributes =
					{
						allowHighDPI : true,
						alwaysOnTop : false,
						borderless : false,
						context :
						{
							antialiasing : 2,
							background : 0xFFFFFF,
							hardware : true,
						},
						frameRate : 60,
						fullscreen : false,
						height : 0,
						maximized : false,
						resizable : true,
						title : btnName.text,
						width : 300,
					}
						var window =  stage.application.createWindow (winAtt);
					}
				btn1.addEventListener(MouseEvent.CLICK, clickHandler);
				grids.push(btn1);
				
			}
		}

	}

	private function textAreaDraw(tab) {
		textArea.text = tab;
		textArea.scrollRect = new Rectangle (0, 0, 600, 250);
		textArea.cacheAsBitmap = true;
		textArea.autoSize = TextFieldAutoSize.LEFT;
		textArea.x = 25;
		textArea.y = 60;
		textArea.width = 600;
		textArea.height = 250;
		addChild(textArea);
		borderText();
		if(textArea.textWidth > 600){
			rollHorizont();
		}
		if(textArea.textHeight>250){
			rollsVertical();
		}
		
	}

	private function rollHorizont() {
		var rollH = new TextField ();
		rollH.x = 25;
		rollH.y = 305;
		rollH.width = 600;
		rollH.height = 25;
		addChild(rollH);
		var rollLength:Float = 600/textArea.textWidth;
		var but = new SimpleButton(rollH, rollH, rollH, rollH );
		addChild(but);
		this.graphics.beginFill( 0x9E5EA7F5, 1);
		this.graphics.drawRect(rollH.x, 315, 600*rollLength, 5);
		var counter:Float = 0;
		var moveHandler = function (event:MouseEvent) {
			if(event.localX > curLocX && event.buttonDown && rollH.height+counter < 600){
				var rect = textArea.scrollRect;
				rect.x += 1;
				trace(rect.x );
				textArea.scrollRect = rect;
				counter++;
				curLocX = event.localX;
				this.graphics.beginFill( 0x9E5EA7F5, 1);
				this.graphics.drawRect(rollH.x+counter, 315, 600*rollLength, 5);
				this.graphics.endFill();
				this.graphics.beginFill( 0xFFFFFF, 1);
				this.graphics.drawRect(rollH.x+counter -5, 315,5, 5);
				borderText();
			}
			if(event.localX < curLocX && event.buttonDown && rollH.x+counter >= 25){
				var rect = textArea.scrollRect;
				rect.x -= 1;
				textArea.scrollRect = rect;
				counter--;
				curLocX = event.localX;
				this.graphics.beginFill( 0x9E5EA7F5, 1);
				this.graphics.drawRect(rollH.x+counter, 315,600*rollLength, 5);   
				this.graphics.endFill();
				this.graphics.beginFill( 0xFFFFFF, 1);
				this.graphics.drawRect(rollH.x+counter+600*rollLength, 315,5, 5);
				borderText();
			}
		}
		var downHandler = function (event:MouseEvent) {
			curLocX = event.localX;
			
		}
		but.addEventListener (MouseEvent.MOUSE_MOVE, moveHandler);
		but.addEventListener (MouseEvent.MOUSE_DOWN, downHandler);

	}
	
	private function rollsVertical() {
		var rollV = new TextField ();
		var rollLength:Float = 250/textArea.textHeight;
		rollV.x = 620;
		rollV.y = 60;
		rollV.width = 20;
		rollV.height = 250;
		addChild(rollV);
		var but = new SimpleButton(rollV, rollV, rollV, rollV );
		addChild(but);
		this.graphics.beginFill( 0x9E5EA7F5, 1);
		this.graphics.drawRect(630, rollV.y, 5, rollV.height*rollLength);
		this.graphics.endFill();

		var counter:Float = 0;
		var moveHandler = function (event:MouseEvent) {
			if(event.localY > curLocY && event.buttonDown && rollV.height*rollLength+counter < 250){
				var rect = textArea.scrollRect;
				rect.y += 1;
				textArea.scrollRect = rect;
				counter++;
				curLocY = event.localY;
				this.graphics.beginFill( 0x9E5EA7F5, 1);
				this.graphics.drawRect(630, rollV.y+counter, 5, rollV.height*rollLength);
				this.graphics.endFill();
				this.graphics.beginFill( 0xFFFFFF, 1);
				this.graphics.drawRect(630, rollV.y+counter-5, 5, 5);
				borderText();
			}
			if(event.localY < curLocY && event.buttonDown && rollV.y+counter >= 60){
				var rect = textArea.scrollRect;
				rect.y -= 1;
				textArea.scrollRect = rect;
				counter--;
				curLocY = event.localY;
				this.graphics.beginFill( 0x9E5EA7F5, 1);
				this.graphics.drawRect( 630, rollV.y+counter, 5, rollV.height*rollLength);
				this.graphics.endFill();
				this.graphics.beginFill( 0xFFFFFF, 1);
				this.graphics.drawRect(630, rollV.y+rollV.height*rollLength+ counter, 5, 5);
				borderText();
			}

		}
		var downHandler = function (event:MouseEvent) {
			curLocY = event.localY;
			
		}

		but.addEventListener (MouseEvent.MOUSE_MOVE, moveHandler);
		but.addEventListener (MouseEvent.MOUSE_DOWN, downHandler);
		
	}
	private function borderText() {
		this.graphics.lineStyle(1, 0x000000);
		this.graphics.moveTo (25, 60);
		this.graphics.lineTo (25+600, 60);
		this.graphics.lineTo (25+600, 60+250);
		this.graphics.lineTo (25, 60+250);
		this.graphics.lineTo (25, 60);
		this.graphics.beginFill( 0x8FA2B6, 1);
		this.graphics.drawRect(25, 60, 600, 250);
		this.graphics.endFill();
		
	}

	private function addImg1(src){
		var bitmapData = BitmapData.fromFile(src);
    	var bitmap = new Bitmap (bitmapData);
		bitmap.x = 25;
		bitmap.y = 85;
		bitmap.width = 150;
		bitmap.height = 200;
        addChild (bitmap);
	}




}
