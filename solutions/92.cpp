#include<stdio.h>

int main()
{
 int n,a,b,c,d,e,f;//100Ԫ a�ţ�50Ԫb�ţ�20Ԫc�ţ�10Ԫd�ţ�5Ԫe�ţ�1Ԫf�� 
 scanf("%d",&n);
 a=n/100;
 b=(n-100*a)/50;
 c=(n-100*a-50*b)/20;
 d=(n-100*a-50*b-20*c)/10;
 e=(n-100*a-50*b-20*c-10*d)/5;
 f=n-100*a-50*b-20*c-10*d-5*e;
 printf("%d %d %d %d %d %d",a,b,c,d,e,f);
 return 0; 
}

