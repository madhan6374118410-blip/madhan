#include <stdio.h>
int main (){
	int a;
	scanf("%d",&a);
	if(a%3==0||a%7==0)
	printf("%d it is divisible by 3 ",a);
	else if(a%7==0)
	printf("%d it is divisible by 7 ",a);
	else
	printf("%d it is not divisible ",a);
	return 0;
}