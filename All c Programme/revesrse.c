#include<stdio.h>
main(){
	int i,rev=0,rem,num;
	printf("enter number:");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("Reverse number:%d",rev);
}