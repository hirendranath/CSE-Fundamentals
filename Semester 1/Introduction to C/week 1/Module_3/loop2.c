// আমাদের যদি কখনো ১ থেকে ১০০০ পর্যন্ত প্রিন্ট করতে হয়।
// তাহলে আমরা লুপ দিয়ে এভাবে লিখতে পারিঃ

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i=i+1)
    {
        printf("%d\n",i);
    }
    return 0;

}