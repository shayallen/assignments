/* Lesson 2 project: The math problem should be randomly generated, using 2 numbers between 0 and 999, and with a randomly selected operation of +, -, *, /. If the user enters the correct response within 2 decimal places, output 'Correct', otherwise output 'Incorrect'.*/

#include <stdio.h>
#include <math.h>
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
	printf("Let's answer some randomly generated math questions.\nSimply enter the answer and press 'Enter'.\n");
	printf("Truncate answers to two decimal places.\n");
	
	//Assemble the math question
	printf("%.0f %c %.0f = ",value1,operator,value2);
	scanf("%f", &user_answer);
		
	//Check the right answer
	
	if(user_answer == real_answer){
		printf("Correct\n");
	}else{
		printf("Incorrect\n");
	}
	
	//printf("%f     %f  \n", real_answer,user_answer); 
	return 0;

}
