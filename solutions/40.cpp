#include<stdio.h>
int main()
{
 int n,i,t,e=0,a[1000],j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
    for(j=0;j<n-1;j++)//ð������  ����a[i]��С�������� 
 {
  for(i=0;i<n-1-j;i++)
  {
   if(a[i]>a[i+1])
   {
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
   }
    }
 }
 for(i=0,e=0;i<n-2;i++)
 {
  if(a[i+1]*2==a[i+2]+a[i])//�м�һ��Ķ�����ǰ������ĺ� 
   e++; 
 }
 if(e==n-2)
  printf("%d",a[1]-a[0]);
 if(e!=n-2)
  printf("no");
 return 0;
}

