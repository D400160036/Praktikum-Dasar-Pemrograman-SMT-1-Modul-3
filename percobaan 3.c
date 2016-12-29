#include<stdio.h>
int main()
{
    //definisi  variabel lokal
    int a=10;
    printf("eksekusi perulangan DO-WHILE\n");
    do
    {
        printf("nilai dari a : %d\n",a);
        a++;
    }while ( a < 15 );
    return 0;
}
