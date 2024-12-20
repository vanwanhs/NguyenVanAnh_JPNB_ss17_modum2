#include<stdio.h>
#include<string.h>
struct sinhvien{
	int id;
	char name[50];
	int age;
	char phone[20];
};
typedef struct sinhvien Sv;
void nhap( Sv arrSv[],int *n){
	for(int i=0;i<*n;i++){
		printf("Sinh vien %d \n",i);
		printf("Ten cua sinh vien \n");
		fgets(arrSv[i].name,sizeof(arrSv[i].name),stdin);
		printf("Tuoi cua sinh vien \n");
		scanf("%d",&arrSv[i].age);
		fflush(stdin);
		printf("So dien thoai cua sin vien ");
		fflush(stdin);
		fgets(arrSv[i].phone,sizeof(arrSv[i].phone),stdin);
	}
}
void xuat( Sv arrSv[], int *n){
	for(int i=0;i<*n;i++){
		printf("Sinh vien thu %d co id %s\n",i);
		printf("Sinh vien thu %d co ten la %s\n",i,arrSv[i].name);
		printf("SINH vien thu %d: %d tuoi\n",i,arrSv[i].age);
		printf("SINH vien thu %d sdt: %s\n ",i,arrSv[i].phone);
	}
}
int main(){
	Sv arrSv[50];
	int length=5;
	nhap(arrSv,&length);
	printf("Danh sach sinh vien\n");
	xuat(arrSv,&length);
	

	return 0;
}

