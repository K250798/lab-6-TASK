#include <stdio.h>
int main(){
	int static num, num2=0;
	printf("Please enter number: ");
	scanf("%d", &num);
	int temp=num;
	while(num!=0){
		num2=num2*10+(num%10);
		num=num/10;	
		
	}
	if(temp==num2){
		printf("Palindrome");
	}
	else{
		printf("NOT Palindrome");
	}
	return 0;
}
