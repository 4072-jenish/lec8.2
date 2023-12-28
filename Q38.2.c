#include<stdio.h>

main(){
	
	int i,n,k;
	int a[10000],b[10000];
	
printf("Enter number:-");
scanf("%d",&k);
 for (i=0; i<k; i++){
 	printf("Enter elements");
 	scanf("%d",&a[i]);
}
 for (i=0; i<k; i++){
 printf("%d\n",a[i]*a[i]);
}
}
 

