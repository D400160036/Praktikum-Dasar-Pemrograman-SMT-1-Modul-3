#include<stdio.h>
int main ()
{
    int c=0;
    int hasil=1;
    int bil=10;
    int i=1;
    printf("10! Faktorial \n");
    while(i<=bil)
    {
        c=c+1;
        hasil=i*hasil;
        printf("faktorial dari %d adalah = %d\n",c,hasil);
        i++;
    }
    return 0;
}
