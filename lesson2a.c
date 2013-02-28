/* Lesson 2 project: The math problem should be randomly generated, using 2 numbers between 0 and 999, and with a randomly selected operation of +, -, *, /. If the user enters the correct response within 2 decimal places, output 'Correct', otherwise output 'Incorrect'.*/

#include <stdio.h>
int main(void){
	int value1,value2,answer,i;
	char operator1,get_operator;

	//variable asignments
	i = 0;
	srand(time(NULL));	
	value1 = rand() % 999;
	value2 = rand() % 999;
	get_operator = rand() % 3;

	//operator assignment logic
	if(get_operator == 0){
		operator1='+';
	}else if(get_operator == 1){
		operator1='-';
	}else if(get_operator == 2){
		operator1='/';
	}else{
		operator1='*';
	}

	//User instructions
	printf("Let's answer some randomly generated math questions.\nSimply enter the answer and press 'Enter'.\n");
	
	//Assemble the math question
	printf("%d %s %d = ",value1,operator1,value2);
	scanf("%d\n", &answer);

	//Check the right answer
	//if(answer == (value1
	
	return 0;

}
