/* Lesson 2 project: The math problem should be randomly generated, using 2 numbers between 0 and 999, and with a randomly selected operation of +, -, *, /. If the user enters the correct response within 2 decimal places, output 'Correct', otherwise output 'Incorrect'.*/

#include <stdio.h>
int main(void){
	int value1,value2,user_answer,real_answer;
	char operator,get_operator;

	//variable asignments
	srand(time(NULL));	
	value1 = rand() % 999;
	value2 = rand() % 999;
	get_operator = rand() % 4;

	//operator assignment logic
	if(get_operator == 0){
		operator = '+';
	}else if(get_operator == 1){
		operator = '-';
	}else if(get_operator == 2){
		operator = '/';
	}else{
		operator = '*';
	}

	//Calculation of real answer for user_answer comparison	
	if(operator == '+'){
		real_answer = value1 + value2;
	}else if(operator == '-'){
		real_answer = value1 - value2;
	}else if(operator == '/'){
		real_answer = value1 / value2;
	}else if(operator == '*'){
		real_answer = value1 * value2;
	}
	//User instructions
	printf("Let's answer some randomly generated math questions.\nSimply enter the answer and press 'Enter'.\n");
	printf("Round answers to two decimal places\n");
	
	//Assemble the math question
	printf("%d %c %d = ",value1,operator,value2);
	scanf("%d", &user_answer);
		
	//Check the right answer
	
	if(user_answer == real_answer){
		printf("Correct\n");
	}else{
		printf("Incorrect\n");
	}
	 
	return 0;

}
