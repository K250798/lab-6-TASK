#include<stdio.h>
int main(){
	int even=0, odd=0, i;
	for(i=1; i<=20; i++){
		if (i%2==0){
			even=even+i;
		}
		else{
			odd=odd+i;
		}
	}
	printf("For numbers 1-20:\nSum of Odd: %d\nSum of Even: %d", odd, even);
	return 0;
}
