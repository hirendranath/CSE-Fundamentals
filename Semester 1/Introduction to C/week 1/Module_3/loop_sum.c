#include<stdio.h>
int main()
{
    long long int sum=0;
    int i;
    int n;  //for using input
    scanf("%d", &n); //for using input
    for(i=1;i<=n;i++)
    {
        sum+=i;
        // printf("%d", sum);
    }
    
    printf("%lld\n", sum);
    return 0;

}