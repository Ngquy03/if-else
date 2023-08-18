#include<stdio.h>
int main(){
	int a;
	printf("nhap mot so:");
	scanf("%d",&a);
	if (a>0){
		printf("%d lon hon 0\n",a);
	} else if(a<0){
		printf("%d nho hon 0\n",a);
		
	}else{
		printf("%d bang 0\n",a);
	}
	return 0;
}
