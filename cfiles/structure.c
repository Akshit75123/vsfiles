#include <stdio.h>
struct student
{
    /* data */
    int id;
    char name[53];
    float marks;
};
// struct student s1, s2, s3;

int main()
{
    struct student akshit, ravi, shubham;
    akshit.id = 1;
    ravi.id = 2;
    // akshit.marks;
    shubham.id = 3;
    ravi.marks = 466;
    return 0;
}