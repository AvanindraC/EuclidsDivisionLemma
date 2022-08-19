#include<stdio.h>
#include "inpsafe.h"
int main(void){
	printf("Enter the dividend: ");
	int a = inpSafe();
	printf("Enter the divisor: ");
	int b = inpSafe();
	while(a%b!=0){
		int temp=a;
		a=b;
		b=temp%a;
		
	}
	printf("The hcf is %d", b);
	return 0;
}
