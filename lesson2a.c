/* Lesson 2 project: The math problem should be randomly generated, using 2 numbers between 0 and 999, and with a randomly selected operation of +, -, *, /. If the user enters the correct response within 2 decimal places, output 'Correct', otherwise output 'Incorrect'.*/

#include <stdio.h>
int main(void){
	int value1,value2,answer,assn_operator,i;
	char operator1;

	//variable asignments
	i = 0;
	srand(time(NULL));	
	value1 = rand() % 999;
	value2 = rand() % 999;
	assn_operator = rand() % 3;
	if(assn_operator == 0){
		operator1='+';
	}else if(assn_operator == 1){
		operator1='-';
	}else if(assn_operator == 2){
		operator1='/';
	}else(assn_operator == 3){
		operator1='*';
	}

	//User instructions
	printf("Let's answer some randomly generated math questions. Simply enter the answer and press 'Enter'.\n");
	
	//Assemble the math question
	printf("%d %d %d = ",value1,operator1,value2);
	scanf("%d\n", &answer);

	//Check the right answer
	//if(answer == (value1
	
	return 0;

}
