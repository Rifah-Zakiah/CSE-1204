#include<stdio.h>
#include<string.h>

struct address
{
    char city[20];
    char area[20];
    int road;
    int house;
    char block;
};
struct employee
{
    struct address addr;
    char name[50];
    int id;
    int age;
    float salary;
};


int main(){
    struct employee emp1;
    emp1.addr.road = 2;
    emp1.addr.house = 88;
    emp1.addr.block = 'K';
    strcpy(emp1.addr.area, "Manhattan");
    strcpy(emp1.addr.city, "New York");
    strcpy(emp1.name, "Irina");
    emp1.age = 44;
    emp1.id = 553;
    emp1.salary = 999.99;
    printf("Employee info:\n");
    printf("Name %s.\nId %d.\nAge %d.\nSalary %.2f\n", emp1.name, emp1.id, emp1.age, emp1.salary);
    printf("Adress:\nRoad no. %d\thouse no. %d\tblock %c\tArea %s\tCity %s\t", emp1.addr.road, emp1.addr.house, emp1.addr.block, emp1.addr.area, emp1.addr.city);

    return 0;
}