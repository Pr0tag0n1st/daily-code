#include <allegro5\allegro_font.h>
#include <iostream>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro.h>
#include <allegro5/allegro_font.h>

using namespace std;

int main() {

	al_init();
	al_init_primitives_addon();
	ALLEGRO_DISPLAY *display = NULL;

	al_init();
	al_init_font_addon();
	ALLEGRO_DISPLAY* display = al_create_display(800, 600);
	ALLEGRO_FONT* font = al_create_builtin_font();
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_text(font, al_map_rgb(255, 255, 255), 400, 300, ALLEGRO_ALIGN_CENTER, "Valentine's Day SUCKS!");
	al_flip_display();
	al_rest(5.0);

	display = al_create_display(1000, 1000);

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_draw_triangle(300, 120, 290, 900, 350, 480, al_map_rgb(70, 60, 70), 10);

	al_flip_display();
	al_rest(10.0);
	return 0;
}