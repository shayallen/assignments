#include<stdio.h>
//variable declaration
char operator;
int x,y,result;
float answer,real_answer,user_answer;

//function for assigned variables
float test_func(float x, float y){
	float answer = x(operator)y;
	return(answer);
}
//Operator assignment logic
char assn_operator(char operator){
	int get_operator = rand () % 4;
        if(get_operator == 0){
                operator = '+';
                real_answer = x + y;
        }else if(get_operator == 1){
                operator = '-';
                real_answer = x - y;
        }else if(get_operator == 2){
                operator = '/';
                real_answer = x / y;
                real_answer = floor(real_answer*100)/100;
        }else{
                operator = '*';
                real_answer = x * y;
	return (operator)
        }

	
}
int main(void){
	//gather variable assignments
	printf("Lets do some testing.  Enter two numbers when prompted.\n");
	scanf("%i\n", &x);
	scanf("%i", &y);
	//run the functions
	operator = assn_operator();
	result = test_func(x,y);
	printf("%i\n", result);
	return 0;
}
