#include<stdio.h>
main(){
	int a[2][2];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("\t %d",a[i][j]);
			}
			printf("\n");
		}
}