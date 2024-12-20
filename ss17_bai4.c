#include<stdio.h>
#include<string.h>
struct SinhVien{
	long long id;
	char name[50];
	int age;
	char phone[30];
};
typedef struct SinhVien Sv;
void nhap(Sv array[],int length){
	for(int i=0;i<length;i++){
		printf("Moi ban nhap ten cua minh: ");
		fgets(array[i].name,sizeof(array[i].name),stdin);
		array[i].name[strcspn(array[i].name, "\n")] = '\0';  
		fflush(stdin);
		printf("Moi ban nhap tuoi cua minh: ");
		scanf("%d",&array[i].age);
		fflush(stdin);
		printf("Moi ban nhap so dien thoi cua minh: ");
		fgets(array[i].phone,sizeof(array[i].phone),stdin);
	}
}
void xuat(Sv array[], int length){
	for( int i=0;i<length;i++){
		printf("id cua ban %lld\n",(array+i));
		printf("Ten cua ban %s\n",array[i].name);
		printf("Tuoi cua ban %d\n",array[i].age);
		printf("So dien thoai cua ban: %s\n",array[i].phone);
	}
}
int main(){
	Sv array[50];
	int n;
	printf("Moi ban nhap vao so luong sinh vien: ");
	scanf("%d",&n);
	fflush(stdin);
	array[n];
	nhap(array,n);
	printf("Thong tin danh sach sinh vien\n");
	xuat(array,n);


	return 0;
}

