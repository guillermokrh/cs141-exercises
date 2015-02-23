/* sum.c
*Prompt: make a recursive function that returns 
* a sum
* author: guillermokrh
*/

#include <stdio.h>

int sum(int n){

	int total = 0;

	if (n == 0){
		total = n;
	}
	else {
		total = n + sum(n-1);
	}

	return total;
}

int main(){
	int answer = sum(3);
	printf("%i\n", answer);
}
