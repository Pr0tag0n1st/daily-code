#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
using namespace std;
class brick {
public:
	initBrick(Xpos, Ypos, width, height, Color, dead);
	draw();
	IsDead();
	killBrick();
	Collision();
Brick: Brick() {
	Xpos = 0;
	Ypos = 0;
	width = 0;
	height = 0;
	dead = 0;
	Color = 0;
}
   Private:
	   int Xpos;
	   int Ypos;
	   int width;
	   int height;
	   bool dead;
	   int Color;
};
int main() {











}
void Brick::initBrick(Xpos, Ypos, width, height, Color, dead) {
}