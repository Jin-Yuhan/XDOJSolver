#include <stdio.h>
#include <string.h>
int main()
{
 char s[100][100],str[100], c[100];
 int i, j, n, k, l1, l2, isPrime;
 gets(str);//           ��Ҫ���ҵ��ַ�����   str 
 scanf("%d %d",&isPrime,&n);
 for(i=0;i<n+1;i++)//�����ַ����� 
  gets(s[i]);
 for(i=0;i<n+1;i++)
 {
  if(0==isPrime)//�Դ�Сд������ 
  {
     strlwr(s[i]);//   strlwr���������ַ���ȫ��ת��ΪСд 
     strlwr(str);
  }
  l1=strlen(s[i]);
  l2=strlen(str);
  for(j=0;j<=l1-l2;j++)
  {
   for(k=0;k<l2;k++)
    c[k]=s[i][j+k];
   if(0==strcmp(c,str))//�Ƚϵó����ַ�����ͬʱ 
   {
    printf("%s\n",s[i]);
    break; 
   }
  }
 }
 return 0;
}
