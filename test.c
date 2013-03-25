#include <stdio.h>
#include <math.h>
// Get the randomly generated math operator
char assn_operator (){
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
int main(void){
	char operator;
	float value1, value2, user_answer, real_answer;
	int question_number, a;
	a = 0;

	//Prompt for the number of questions
	printf("Welcome! How many questions would you like to answer up to 10?\n");
	scanf("%d", &question_number);
	if (question_number > 10){
		printf("That is too much work.  Lets do 10 or less.  Pick again.\n");
		scanf("%dn", &question_number);
	}
	
	//build the questions and loop the number of times the user requested
	while(a < question_number){ 
		//variable assignments
		srand(time(NULL));
		value1 = rand () % 999;
		value2 = rand () % 999;
		operator = assn_operator();
		real_answer = evaluate(operator,value1,value2);

		//Ask the questions
		printf("%.0f %c %.0f = ",value1, operator, value2);
		scanf("%f", &user_answer);

		//Check for the right answer
		if (user_answer == real_answer){
			printf("Correct!\n");
		}else{
			printf("Incorrect.  The correct answer %.2f.\n", real_answer);
		}
		a++;
	}
	

	return 0;

}
