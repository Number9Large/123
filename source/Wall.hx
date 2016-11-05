package;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.graphics.FlxGraphic;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;
import flixel.input.keyboard.FlxKey;


/**
 * ...
 * @author RAM
 */
class Wall extends FlxSprite
{
	
	public function new(X:Int, Y:Int, W:Int, H:Int) 
	{
		super(X, Y);
		makeGraphic(W, H, FlxColor.GREEN);
		immovable = true;
		
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
	}
}