package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class MenuState extends FlxState
{
	override public function create():Void
	{
		super.create();
		
		var init_x:Int = Math.floor(FlxG.width / 2 - 40);
		
		var btn_new = new FlxButton(init_x, 50, "New game", onNew);
		var btn_load = new FlxButton(init_x, 80, "Load", onLoad);
		
		add(btn_load);
		add(btn_new);
	}
	
	function onLoad() 
	{
		trace("load...");
	}
	
	function onNew():Void 
	{
		FlxG.switchState(new PlayState());
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}