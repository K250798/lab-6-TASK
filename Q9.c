#include<stdio.h>
int main(){
	int sum=0, num, num2;
	printf("Please enter a number: ");
	scanf("%d", &num);
	int num3=num;
	while(num3!=0){
		num2=num3%10;
		sum=sum+(num2*num2*num2);
		num3=num3/10;
		
	}	
	if (sum==num){
		printf("Armstrong Number");
	}
	else{
		printf("NOT Armstrong Number");
	}
	return 0;
}
