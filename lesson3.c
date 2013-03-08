/*Move all of the code into multiple functions, and organize and name the functions in a logical manner.  Ask the user for how many manth probems they'd like to solve, up to 10. Generate the problems as requested and provide a summary at the end.*/


#include <stdio.h>
#include <math.h>

int get_operator (char operator);

int main(void){
	char operator,get_operator;
	float value1,value2,real_answer,user_answer;

	//variable asignments
	srand(time(NULL));	
	value1 = rand() % 999;
	value2 = rand() % 999;
	get_operator = rand() % 4;

	//operator assignment logic
	if(get_operator == 0){
		operator = '+';
		real_answer = value1 + value2;
	}else if(get_operator == 1){
		operator = '-';
		real_answer = value1 - value2;
	}else if(get_operator == 2){
		operator = '/';
		real_answer = value1 / value2;
		real_answer = floor(real_answer*100)/100;
	}else{
		operator = '*';
		real_answer = value1 * value2;
	}

	//User instructions
	printf("Let's answer some randomly generated math questions. Truncate answers to two decimal places.\n");
	printf("Simply enter the answer and press 'Enter'.\n");

	//Assemble the math question
	printf("%.0f %c %.0f = ",value1,operator,value2);
	scanf("%f", &user_answer);

	//Check the right answer	
	if(user_answer == real_answer){
		printf("Correct\n");
	}else{
		printf("Incorrect\n");
	}

	return 0;

}
