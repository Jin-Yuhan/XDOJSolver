#include<stdio.h>
int main()
{
 int n,i,j,t,k=0;
 int a[100];//ԭ���� 
 
 scanf("%d",&n);
 
 for(i=0;i<n;i++)//�������� 
 {
  scanf("%d",&a[i]);
 }
/* for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-1-i;j++)
  {
   if(a[j]%2==0)//��ż��ǰ�� 
   {
    /*t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    k=j;//���һ��ż����λ�� 
   }
  }
 }*/
 for(i=0;i<n;i++)
 {
  if(a[i]%2==0)//��ż��ǰ�� 
   {
    t = a[k];
    a[k] = a[i];
    a[i] = t;
    k++;
   }
 }
 
 printf("%d\n", k); 
 
 for(i=0;i<n;i++){
  printf("%d ", a[i]);  
 }
 
 k=k-1;
 for(i=0;i<k;i++)
 {
  for(j=0;j<k-i;j++)
  {
   if(a[j]<a[j+1])//����ż�� 
   {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
  }
 }
 
 for(i=(k+1);i<n-1;i++)
 {
  for(j=(k+1);j<n-1-i;j++)
  {
   if(a[j]<a[j+1])//�������� 
   {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
  }
 }
 
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
 
 return 0;
}
