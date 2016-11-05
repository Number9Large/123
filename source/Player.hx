package;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.graphics.FlxGraphic;
import flixel.group.FlxGroup;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;
import flixel.input.keyboard.FlxKey;
import flixel.util.FlxPath;

/**
 * ...
 * @author RAM
 */
class Player extends FlxSprite
{
	public var hiText:TextCloud;
	
	public function new(X:Int, Y:Int, state:FlxState) 
	{
		super(X, Y);
		makeGraphic(8, 8, FlxColor.RED);
		maxVelocity.set(80, 80);
		drag.x = maxVelocity.x * 4;
		drag.y = maxVelocity.y * 4;
		path = new FlxPath();
		hiText = new TextCloud(0, 0, state);
		hiText.kill();
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		acceleration.x = 0;
		acceleration.y = 0;
		
		hiText.x = x + 7;
		hiText.y = y - 55;
		
		if (FlxG.keys.anyPressed([Z]))
		{
			hiText.txt.text = "Hi!";
			hiText.reset(x + 7, y - 55);
			hiText.velocity.x = velocity.x * 10;
			hiText.velocity.y = velocity.y * 10;
			hiText.flipX = false;
			hiText.flipY = false;
		}
	}
	
}