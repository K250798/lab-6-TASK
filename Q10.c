#include<stdio.h>
int main(){
	int num=0, i=1;
	char ask= ' ';
	do{	
	    printf("\nEnter the Number you want the table of: ");
	    scanf("%d", &num);
		for(i=0;i<=10;i++){
			printf("\n%d x %d = %d",num, i, i*num);	
	    }
	    printf("\nDo want another number's table?(Y/N)");
	    scanf(" %c", &ask);
	}while(ask=='Y'||ask=='y');   
	return 0; 
}
