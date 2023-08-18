#include<stdio.h>
int main(){
	int a,b;
	printf("so thu 1 la:");
	scanf("%d",&a);
	printf("so thu 2 la:");
	scanf("%d",&b);
	if(a>b){
		printf("a la so lon hon",a);
	}else if(a<b){
		printf("b la so lon hon",b);
	}
	return 0;
}
