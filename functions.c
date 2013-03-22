#include<stdio.h>
#include<math.h>
//Operator assignment logic
char assn_operator(){
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
float add(float x,float y){
	return x+y;
}

float subtract(float x,float y){
	return x-y;
}

float divide(float x,float y){
	return x/y;
}

float multiply(float x,float y){
	return x*y;
}
//Take operator assignment and calculate the real answer with the values provided
float evaluate(char operator, float x, float y){
	switch(operator){
		case '+':
			return add(x,y);
		case '-':
			return subtract(x,y);
		case '/':
			return divide(x,y);
		case '*':
			return multiply(x,y);
		default:
			return 0;
	} 
}


int main(void){
	char operator;
	float x,y,result;
	//gather variable assignments
	printf("Lets do some testing.  Enter two numbers when prompted.\n");
	scanf("%f\n", &x);
	scanf("%f", &y);
	//run the functions
	operator = assn_operator();
	result = evaluate(operator,x,y);
	printf("%.0f\n", result);
	return 0;
}
