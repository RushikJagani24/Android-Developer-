#include<Stdio.h>
main(){
	int a[5];
	int i,temp;
	for(i=0;i<5;i++){
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5/2;i++){
		temp=a[i];
		a[i]=a[5-i-1];
		a[5-i-1]=temp;
	}
		for(i=0;i<5;i++){
			printf("%d",a[i]);
}
}
