#include<stdio.h>
int main(){
	int a;
	printf("nhap so goc:");
	scanf("%d",&a);
	if(a<90){
		printf("la goc nhon",a);
	}else if(a==90){
		printf("la goc vuong",a);
	}else if(a>90){
		printf("la goc tu",a);
	}
	return 0;
}

