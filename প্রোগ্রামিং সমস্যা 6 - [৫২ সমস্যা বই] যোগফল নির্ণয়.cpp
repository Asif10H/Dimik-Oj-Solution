
#include<stdio.h>
int main()
{
    int T, i, LSD, MSD,  N;
    scanf("%d", &T);
    for(i = 1; i <= T; i++)
    {

        scanf("%d", &N);
        LSD = N % 10;
        MSD = N;
        while(N != 0)
        {
            MSD = N % 10;
            N = N / 10;
        }
        printf("Sum = %d\n", LSD + MSD);
    }
return 0;
}
