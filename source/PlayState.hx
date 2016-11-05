package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxCollision;
import flixel.tile.FlxTilemap;
import flixel.util.FlxPath;

class PlayState extends FlxState
{
	var player:Player;
	var npc:NPC;
	var walls = new FlxGroup();
	var chars = new FlxGroup();
	var _map:FlxTilemap;
	
	override public function create():Void
	{
		super.create();
		_map = new FlxTilemap();
		_map.loadMapFromCSV("assets/levels/mapCSV_Group1_Map1.csv", "assets/images/tilemap.png", 16, 16);
		add(_map);/*
		walls.add(new Wall(0, 0, 640, 10));
		walls.add(new Wall(0, 0, 10, 480));
		walls.add(new Wall(630, 0, 10, 480));
		walls.add(new Wall(0, 470, 640, 10));
		add(walls);*/
		chars.add(player = new Player(90, 40, this));
		chars.add(npc = new NPC(100, 200, player, this));
		add(chars);
		_map.setTileProperties(15, FlxObject.NONE,openDoor);
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		FlxG.collide();
			
		if (FlxG.keys.justPressed.O) {
			setZoom(FlxG.camera.zoom + .1);
		}
		if (FlxG.keys.justPressed.L) {
			setZoom(FlxG.camera.zoom - .1);
		}
		/*
		if (npc.textCloud.overlaps(chars)) {
			npc.textCloud.alpha = 0.7;
		} else {
			npc.textCloud.alpha = 1;
		}*/
		if (FlxG.keys.anyPressed([M])) {
			npcFollow();
			trace("pressed");
		} else {
			npc.path.cancel();
		}
		
		if (FlxG.mouse.justReleased) {
			goToMouse();
		}
	}
	
	function openDoor(Tile:FlxObject, Player:FlxObject):Void {
		_map.setTile(9, 5, 0);
		_map.setTile(5, 9, 0);
	}
	
	function npcFollow():Void {
		var pathPoints:Array<FlxPoint> = _map.findPath(
				FlxPoint.get(npc.x + npc.width / 2, npc.y + npc.height / 2), 
				FlxPoint.get(player.x + player.width / 2, player.y + player.height / 2));
				
		if (pathPoints != null) {
			npc.path.start(pathPoints);
		}
	}
	
	
	public function setZoom(zoom:Float)
	{
		FlxG.camera.zoom = FlxMath.bound(zoom, 0.5, 4);
	}
	function goToMouse():Void {
		var pathPoints:Array<FlxPoint> = _map.findPath(
				FlxPoint.get(player.x + player.width / 2, player.y + player.height / 2), 
				FlxPoint.get(FlxG.mouse.x, FlxG.mouse.y));
				
		if (pathPoints != null) {
			player.path.start(pathPoints);
		}
		
	}
}