#include<stdio.h>
int main()
{
 int m,n,a[100][100],i,j,flag=0,max[100],min[100];
 scanf("%d %d",&m,&n);         //�����ģΪ    >>>> m �� n �� 
 for(i=0;i<m;i++)              //�������
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<m;i++) //���ѭ������ÿһ�� 
 {
  min[i]=a[i][0];//��i�е���СֵΪmin[i] 
  for(j=1;j<n;j++)
  {
   if(a[i][j]<min[i])
    min[i]=a[i][j];
  } 
 }
 for(j=0;j<n;j++) //�ڲ�ѭ����ʾÿһ�е����ֵ 
 {
  max[j]=a[0][j];
  for(i=0;i<m;i++)
  {
   if(a[i][j]>max[j])
    max[j]=a[i][j];
  }
 }
 for(i=0;i<m;i++) 
 {
  for(j=0;j<n;j++)
  {
   if(a[i][j]==max[j]&&a[i][j]==min[i])
   {
    printf("%d %d %d",i,j,a[i][j]);
    flag=1;
   }
  }
 }
 if(flag==0) printf("no");
 return 0;
}
