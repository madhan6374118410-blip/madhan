#include <stdio.h>
int main (){
	int a;
	scanf("%d",&a);
	if(a%2==0 && a%5==0 && a%8!=0)
	printf("%d it is divisible",a);
	else
	printf("%d it is not divisible");
	return 0;
}