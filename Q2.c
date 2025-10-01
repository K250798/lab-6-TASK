#include<stdio.h>
int main(){
	int num, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(i=1; num!=i; i++){
		if(num==2||i==num-1){
			printf("Prime");
			break;
		}
		else if (num%i==0||num==1){
			printf("NOT Prime");
			break;	
		}
	
	}
	return 0;
}
