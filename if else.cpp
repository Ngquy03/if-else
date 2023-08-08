#include<stdio.h>
int main(){
	int a;
	printf("3");
	scanf("%d",&a);
	if (a>0){
		printf("%d lon hon khong\n",a);
	} else if(a<0){
		printf("%d nho hon khong\n",a);
		
	}else{
		printf("%d==\n",a);
	}
	return 0;
}
