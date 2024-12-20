#include<stdio.h>
#include<string.h>
struct SinhVien{
	char name[50];
	int age;
	char phone[50];
};
typedef struct SinhVien sinhvien;
sinhvien nhap(){
	sinhvien num1;
	printf("Ho va ten cua ban \n");fgets(num1.name,sizeof(num1.name),stdin);
	printf("Tuoi cua ban \n");scanf("%d",&num1.age);
	fflush(stdin);
	printf("So dien thoai cua ban \n");fgets(num1.phone,sizeof(num1.phone),stdin);
	return num1;
}
void xuat(sinhvien num1){
	printf("Ho va ten cua ban %s\n",num1.name);
	printf("Tuoi cua ban %d\n",num1.age);
	printf("So dien thoai cua ban %s\n",num1.phone);
}
int main(){
	sinhvien x= nhap();
	xuat(x);
	return 0;
}

