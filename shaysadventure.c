#include <stdio.h>
#include <unistd.h>
#include <curses.h>
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
int nar_pause(){
	/*int total_sleep_time;
	char key_pressed;
	key_pressed = getchar();	
	while (total_sleep_time < 2 && !key_pressed){
		sleep(2);
		if (key_pressed = true){
			break;
		}
	}
	return 0;
	while ( total_sleep_time < 2 && !key_pressed ) {
 		sleep(.1);
 		total_sleep_time += .1;
 	if ( [key pressed] ) key_pressed = true;
	}*/
	int kbhit();
	while (!kbhit()){
		sleep(2);
		break;
		return 0;
	}
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
	nar_pause();
	printf("You are asleep.\n");
	nar_pause();
	printf("Your math homework is very hard and made you tired.\n");
	nar_pause();
	printf("But there is no rest in dreams...\n");
	nar_pause();
	printf("Press enter to continue...\n\n\n");
	while(getchar() != '\n');

	//First dream scene, choose your path
	printf("  OOOOO                        ________(*)\n");
	printf(" OOOOOOO              ________/      \n");
	printf("OOOOOOOOO     O      \n");
	printf(" OOOOOOO    --|--    _________________(/)\n");
	printf("   | |       /\\     \n");
	printf("   | |      /  \\    _________________(+)\n");
	printf(" vv| |vv         \n");
	printf("                  ________\n");
	printf("                            \\_________(-) \n\n\n");
	printf("You find yourself in a strange land.\n");
	nar_pause();
	printf("There are four paths ahead.\n");
	nar_pause();
	printf("Which one will you take.\n");
	nar_pause();

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
