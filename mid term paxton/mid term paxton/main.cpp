#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
#include <stdio.h>
#include <allegro5\allegro_image.h>
#include <allegro5/allegro.h>
using namespace std;
int room = 1;//room that you spawn in
void monster();
string array[10];
int health = 100;//health

int main() {


	al_init();

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_BITMAP*image = NULL;





	display = al_create_display(640, 480);
	al_init_image_addon();
	image = al_create_bitmap(640, 480);

	al_clear_to_color(al_map_rgb(0, 0, 0));

	//al_flip_display();

	//al_rest(10.0);

	//al_destroy_display(display);



	string items[10];
	string input = "a";
	string option;
	while (input != "quit" && health >= 0) {
		switch (room) {//photos
		
		case 1: 
				image = al_load_bitmap(" jpg");
				break;

			}
		switch (room) {//start of your game rooms
		case 1:

			
			cout << "you are in a room with nothing but yourself, you have two doors in front of you." << endl;
			cout << "You can go south and east" << endl;
			getline(cin, input);
			cout << endl;
			monster();


			if (input.compare("south") == 0 || input.compare("s") == 0)
				room = 2;
			else if (input.compare("east") == 0 || input.compare("e") == 0)
				room = 3;
			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;

		case 2:
			cout << "In room 2 you have again nothing in the room other than a terminal and a door that leads to another room. there is something on the terminal" << endl;
			cout << "There is a door to west." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("west") == 0 || input.compare("w") == 0)
				room = 3;
			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 3:
			cout << "Nothing in this room other than blood stains on the walls put in words that are un readable" << endl;
			cout << "Gget heelp dontt go feurtherr!" << endl;
			cout << "The only way is a door to the north, you can head back into room 2 to the east." << endl;
			getline(cin, input);//used for input by user
			cout << endl;
			monster();

			if (input.compare("north") == 0 || input.compare("n") == 0)
				room = 1;
			else if (input.compare("east") == 0 || input.compare("e") == 0)
				room = 2;
			else if (input.compare("south") == 0 || input.compare("s") == 0)
				room = 4;
			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;

		case 4:
			cout << "You look around to see a dead sevastopol security officer at his desk with a round jagged hole shaped wound in his chest. To the right of him is his handgun. You pick it up to find it completely loaded. A .44 magnum with exactly 6 shots." << endl;
			cout << "You can go north and west." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("north") == 0 || input.compare("n") == 0)
				room = 5;
			else if (input.compare("west") == 0 || input.compare("w") == 0)
				room = 6;
			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 5:
			cout << "Nothing in this room and is oddly clean. The door to the next room is to your south." << endl;
			cout << "You can go south." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("south") == 0 || input.compare("n") == 0)
				room = 7;
			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 6:
			cout << "Nothing in this room other than a window looking out on planet kg348. The gas giant that has an atmosphere almost identical to jupiter. You have to go back and go south to enter the next room." << endl;
			cout << "You can only go north." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("north") == 0 || input.compare("e") == 0)
				room = 4;
			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 7:
			cout << "You look around to see nothing but servers everywhere. You are in a server room with what looks to be like a prototype weapon or device. You pick it up to find that it is a motion detector radar. The plus side is you and the alone are alone so the alien is the only other blip you pick up. The downside is you and the alien are alone." << endl;
			cout << "You can go east." << endl;
			getline(cin, input);
			cout << endl;
			void monster();

			if (input.compare("east") == 0 || input.compare("e") == 0)
				room = 8;
			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 8:
			cout << " In this room is nothing but you start to notice black liquid that looks to be sticky is starting to cave on the walls. You can't tell what it is but it is not good.." << endl;
			cout << "You can go east, or norhteast" << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("north") == 0 || input.compare("e") == 0)
				room = 10;
			else if (input.compare("east") == 0 || input.compare("ne") == 0)
				room = 9;
			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 9:
			cout << "In this in this room is four dead people lying dead on the floor. Well at least we know what happened to the search team ripley was on. Thankfully i don't see ripley. That means she could be alive. Or something has happened.." << endl;
			cout << "And i need to get out of here and nuke the station or something. Maybe i should get to the main office within the station and tell any survivors left on it to run for docking bay 2 to escape with me." << endl;
			cout << "I hear something on a radio on a desk “any survivors left in sevastopol *inaudible* go to the east docking bay…*inaudible* survival”" << endl;
			cout << "You can go south or east." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("north") == 0 || input.compare("e") == 0)
				room = 11;
			else if (input.compare("east") == 0 || input.compare("s") == 0)
				room = 10;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 10:
			cout << "In this room it looks to be before the incident happened it was a sleeping quarters for workers and space marines. On one of the bes is a drawer." << endl;
			cout << "It has a lock. If you shoot it you should definitely go and hide as quickly as possible. If not then south is the next room’s location." << endl;
			cout << "You can go south or east." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("east") == 0 || input.compare("e") == 0)
				room = 13;
			else if (input.compare("south") == 0 || input.compare("s") == 0)
				room = 12;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 11:
			cout << "In this room is a table. On the table is a flamethrower. You notice the entire room is covered in a black tar like substance. Almost no spots in the room are the walls original infrastructure." << endl;
			cout << "You pick up the flamethrower and use it to test and see if it still works. You burn a hole in the black tar but you don't burn a hole into the walls of the station. You realize this could become useful against the alien." << endl;
			cout << "You can go north or east." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("east") == 0 || input.compare("e") == 0)
				room = 12;
			else if (input.compare("north") == 0 || input.compare("s") == 0)
				room = 13;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 12:
			cout << "In this room is nothing. You have a window looking  out at the gas giant and you have a door to your left which the hall leading to that room is full of black tar like substance." << endl;
			cout << "You can go south or east." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("east") == 0 || input.compare("e") == 0)
				room = 14;
			else if (input.compare("north") == 0 || input.compare("s") == 0)
				room = 11;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 13:
			cout << "In this room is nothing but the door to the next room is covered by a fiery blockade of couches and tables. Only way you can go is south." << endl;
			cout << "You can only go south." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("north") == 0 || input.compare("e") == 0)
				room = 14;
			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 14:
			cout << "This room is covered in a black tar like substance. But now there is eggs all over the place.little alien eggs that spawn more alien lifeforms. Get out of sevastopol fast. you need to find a way to move on to the next room because you are bloked by the substance." << endl;
			cout << "You can go north or west" << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("north") == 0 || input.compare("n") == 0)
				room = 15;
			else if (input.compare("west") == 0 || input.compare("e") == 0)
				room = 13;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 15:
			cout << "In this room is nothing. There is a locker and desk for hiding places and there is a terminal but it is broken so nothing is on it." << endl;
			cout << "You can only go south." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("east") == 0 || input.compare("e") == 0)
				room = 17;
			else if (input.compare("west") == 0 || input.compare("") == 0)
				room = 16;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 16:
			cout << "In this room on the walls spells out “as the crew sleeps” carved into the metal by some sort of knife or sharp object." << endl;
			cout << "You can go south." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("south") == 0 || input.compare("s") == 0)
				room = 15;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 17:
			cout << "In this room is nothing but a window looking out at the station’s top side. The door to the next room is locked. Fire a shot and hide fast there is no other way around it." << endl;
			cout << "You fire a shot and quickly hide, nothing comes, you go on." << endl;
			cout << "You can go north." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("north") == 0 || input.compare("n") == 0)
				room = 18;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 18:
			cout << "You are in a sort of boiler\engine room.in this room is a body. Specifically female. You get closer to search the body for loot and you notice...it’s ripley she has a big gaushe in her chest that has tore through her bones and has entered her body from her back." << endl;
			cout << "It has pierced the bone and skin and left a big bloody hole on her chest. The woman you came looking for...has sealed the same fate as you. Unless you can pull it together and survive." << endl;
			cout << "Thankfully ripley was a survivalist. She had a noise maker on her person. This could come in handy." << endl;
			cout << "You can go north." << endl;
			getline(cin, input);
			cout << endl;
			void monster();

			if (input.compare("north") == 0 || input.compare("n") == 0)
				room = 19;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 19:
			cout << "This seems to be some sort of control room. On the computer is numbers and they seem to be lowering fast. “30:30:17” you have 30 minutes to escape...someone has pushed the self destruct." << endl;
			cout << "You need to get to the east docking bay and get on the shuttle to escape within 30 minutes in order to warn them to escape and for you to escape too." << endl;
			cout << "You can go west." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("west") == 0 || input.compare("w") == 0)
				room = 20;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;

		case 20:
			cout << "This room is full of blockage and things like tables and mattresses i guess it was in an effort to block the alien out of the room they were in. obviously that didn't work." << endl;
			cout << "You can go west." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("west") == 0 || input.compare("w") == 0)
				room = 21;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)//allows you to die and then return to start
				cout << "You're dead" << endl;
			return 0;
		case 21:
			cout << "A locker and desk is in this room incase you need to hide. Otherwise there is nothing. There is a window looking out at the gas giant and sevastopol station." << endl;
			cout << "You can go north." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("north") == 0 || input.compare("n") == 0)
				room = 22;

			else
				cout << "Invalid input" << endl;

			break;
		case 22:
			cout << "In this room is nothing. But you can start to hear the roar of an engine or loud noise in the next room. The door is locked but you can shoot it off. Be prepared to run. You are running out of time." << endl;
			cout << "You can go north." << endl;
			getline(cin, input);
			cout << endl;
			monster();

			if (input.compare("north") == 0 || input.compare("n") == 0)
				room = 23;

			else
				cout << "Invalid input" << endl;

			break;

			if (health = 0)
				cout << "You're dead" << endl;
			return 0;
		case 23:
			cout << "You find the survivors and get on the ship. As you fly away you watch as sevastopol goes up into a blazing ball of fire. You have failed to bring ripley back alive. But you have survived. And are going home." << endl;

			break;

		} //switch ends
	} //while ends
} //main ends

void monster() {
	int ammo = 6;
	int number = rand() % 100 + 1;
	if (number <= 25) {//the percentage of the monster spawning in each room.
		
		cout << "The creature has appeared" << endl;
		health -= 50;//how much health lost by the creature.
		cout << "health: " << health << endl;
	}
}