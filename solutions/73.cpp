#include<stdio.h>
#include<string.h>
int main()
{
 char str[50],zimu;
 int i,temp,shuzi=0;//���ִ�����;
 gets(str);
 for (i=0;i<strlen(str);i++)//����ÿһ���ַ� 
 {
  if ('0'<=str[i] && str[i]<='9')//��str[i]������ 
  {
   zimu=str[i-1];//str[i]��ǰһλ����ĸ 
   for (;'0'<= str[i] && str[i]<='9';i++)//�������ֵ,ͬʱ�ƶ�������ַ�����ָ�� 
   {
    shuzi=shuzi*10 +str[i]-48;
   }
   for(temp=0;temp<shuzi-1;temp++)//��� temp - 1 �� 
   {
    printf("%c",zimu);
   }
   shuzi=0;//���ִ��������� 
   i--;//ָ����� 
  }
  else//��str[i]����ĸ 
  {
   printf("%c", str[i]);
  }
 }
 
 return 0;
} 
