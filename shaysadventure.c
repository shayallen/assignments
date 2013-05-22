#include <stdio.h>
#include <unistd.h>
#include "kbhit.h"
#include <math.h>
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

/*Assign operator for the questions
float assn_operator(){
        srand(time(NULL));
        int get_operator = rand () % 4;
        switch(get_operator){
                case 0:
                        return '+';
                case 1:
                        return '-';
                case 2:
                        return '/';
                case 3:
                        return '*';
                default:
                        return 0;
        }

}
*/

// Calculate the real answer
float evaluate(char operator, float x, float y){
        float truncate;
        switch(operator){
                case '+':
                        return x+y;
                case '-':
                        return x-y;
                case '/':
                        truncate = x/y;
                        truncate = floor(truncate*100)/100;
                        return truncate;
                case '*':
                        return x*y;
                default:
                        return 0;
	}
}

//Operator ID function
int operator_id_func(char operator_id){
        switch(operator_id){
                case '*':
                        return printf("You are now fighting the multiplication madman!  Best him by answering his multiplication quesion!\n");
                case '/':
                        return printf("You are now fighting the division demon!  Get through his division question to defeat him!\n");
                case '-':
			return printf("You are now fighting the subtraction gunner! Answer his subtraction question to attack!\n");
                case '+':
                        return printf("You are now fighting the addition axeman!  Answer his addition question to avoid getting axed!\n");
                default:
                        return 0;
        }

}

//Question generation and evaluation function
int get_question(char operator){	
	float value1, value2, user_answer, real_answer;
	char fight_choice, operator_id;
	operator_id = operator;
	printf("Will you fight? (y/n)\n");
	scanf("%c", &fight_choice);
	if (fight_choice = 'y'){
		operator_id_func(operator_id);
		srand(time(NULL));
		value1 = rand() % 15;
		value2 = rand() % 15;
		while (value1<value2){
			value2 = rand() %15;
		}
		printf("%.f %c %.f=", value1, operator, value2);
	}else{
		printf("You cowardly run back the direction you came...\n");
		home_dream();
	}
		real_answer = evaluate(operator, value1, value2);
		scanf("%f", &user_answer);
	if (user_answer==real_answer){
		printf("Excellent!  You have defeated the gunner!\n");
		keysleep(2000000);
	}else{
		printf("Ooooh, you missed!  Try again?\n");
		keysleep(2000000);
		get_question(operator);
	}
	printf("You victoriously travel back to where you started...\n");
	keysleep(2000000);
	home_dream();
}
//Home path selection screen

//Multiplication path
int multiplication(){
	char operator = '*';
	char fight_choice;
	printf("  *****                       *         ___                      \n");
	printf(" *******         ^                 ____|(*)|____                    \n");
	printf("*********     O  |               *|             |*              \n");
	printf(" *******    --|--|                |__         __|                   \n");
	printf("   | |       /\\  o                   |   |   |                  \n");
	printf("   | |      /  \\                     |   |   |                  \n");
	printf(" vv| |vv                         *   |___|___|    *     *               \n");
	printf("                                                             \n");
	printf("                                                             \n\n\n");
	printf("You find yourself in the land of Multiplication. Woohoo.\n");
	keysleep(4000000);
	printf("There is an enemy ahead of you with multiplication bombs. He is throwing them everywhere!\n");
	keysleep(2000000);
	get_question(operator);
	
        return 0;
}

//Division path
int division(){
	char operator = '/';
	char fight_choice;
	printf("  /////                                 ___        /              \n");
	printf(" ///////         ^                 ____|(/)|____  /                  \n");
	printf("/////////     O  |                |             |/              \n");
	printf(" ///////    --|--|               /|__         __|                   \n");
	printf("   | |       /\\  o              /    |   |   |                  \n");
	printf("   | |      /  \\               /     |   |   |                  \n");
	printf(" vv| |vv                             |___|___|                        \n");
	printf("                                                             \n");
	printf("                                                             \n\n\n");
	printf("You find yourself in the land of Division. The annoyance of division makes it depressing here.\n");
	keysleep(4000000);
	get_question(operator);
        return 0;
}

//Addition path
int addition(){
	char operator = '+'; 
	char fight_choice;
	printf("                                                      +           \n");
	printf("                                                  ++++++               \n");
	printf("  +++++                                 ___       ++++++             \n");
	printf(" +++++++         ^                 ____|(+)|____  +   +               \n");
	printf("+++++++++     O  |                |             | +             \n");
	printf(" +++++++    --|--|                |__         __| +                  \n");
	printf("   | |       /\\  o                   |   |   |   +               \n");
	printf("   | |      /  \\                     |   |   |                  \n");
	printf(" vv| |vv                             |___|___|                        \n");
	printf("                                                             \n");
	printf("                                                             \n\n\n");
	printf("You find yourself in the land of Addition, but something is not adding up... \n");
	keysleep(4000000);
	printf("There is an enemy ahead of you with an Addition axe!  He looks really mad.\n");
	get_question(operator);
        return 0;
}

//Subtraction path

int subtraction(){
	char operator = '-';
	char fight_choice;
	printf("  -----                       ____       ___                      \n");
	printf(" -------         ^   - - - - |____| ____|(-)|____                    \n");
	printf("---------     O  |               |_|             |              \n");
	printf(" -------    --|--|                 |__         __|                   \n");
	printf("   | |       /\\  o                    |   |   |                  \n");
	printf("   | |      /  \\                      |   |   |                  \n");
	printf(" vv| |vv                              |___|___|                        \n");
	printf("                                                             \n");
	printf("                                                             \n\n\n");
	printf("You find yourself in the land of Subtraction.\n");
	keysleep(3000000);
	printf("There is an enemy ahead of you with subtraction guns. He is aiming at your face.\n");
	keysleep(2000000);
	get_question(operator);
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
	printf("You find yourself back at the beginning of each path.\n");
	keysleep(2000000);
	printf("Which one will you take this time?\n");
	scanf("%d", &path_choice);
	path_go();
}

int main (void){
	//variable declaration
	char fight_choice;

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
