#include<stdio.h>

int main()
{
 int m,i,j,k,t;
 int a[20][20];
 int sum[42]={0};
 
 scanf("%d",&m);//m��m�� 
 for(i=0;i<m;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",&a[i][j]);//���� 
  }
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<m;j++)
  {
   sum[i]+=a[i][j];//����ÿһ�еĺ� 
  }
 }
 for(j=0;j<m;j++)
 {
  for(i=0;i<m;i++)
  {
   sum[j+m]+=a[i][j];//����ÿһ�еĺ� 
  }
  
 }
 for(i=0;i<m;i++)
 {
  sum[2*m]+=a[i][i];//�������Խ��ߺ� 
 }
 for(i=0,j=m-1;i<m;i++,j--)
 {
  sum[2*m+1]+=a[i][j];//���㸨�Խ��ߺ� 
 } 
 for(i=0;i<2*m+1;i++)//һ��ѭ�������� 
 {
  for(j=0;j<2*m+1-i;j++)//ÿһ���н����Ĵ��� 
  {
   if(sum[j]<sum[j+1])//�Ƚ� 
   {
    t=sum[j];//���� 
    sum[j]=sum[j+1];
    sum[j+1]=t;
   }
  }
 }
 for(k=0;k<(2*m+2);k++) 
 {
  printf("%d ",sum[k]);//��ӡ�� 
 }

 return 0;
}
