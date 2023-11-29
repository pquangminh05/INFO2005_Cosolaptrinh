#include <stdio.h>
#include <string.h>
struct Staff{
	char id[10];
	char name[30];
	float position;
	float salary;
};
int main(){
	struct Staff listOfStaffs[3];
	int i;
	for(i=0;i<3;i++){
		printf("Nhap thong tin nhan vien %d", i+1);
		printf("\nMa nhan vien:");
		scanf("%d", &listOfStaffs[i].id);
		printf("Ho va ten:");
		getchar();
		fgets(listOfStaffs[i].name, 30, stdin);
		printf("position:");
		scanf("%f", &listOfStaffs[i].position);
		printf("salary:");
		scanf("%f", &listOfStaffs[i].salary);
	}
	for(i=0;i<2;i++);
	int choice=0;
	do{
		printf("CHUONG TRINH QUAN LY NHAN SU\n");
		printf("1. Khoi tao danh sach\n");
		printf("2. Them 1 nhan su\n");
		printf("3. Sua thong tin nhan su\n");
		printf("4. Sap xep danh sach\n");
		printf("5. Tim kiem thong tin nhan su\n");
		printf("6. Xoa 1 nhan su\n");
		printf("7. Hien thi nhan su\n");
		printf("0. Thoat chuong trinh\n");
		printf("Lua chon cua ban la:");
		scanf("%d", &choice);
	}while(choice !=0);
	return 0;
}
