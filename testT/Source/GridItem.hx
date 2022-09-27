package;

import openfl.text.TextField;
import openfl.display.SimpleButton;

class GridItem extends SimpleButton {
  var item = new TextField ();
  public function new(name, locateX, locateY) {
    item.text = name;
    item.width = 50;
    item.height = 50;
    item.x = 175 + 60*locateX;
    item.y = 70 + 60*locateY;
    super (item, item, item, item );

    
	}

}
