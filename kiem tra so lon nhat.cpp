#include<stdio.h>
int main(){
	int a,b,c;
	printf("so thu nhat:");
	scanf("%d",&a);
	printf("so thu hai:");
	scanf("%d",&b);
	printf("so thu ba:");
	scanf("%d",&c);
	if(a>b>c){
		printf("%d la so lon nhat",a);
	}else if(b>a>c){
		printf("%d la so lon nhat",b);
	}else {
		printf("%d la so lon nhat",c);
	}
	return 0;
}
