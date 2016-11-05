package;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.FlxObject;


/**
 * ...
 * @author RAM
 */
class TextCloud extends FlxSprite
{
	public var txt:FlxText;
	var aliveTime:Int = 120;

	public function new(X:Int, Y:Int, state:FlxState) 
	{
		super(X, Y, "assets/images/textcloud.png");
		alpha = 1;
		drag.x = 3;
		drag.y = 3;
		velocity.x = 70;
		solid = false;
		txt = new FlxText(X + 13, Y + 3, 50, "", 9);
		txt.color = FlxColor.BLACK;/*
		txt.font = "assets/fonts/D&D_Abyssal_Barazhad.ttf";*/
		txt.setBorderStyle(FlxTextBorderStyle.SHADOW, FlxColor.GRAY, 0.5, 1);
		state.add(this);
		state.add(txt);
		maxVelocity.x = 6;
		maxVelocity.y = 6;
		
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		acceleration.x = 0;
		acceleration.y = 0;
		if (flipX == true) {
			
			txt.x = x+7;
			txt.y = y + 3;
		} else {
			
			txt.x = x+13;
			txt.y = y + 3;
		}
		
		if (alive) {
			aliveTime--;
		}
		
		if (aliveTime < 0) {
			aliveTime = 120;
			kill();
		}
		
	}
	override public function kill():Void 
	{
		super.kill();
		txt.kill();
	}
	override public function reset(X:Float, Y:Float):Void 
	{
		super.reset(X, Y);
		txt.reset(X+13, Y+3);
	}
	
	public function getUnfriendlyPhrase():String {
		var phrases = ["Hey!", "Don't push me!", "That's not funny!", "Calm down, will you?", "Stop it!"];
		return phrases[Math.round(Math.random() * (phrases.length-1))];
	}
	
}