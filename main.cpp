//¾Å¶ÈÊéµÚÁùÕÂ ËÑË÷ µİ¹é ººÅµËş±äĞÎ Àı6.4
#include <stdio.h>

int hannota (int n)
{
    if(n == 1) return 2;
    else return 3 * hannota(n - 1) + 2;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int res = hannota(n);
        printf("%d\n",res);
    }
    return 0;
}
