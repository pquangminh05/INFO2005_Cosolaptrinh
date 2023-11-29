#include <stdio.h>
#include <string.h>
struct Student{
	char id[20];
	char name[50];
	int age;
	float gpa;
};
int main(){
	struct Student listOfStudents[3];
	int i;
	for(i=0;i<3;i++){
		printf("Nhap thong tin sinh vien thu %d", i+1);
		printf("\nMa sinh vien:");
		scanf("%d", &listOfStudents[i].id);
		printf("Ho va ten: ");
		getchar();
		fgets(listOfStudents[i].name, 50, stdin);
		printf("gpa: ");
		scanf("%f", &listOfStudents[i].gpa);
	}
	for(i=0;i<2;i++);
	printf("\nThong tin sinh vien %d\n",i+1);
	printf("Ma sinh vien: %d", listOfStudents[i].id);
	
	return 0;
}
    
