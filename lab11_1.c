//print name and address with linked list:
#include<stdio.h>
#include<string.h>
struct address
{
    int road;
    int sector;
    char block;
    char city[30];
    char area[30];
};
struct student
{
    char name[50];
    struct address add;
};
int main(){
    struct student std;
    std.add.road = 9;
    std.add.sector = 11;
    std.add.block = 'T';
    strcpy(std.add.area, "Uttara");
    strcpy(std.add.city, "Dhaka");
    strcpy(std.name, "Osama");
    printf("Name of the student %s.\n", std.name);
    printf("Address of %s:\nRoad number %d, Sector %d, Block %c, %s, %s.", std.name, std.add.road, std.add.sector, std.add.block, std.add.area, std.add.city);

}
