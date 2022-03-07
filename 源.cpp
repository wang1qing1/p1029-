#include<stdio.h>
#include<math.h>
int wq(int P, int Q)
{
    int t,r;
    if (P > Q)
    {
        t = P;
        P = Q;
        Q = t;
    }
    r = Q % P;
    while (r != 0)
    {
        Q = P;
        P = r;
        r = Q % P;
    }
    return P;
}
int main()
{
    int  P,sum=0;
    int a, b, count = 0;
   scanf_s("%d %d", &a, &b);
   sum = a * b;
    for (P = a; P <= (int)sqrt(sum); P++)
    {
        if (sum % P == 0 && wq(sum / P, P) == a)
            count++;
    }
    printf("%d", count*2);
	return 0;
}