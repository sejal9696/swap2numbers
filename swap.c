#include<stdio.h>
int main()
 {
 	int x,y;//x=10 y=20
 	printf("Enter the value of x:");
 	scanf("%d",&x);
 	printf("Enter the value of y:");
 	scanf("%d",&y);
 	printf("Before swap x=%d y=%d",x,y);
 	x=x+y;//x=30(10+20)
 	y=x-y;//y=10(30-20)
 	x=x-y;//x=20(30-10)
 	printf("\n After swap x=%d y=%d",x,y);
 	return 0;
}
