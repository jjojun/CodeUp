#include<stdio.h>
int main(){
	double a, b;
	scanf("%ld %ld", &a, &b);
	int c = (a - 100) * 0.9;
	int d = (b - c) * 100 / c;
	if(d<=10){
		printf("����");
	}
	else if((10<d) && (d <= 20)){
		printf("��ü��");
	}
	else{
		printf("��");
	}
} 
