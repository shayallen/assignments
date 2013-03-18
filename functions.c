#include<stdio.h>
int main(void){
	int x, y, result;
	//gather variable assignments
	printf("Lets do some testing.  Enter two numbers when prompted.\n");
	scanf("%i\n", &x);
	scanf("%i\n", &y);
	//function for assigned variables
	int test_func(int x, int y){
		int answer = x*y;
		return(answer);
	}
	//run the function
	result = test_func(x,y);
	printf("%i\n", result);
	return 0;
}
