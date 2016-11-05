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
import flixel.util.FlxPath;


/**
 * ...
 * @author RAM
 */
class NPC extends FlxSprite
{
	private var player:Player;
	public var textCloud:TextCloud;
	public var friendship = 0;
	public var responseTime = 80;
	

	public function new(X:Int, Y:Int, player:Player, state:FlxState ) 
	{
		super(X, Y);
		this.player = player;
		makeGraphic(8, 8, FlxColor.YELLOW);
		maxVelocity.set(80, 80);
		drag.x = maxVelocity.x * 3;
		drag.y = maxVelocity.y * 3;
		path = new FlxPath();
		textCloud = new TextCloud(30, 30, state);
		textCloud.kill();
		
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		acceleration.x = 0;
		acceleration.y = 0;
		maxVelocity.set(80, 80);
		drag.x = maxVelocity.x * 3;
		drag.y = maxVelocity.y * 3;
		
		if (player.hiText.alive) {
			responseTime--;
		}
		if (responseTime < 0) {
			textCloud.txt.text = "Hello!";
			textCloud.reset(x + 7, y - 55);
		}
		if (textCloud.alive) {
			responseTime = 80;
		}
		textCloud.x = x + 7;
		textCloud.y = y - 55;
		/*
		if (!textCloud.alive) {
			textCloud.txt.text = textCloud.getUnfriendlyPhrase();
			if (x > 580) {
				
				if (velocity.x != 0 || velocity.y != 0) {
						textCloud.reset(x-53, y - 55);
						textCloud.velocity.x = velocity.x*10;
						textCloud.velocity.y = velocity.y * 10;
						textCloud.flipX = true;
					}
				
			} else {
				if (velocity.x != 0 || velocity.y != 0) {
						textCloud.flipX = false;
						textCloud.reset(x+7, y - 55);
						textCloud.velocity.x = velocity.x*10;
						textCloud.velocity.y = velocity.y * 10;
					}
				
			}
		}*/
		
	}
}