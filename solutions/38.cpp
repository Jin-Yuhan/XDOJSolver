#include <stdio.h>
int main()
{
 int n,a=0,b,c,sum=0;
 scanf("%d", &n);
 c=n;//c����ʼ��nֵ 
    // ��ת
    while(n!=0)
    {
        b=n%10;
        sum+=b;
        a=a*10 +b;
        n/=10;
    }
    // �ж�
    if(c==a)
        printf("%d",sum);
    else
        printf("no");
    return 0;
}
