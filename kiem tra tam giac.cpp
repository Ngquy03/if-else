#include<stdio.h>
int main(){
	int a,b,c;
	printf("do dai canh thu nhat:");
	scanf("%d",&a);
	printf("do dai canh thu hai:");
	scanf("%d",&b);
	printf("do dai canh thu ba:");
	scanf("%d",&c);
	if(a==b&&a==c){
		printf("la tam giac deu");
	}else if(a==b&&a!=c&&b!=c){
		printf("la tam giac can");
	}else {
		printf("la tam giac thuong");
	}
	return 0;
}
