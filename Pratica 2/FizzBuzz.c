#include <stdio.h>

int main(){
	int n = 1;

	while(n <= 100){
		if(n % 5 == 0 && n % 3 == 0)
			printf("\nFizzBuzz");
		else if(n % 3 == 0)
			printf("\nFizz");
		else if(n % 5 == 0)
			printf("\nBuzz");
		else 
			printf("\n%i", n);
		
		n++;
	}
	return 0;
}