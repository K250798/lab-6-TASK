#include <stdio.h>
int main(){
	int num, power, i;
	
	printf("enter number to be powered: ");
	scanf("%d",&num);
	printf("enter power for the number: ");
	scanf("%d", &power);
	int ans=num;
	for(i=1;i!=power;i++){
		ans=ans*num;
	}
	printf("%d^%d = %d", num, power, ans);
}
