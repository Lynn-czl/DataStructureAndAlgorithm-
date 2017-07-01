#include<stdio.h>
int main()
{
    int t = 1;
    t = t << 3 & 0x3FFFFFFF | 'A' & 7;
    printf("%d", t);
}
