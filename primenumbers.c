#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,b=1,j=0;
    printf("How many prime numbers do you want first?");
    scanf("%d",&i);

    for(int a=1;a<=i;a++)
    {
        j=0;
        for(b=2;b<=a/2;b++)

        {
            if(a%b==0)
            {
                j=1;

            }
        }
        if(j==0)
        {
            if(a==1)
                continue;
            else
                printf("%d ",a);
        }
    }
}
