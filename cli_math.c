//Add the ability to specify in the CLI how many problems you'd like to solve.  If nothing is specified, still prompt the user.  Also, allow the user to specify on the CLI which types of problems they'd like to solve.  In this case do not prompt the user if nothing is entered.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Structure
struct math_problem{
	float value1;
	float value2;
	float user_answer;
	float real_answer;
	char operator;	
};

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
int main(int argc, char *argv[]){
	int i,x,cli_question_num,question_number,num_correct;
	char cli_operator;
	struct math_problem data[10];
	num_correct = 0;
	//CLI testing
	if(argc != 2){
		printf("\nYou can designate the number of questions and the type(+-/*) by typing that number and preference after the program name.\n");
		printf("For example, ./cli_math 3 * which will give you three multiplication questions.\n");
		exit(EXIT_FAILURE);
	}

	//Prompt for the number of questions
	cli_question_num = atoi(argv[1]);
	if(cli_question_num>0){
		question_number=cli_question_num;
	}else{
		printf("Welcome! How many questions would you like to answer up to 10?\n");
		scanf("%d", &question_number);
		while (question_number > 10){
			printf("That is too much work.  Lets do 10 or less.  Pick again.\n");
			scanf("%d", &question_number);
		}
	}
	
	//Build the logic for the operator practice and implement
	cli_operator = (argv[2]);
	printf("%c\n", cli_operator);
	if(cli_operator>0){
		cli_operator = data[i].operator;
	}else{
		printf("you can also designate the operator (/*+-) if you would like.\n");
	}

	//Make array that assigns variable data for later output
	for(i=0; i<question_number; i++){
		srand(time(NULL));
		data[i].value1 = rand () % 999;
		data[i].value2 = rand () % 999;
		data[i].operator = assn_operator();
		data[i].real_answer = evaluate(data[i].operator, data[i].value1, data[i].value2);
		//Ask the questions
		printf("%.0f %c %.0f = ",data[i].value1, data[i].operator, data[i].value2);
		scanf("%f", &data[i].user_answer);
		//Check for the right answer
		if (data[i].user_answer == data[i].real_answer){
			printf("Correct!\n");
			num_correct += 1;
		}else{
			printf("Incorrect.  The correct answer is %.2f.\n", data[i].real_answer);
		}
	}
	//Summary and other good stuff
	printf("\n\nHere is a summary of the questions and your answers.\n\n");	
	printf("You answered %d out of %d correctly, which is %f%%.\n\n",num_correct, question_number,(float)(num_correct/question_number)*100);
	for(i=0; i<question_number; i++){
		if (data[i].user_answer == data[i].real_answer){
		printf("%.0f %c %.0f = %.2f. You answered %.2f, which was correct!\n",data[i].value1, data[i].operator, data[i].value2, data[i].real_answer, data[i].user_answer);
		}else{
		printf("%.0f %c %.0f = %.2f. You answered %.2f, a difference of %.2f.\n",data[i].value1, data[i].operator, data[i].value2, data[i].real_answer, data[i].user_answer, data[i].user_answer-data[i].real_answer);
		}
	}



/*	//build the questions and loop the number of times the user requested
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
	
*/
	return 0;

}
