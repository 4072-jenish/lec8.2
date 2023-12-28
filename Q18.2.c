/*Q.1 Write a Program to perform the merge operation of two 1D arrays & store it 
in another array. Keep in mind that both array sizes can be different.

Enter size of A Array:-3
Enter elements:-1
Enter elements:-2
Enter elements:-3
Entersize of  B Array:-4
Enter elements:-1
Enter elements:-2
Enter elements:-3
Enter elements:-4
1
2
3
1
2
3
4
*/
#include<stdio.h>

main(){
	
	int i,n,k;
	int a[n],b[k];
	
printf("Enter size of A Array:-");
scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter elements:-");
		scanf("%d",&a[i]);
	}	
printf("Entersize of  B Array:-");
scanf("%d",&k);
	for(i=0;i<k;i++){
		printf("Enter elements:-");
		scanf("%d",&b[i]);
	}
	printf("Array c is :-");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<k;i++){
		printf("%d ",b[i]);
	}
}
