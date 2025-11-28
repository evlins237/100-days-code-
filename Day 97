Q147: Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp, readEmp;

  
    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

  
    FILE *fp = fopen("employee.bin", "wb");
    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

   
    fp = fopen("employee.bin", "rb");
    fread(&readEmp, sizeof(readEmp), 1, fp);
    fclose(fp);

    printf("\n--- Employee Data Read From File ---\n");
    printf("Name: %s\n", readEmp.name);
    printf("ID: %d\n", readEmp.id);
    printf("Salary: %.2f\n", readEmp.salary);

    return 0;
}
