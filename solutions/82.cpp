#include <stdio.h>
#include <string.h>
int main()
{
 char code[100]={0};
 gets(code);
 int grades=1,a=0,b=0,c=0,d=0,temp=0,i;
 if(0==strlen(code))
  grades=0;
 else
 {
  if(strlen(code)>8)
   grades++;//������λ+1�� 
  for(i=0;;i++)
  {
   if(code[i]=='\0')
    break;
   else if(code[i]>='a' && code[i]<='z')
    a=1;//a����Сд��ĸ 
   else if(code[i]>='0' && code[i]<='9')
    b=1;//b�������� 
   else if(code[i]>='A' && code[i]<='Z')
    c=1;//c�����д��ĸ
   else
    d=1; //d�������ĸ���ֵ��ַ� 
  }
 }
 temp=a+b+c+d;//tempΪ����������ַ������� 
 if(temp!=0) 
  temp--;//��һ���һ�֣��ӵķ�ʼ�ձ���������һ 
 grades+=temp;
 printf("%d",grades);
 return 0;
}
