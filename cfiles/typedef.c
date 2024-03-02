#include <stdio.h>
#include <string.h>
typedef struct student
{
    int id, marks;
    char name[];
} std;
int main()
{
    std harry, ron, hermounie;
    harry.id = 23;
    ron.id = 24;
    hermounie.id = 25;
    harry.marks = 233;
    ron.marks = 333;
    hermounie.marks = 932;
    // harry.name ="potter";
    // harry.name = {"potter"};
    // ron.name = 'weasley';
    // hermounie.name = 'granger';

    return 0;
}