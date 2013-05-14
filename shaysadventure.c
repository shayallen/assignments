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
	readch();
	close_keyboard();
	return sleep_total;
}

//Weapon and armor attributes
//



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
	keysleep(200000);
	printf("You are asleep.\n");
	keysleep(200000);
	printf("Your math homework is very hard and made you tired.\n");
	keysleep(200000);
	printf("But there is no rest in dreams...\n");
	keysleep(200000);
	printf("Press enter to continue...\n\n\n");

	//First dream scene, choose your path
	printf("  OOOOO                        ________(*)\n");
	printf(" OOOOOOO              ________/      \n");
	printf("OOOOOOOOO     O      \n");
	printf(" OOOOOOO    --|--    _________________(/)\n");
	printf("   | |       / \\     \n");
	printf("   | |      /   \\     _________________(+)\n");
	printf(" vv| |vv         \n");
	printf("      o-|--->        ________\n");
	printf("                             \\_________(-) \n\n\n");
	printf("You find yourself in a strange land.\n");
	keysleep(200000);
	printf("There is a sword on the ground.  You pick it up.\n");
	printf("There are four paths ahead.\n");
	keysleep(200000);
	printf("Which one will you take?\n");
	keysleep(200000);

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
