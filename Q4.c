#include<stdio.h>
int main(){
	int num=0, i=0, temp=1, temp2, count=0;
	printf("Enter a num: ");
	scanf("%d", &num);
	if (num!=0){
	   printf("0\t1");
	   while(count!=num-2){
		printf("\t%d", i+temp);
		temp2=i+temp;
		count++;
		if (count==num-2){break;
		}
	    printf("\t%d", temp+temp2);
	    i=temp+temp2;
	    count++;
	    if (count==num-2){break;
		}
		printf("\t%d", i+temp2);
		temp=i+temp2;
		count++;
		if (count==num-2){break;
		}
    	}
    	return 0;
    }
	
}
