#include <allegro5/allegro.h>
#include <allegro5\allegro_primitives.h>
int main() {

	al_init();
	al_init_primitives_addon();
	ALLEGRO_DISPLAY *display = NULL;



	display = al_create_display(1000, 1000);

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_draw_triangle(300, 120, 290, 900, 350, 480, al_map_rgb(70, 60, 70), 10);
	al_draw_triangle(30, 140, 210, 980, 300, 450, al_map_rgb(40, 90, 200), 10);
	al_draw_triangle(360, 110, 240, 90, 310, 40, al_map_rgb(80, 255, 50), 10);
	al_draw_triangle(30, 10, 20, 90, 30, 40, al_map_rgb(75, 60, 70), 10);
	al_draw_triangle(10, 14, 21, 98, 30, 45, al_map_rgb(40, 90, 20), 10);
	al_draw_triangle(60, 10, 40, 90, 10, 40, al_map_rgb(80, 255, 50), 10);



	al_flip_display();
	al_rest(10.0);
	return 0;

}