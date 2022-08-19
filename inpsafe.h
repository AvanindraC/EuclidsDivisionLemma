#include<stdio.h>
int inpSafe(void){
	int inp;
	scanf("%d", &inp);
	if(getchar() !="\n"){
	return inp;}
}
