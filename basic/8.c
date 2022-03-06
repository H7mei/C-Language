# include <stdio.h>
# include <stdlib.h>

int main ()
{
    char joma[20];
    printf("my name is : ");
    scanf("%s", joma);
    printf("thanks for coming %s\n", joma);

    return 0;
}

/*
ini tentang menambahkan user input
pada C dengan scanf("%s") <=== ini hanya mengambil kata awal pada kaliimat

fgets(name) ini yang lain cara lain
fgets(<sabi>, <banyaknya>, stdin) <==== ini semuanya
int main(){
    char a[100];
    fgets(a , 100 , stdin);
    printf("%s", a); 
    return 0;
}
jangan lupa pake &
*/