#include<stdio.h>

struct Employee
{
    int id;
    char name[50];
    float weight;
    float height;
};


int main(int argc, char const *argv[])
{
    struct Employee emp;
    
    printf("Enter the Id: ");
    scanf("%d", &emp.id);
    printf("Enter the Name: ");
    scanf("%s", &emp.name);
    printf("Enter the Weight: ");
    scanf("%f", &emp.weight);
    printf("Enter the height: ");
    scanf("%f", &emp.height);
    
    printf("\nID: %d\nName: %s\nWeight: %f\nHeight: %f", emp.id, emp.name, emp.weight, emp.height);

    return 0;
}
