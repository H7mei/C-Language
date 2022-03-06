# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct student{
    char name [50];
    char grade [5];
    int age;
    double gpa;

};
/* sebagai kontainer untuk meyimpan data */

int main()
{
    struct student student1;
    {
        student1.age = 18;
        student1.gpa = 7.5;
        strcpy( student1.name , "John Connor");
        strcpy( student1.grade,  "A");
    };
        struct student student2;
    {
        student2.age = 19;
        student2.gpa = 9.5;
        strcpy( student2.name , "Korman Jum'at");
        strcpy( student2.grade,  "A");
    };
    printf("\n");
    printf("Nama Siswa : %s\n", student1.name);
    printf("Umur       : %d tahun\n", student1.age);
    printf("nilai      : %s\n", student1.grade);
    printf("gpa        : %f\n", student1.gpa);
    printf("\n");
    printf("Nama Siswa : %s\n", student2.name);
    printf("Umur       : %d tahun\n", student2.age);
    printf("nilai      : %s\n", student2.grade);
    printf("gpa        : %f\n", student2.gpa);





    return 0;
}


/*
data structur pada C
tipe data
*/
