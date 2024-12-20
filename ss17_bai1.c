#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int age;
	char phone[50];
};
int main(){
	struct student anh;
	strcpy(anh.name, "Anh yeu em");
	anh.age=18;
	strcpy(anh.phone, "123456789");
	printf("Thong tin cua ban:\n");
	printf("Ten cua ban %s\n",anh.name);
	printf("tuoi cua ban %d\n",anh.age);
	printf("So dien thoai cua ban %s\n",anh.phone);
	return 0;
}

