#include <stdio.h>
#include <unistd.h>
#include "kbhit.h"
#define SLEEP_INCREMENT 10000
//The point of this program is to build a small choose your own adventure game while testing you math skills.

//Narration
//Combat logic
struct combat_logic{
	float add;
	float sub;
	float divide;
	float mult;
	
};

//Character attributes
struct player_stat{
	float attack;
	float defence;
};

//Enemy attributes
struct monster_val{

};

//Sleep function
int keysleep ( int useconds ) {
	init_keyboard();
	int sleep_total = 0;
	do {
		usleep(SLEEP_INCREMENT);
		sleep_total += SLEEP_INCREMENT;
	} while ( sleep_total < useconds && !kbhit() );
	if ( kbhit() ){
		readch();
	}
 	close_keyboard();
 	return sleep_total;
}


//Multiplication path
char fight_choice;
int multiplication(){
	printf("  *****                       *         ___                      \n");
	printf(" *******         ^                 ____|(/)|____                    \n");
	printf("*********     O  |               *|             |*              \n");
	printf(" *******    --|--|                |__         __|                   \n");
	printf("   | |       /\\  o                   |   |   |                  \n");
	printf("   | |      /  \\                     |   |   |                  \n");
	printf(" vv| |vv                         *   |___|___|    *     *               \n");
	printf("                                                             \n");
	printf("                                                             \n\n\n");
	printf("You find yourself in the land of Multiplication. It stinks here.\n");
	keysleep(4000000);
	printf("There is an enemy ahead of you with multiplication bombs. He is throwing them everywhere.\n");
	keysleep(2000000);
	printf("Will you fight?\n");
	scanf("%c", &fight_choice);
        return 0;
}

//Division path
char fight_choice;
int division(){
	printf("  /////                        \\        ___                      \n");
	printf(" ///////         ^              \\  ____|(/)|____                    \n");
	printf("/////////     O  |               \\|             |              \n");
	printf(" ///////    --|--|               /|__         __|                   \n");
	printf("   | |       /\\  o              /    |   |   |                  \n");
	printf("   | |      /  \\               /     |   |   |                  \n");
	printf(" vv| |vv                             |___|___|                        \n");
	printf("                                                             \n");
	printf("                                                             \n\n\n");
	printf("You find yourself in the land of Division. It is depressing here.\n");
	keysleep(4000000);
	printf("There is an enemy ahead of you with division whips. Will you fight?\n");
	scanf("%c", &fight_choice);
        return 0;
}

//Addition path
char fight_choice;
int addition(){
	printf("  +++++                        \\        ___                      \n");
	printf(" +++++++         ^              \\  ____|(/)|____                    \n");
	printf("+++++++++     O  |               \\|             |              \n");
	printf(" +++++++    --|--|               /|__         __|                   \n");
	printf("   | |       /\\  o              /    |   |   |                  \n");
	printf("   | |      /  \\               /     |   |   |                  \n");
	printf(" vv| |vv                             |___|___|                        \n");
	printf("                                                             \n");
	printf("                                                             \n\n\n");
	printf("You find yourself in the land of Division.\n");
	keysleep(4000000);
	printf("There is an enemy ahead of you with division whips. Will you fight?\n");
	scanf("%c", &fight_choice);
        return 0;
}

//Subtraction path
char fight_choice;
int s_value1, s_value2, s_answer, real_answer;

int subtraction(){
	printf("  -----                       ____       ___                      \n");
	printf(" -------         ^   - - - - |____| ____|(/)|____                    \n");
	printf("---------     O  |               |_|             |              \n");
	printf(" -------    --|--|                 |__         __|                   \n");
	printf("   | |       /\\  o                    |   |   |                  \n");
	printf("   | |      /  \\                      |   |   |                  \n");
	printf(" vv| |vv                              |___|___|                        \n");
	printf("                                                             \n");
	printf("                                                             \n\n\n");
	printf("You find yourself in the land of Subtraction. It seems a bit boring here.\n");
	keysleep(4000000);
	printf("There is an enemy ahead of you with subtraction guns. He is aiming at your face\n");
	printf("Will you fight? (y/n)\n");
	scanf("%c", &fight_choice);
	if (fight_choice = 'y'){
		printf("You are now fighting the subtraction gunner! Answer his subtraction question to attack!\n");
		srand(time(NULL));
		s_value1 = rand() % 15;
		s_value2 = rand() % 15;
		real_answer = s_value1-s_value2;
		if (s_value1 < s_value2){
			s_value1 = 15;
			printf("%d - %d=\n", s_value1, s_value2);
		}else{
			printf("%d - %d=\n", s_value1, s_value2);
		}
		
	}
	scanf("%d", &s_answer);
	if (s_answer==real_answer){
		printf("Excellent!  You have defeated the gunner!\n");
	}else{
		printf("Ooooh, you missed!\n");
	}
	printf("You travel back to where you started...\n");
	home_dream();
        return 0;
}


//Weapon and armor attributes
//Choice function
int path_choice;
int path_go(){
	switch(path_choice){
		case 1:
			return multiplication();
		case 2:
			return division();
		case 3:
			return addition();
		case 4:
			return subtraction();
		default:
			return 0;

	}
}

//Home base dream scene, choose your path
int home_dream(){
	printf("\n\n\n");
	printf("  OOOOO                         ________(*)\n");
	printf(" OOOOOOO             1-________/      \n");
	printf("OOOOOOOOO     O      \n");
	printf(" OOOOOOO    --|--   2-_________________(/)\n");
	printf("   | |       /\\     \n");
	printf("   | |      /  \\   3-_________________(+)\n");
	printf(" vv| |vv         \n");
	printf("       o-|--->     4-________\n");
	printf("                             \\_________(-) \n\n\n");
	printf("You find yourself in a strange land.\n");
	keysleep(4000000);
	printf("There is a sword on the ground.  You pick it up.\n");
	keysleep(2000000);
	printf("There are four paths ahead.\n");
	keysleep(2000000);
	printf("Which one will you take? Path 1, 2, 3, or 4?  Choose now.\n");
	scanf("%d", &path_choice);
	path_go();
}

int main (void){
	//variable declaration

	//sleeping picture
	printf("                    ___________\n");
	printf("                   /      z  Z/\\\n");
	printf("                  /     z    / /\n");
	printf("                 /    O     / /\n");
	printf("                /  --/--   / /\n");
	printf("               /    /\\    / /\n");
	printf("              /    /  \\  / /\n");
	printf("             /__________/ /\n");
	printf("             |__________\\/\n\n\n");
	printf("This is you.\n");
	keysleep(2000000);
	printf("You are asleep.\n");
	keysleep(2000000);
	printf("Your math homework is very hard and made you tired.\n");
	keysleep(2000000);
	printf("But there is no rest in dreams...\n");
	keysleep(2000000);
	printf("Press any key to continue...\n\n\n");
	keysleep(20000000);
	
	home_dream();
		
	//Second dream scene
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
	
	return 0;
}
