/*Move all of the code into multiple functions, and organize and name the functions in a logical manner.  Ask the user for how many manth probems they'd like to solve, up to 10. Generate the problems as requested and provide a summary at the end.*/


#include <stdio.h>
#include <math.h>

float assn_operator (int get_operator){
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
int get_question_num();


int main(void){
	char operator;
	float value1,value2,real_answer,user_answer;
	int a, get_operator;

	//variable asignments
	srand(time(NULL));	
	value1 = rand() % 999;
	value2 = rand() % 999;
	get_operator = rand() % 4;
	a = 0;
	//Number of questions prompt function
	int get_question_num(){
		printf("How many math questions would you like to answer up to 10?\n");
		scanf("%d\n", &question_num);
		if(question_num > 10){
			printf("Please enter a number of 10 or lower.\n");
			get_question_num ();
		}else{
			generate_questions (value1, get_operator, value2)
			return (0);
		}
	}
	//User instructions
	//Prompt a user for the number of questions that they want to answer
	printf("Let's answer some randomly generated math questions. Truncate answers to two decimal places.\n");
	printf("Simply enter the answer and press 'Enter'.\n");

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


	//Assemble the math question
	printf("%.0f %c %.0f = ",value1,operator,value2);
	scanf("%f", &user_answer);

	
	//Loop to ensure the correct amount of questions are answered
	while (a < question_num){
		
	}
	//Check the right answer	
	if(user_answer == real_answer){
		printf("Correct\n");
	}else{
		printf("Incorrect\n");
	}

	return 0;

}
