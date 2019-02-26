#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int sum=0;
    long long cc;
    do
    {
        cc=get_long_long("Numero de la carte de credit");
    }
    while (cc<0);
    int count=0;
    long long number=cc;
    while(number>0)
    {
        number= number/10;
        count++;

    }
    if(count!=13 && count!=15 && count!=16)
    {
        printf("Numero invalide\n");
    }
    int digit[count];
    for(int i=0; i<count; i++)
    {
        digit[i]=cc%10;
        cc=cc/10;
    }
    int odigit[count];
    for(int i=0; i<count; i++)
    {
        odigit[i]=digit[i];
    }
    for (int i=1; i<count; i+=2)
    {
        digit[i]=digit[i]*2;
    }
    for (int i=0; i<count; i++)
    {
        sum=sum+digit[i]%10+digit[i]/10%10;
    }
    if(sum%10==0)
    {
        if(count==13 && digit[12]==4 && sum%10==0)
    {
    printf("VISA VALIDE\n");
    }
    if(count==16 && odigit[15]==4 && sum%10==0)
    {
    printf("VISA VALIDE\n");
    }
    if(count==15 && odigit[14]==3 && sum%10==0 && (odigit[13]==4 || odigit[13]==7))
    {
        printf("AMEX VALIDE\n");
    }
    if(count==16 && odigit[15]==5 && (odigit[14]==1 || odigit[14]==2 || odigit[14]==3 || odigit[14]==4 || odigit[14]==5) && sum%10==0)
    {
    printf("MASTERCARD VALIDE\n");
    }
}
printf("INVALIDE\n");
}