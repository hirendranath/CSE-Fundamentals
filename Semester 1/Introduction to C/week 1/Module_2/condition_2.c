#include<stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if( taka >=100)
    {
        printf("A+");
    } else if(taka>=80 )
    {
        printf("A");
    }else if (taka>=70)
    {
        printf("A-");
    }
    else{
        printf("Toi fill");
    }

    return 0;
}