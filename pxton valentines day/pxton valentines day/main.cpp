#include <allegro5/allegro.h>


int main()
{
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	ALLEGRO_BITMAP *square = NULL;

	float square_x = 50;
	float square_y = 50;

	bool key[4] = { false, false, false, false };
	
	bool redraw = true;

	bool doexit = false;

	al_init();

	al_install_keyboard();

	timer = al_create_timer(.02);

	display = al_create_display(640, 480);

	square = al_create_bitmap(32, 32);

	al_set_target_bitmap(square);

	al_clear_to_color(al_map_rgb(255, 255, 255));

	al_set_target_bitmap(al_get_backbuffer(display));

	event_queue = al_create_event_queue();

	al_register_event_source(event_queue, al_get_display_event_source(display));

	al_register_event_source(event_queue, al_get_timer_event_source(timer));

	al_register_event_source(event_queue, al_get_keyboard_event_source());

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_flip_display();

	al_start_timer(timer);

	while (!doexit)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		//////////////////////////////////////////////////////////////////////////////////////////////////
		//here's the movement algorithm

		if (ev.type == ALLEGRO_EVENT_TIMER) {
			
			if (key[0] && square_y >= 0) {
				square_y -= 4.0;
			}

			
			if (key[1] && square_y <= 480 - 32) {
				square_y += 4.0;
			}
			
			if (key[2] && square_x >= 0) {
				square_x -= 4.0;
			}

		
			if (key[3] && square_x <= 640 - 32) {
				square_x += 4.0;
			}

		
			redraw = true;
		}

		///////////////////////////////////////////////////////////////////////////////////////////////////////
		else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			break;
		}

		//////////////////////////////////////////////////////////////////////////////////////////////////////
		

		
		else if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {

			
			switch (ev.keyboard.keycode) {

			case ALLEGRO_KEY_UP:
				key[0] = true;
				break;

				
			case ALLEGRO_KEY_DOWN:
				key[1] = true;
				break;

				
			case ALLEGRO_KEY_LEFT:
				key[2] = true;
				break;

				
			case ALLEGRO_KEY_RIGHT:
				key[3] = true;
				break;
			}
		}
		
		else if (ev.type == ALLEGRO_EVENT_KEY_UP) {
			switch (ev.keyboard.keycode) {
			case ALLEGRO_KEY_UP:
				key[0] = false;
				break;

			case ALLEGRO_KEY_DOWN:
				key[1] = false;
				break;

			case ALLEGRO_KEY_LEFT:
				key[2] = false;
				break;

			case ALLEGRO_KEY_RIGHT:
				key[3] = false;
				break;

				
			case ALLEGRO_KEY_ESCAPE:
				doexit = true;
				break;
			}
		}


		if (redraw && al_is_event_queue_empty(event_queue)) {
			redraw = false;

			

			al_draw_bitmap(square, square_x, square_y, 0);

			al_flip_display();
		}
	}

	al_destroy_bitmap(square);
	al_destroy_timer(timer);
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);

	return 0;
}

