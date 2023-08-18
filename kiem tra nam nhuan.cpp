#include<stdio.h>
 int main(){
 	int a;
 	printf("nam :");
 	scanf("%d",&a);
 	if(a%4==0&&a%100!=0){
 		printf("nam nhuan",a);
	 }else {
	 	printf("nam thuong",a);
	 }
	 return 0;
 }
