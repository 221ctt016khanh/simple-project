#include<stdbool.h>
#include<stdio.h>
#include"cal.h"
void input(int *a, int *b);
int main(){
	int a;
	int b;
	int c;
	
	float result;
	do{
	printf("Chon phep tinh:\n");
	printf("1.Cong\n2.Tru\n3.Nhan\n4.Chia\n5.Thoat\n Lua chon cua ban:");
	scanf("%d",&c);
	if(c!=5){
	input(&a,&b);
		switch(c){
			case 1:
				result = (float) add(a,b);
				break;
//			case 2:
//				result = (float) sub(a,b);
//				break;
			case 3:
				result = (float) mul(a,b);
				break;

//			case 4:
//				result = divine(a,b);
//				break;
		
			default:
			printf("Loi!\n");

		}
	}
	else
		return 0;
	printf("Ket qua: %0.2f\n",result);
	
	

	
	
	}while(true);
}
void input(int *a, int *b){	
	printf("Nhap so thu nhat: ");
	scanf("%d",a);
	printf("\n");
	printf("Nhap so thu hai: ");
	scanf("%d",b);
}
