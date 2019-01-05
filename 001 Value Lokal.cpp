#include <stdio.h>
#include <conio.h>
void secara_nilai (float a, float b, float c, char)
{
    float *alamat_a;
    alamat_a=&a;
    a=7;
    printf("lokal a=%f, alamat a=%p\n%,a,alamat_a");
    printf("lokal b=%f\n",b);
    printf("lokal c=%c\n,c");

}
int main()
{
    float a=25,*alamat_a;
    char c='a';
    alamat_a=&a;
    printf("main a=%f, alamat a=%p\n",a,alamat_a);
    printf("main a/3=%f\n", (a/3));
    printf("main c = %c\n",c);
    getch();
}
