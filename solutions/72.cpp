#include <stdio.h>
#include <string.h>
int main()
{
 char tmpstr[100]={0};//����һ���㹻����ַ����������������� 
 char maxline[100]={0};//�������浱ǰ��е����� 
 char endline[]="***end***";//�����б�־ 
 int maxlen=0;//������¼��ǰ���ȵ���߼�¼ 
 while(1)
 {
  gets(tmpstr);//����һ���û�����        ps����gets����һ���ı� 
  if(!strcmp(tmpstr,endline)) break;//����ǽ�����������      ps����strcmp�Ƚ� 
  if(strlen(tmpstr)>maxlen)// ps����strcpy�������� 
  {
   maxlen=strlen(tmpstr);//������߼�¼ 
   strcpy(maxline,tmpstr);//���浱ǰ��е����� 
  }
 }
 printf("%d\n",maxlen);
 printf("%s\n",maxline);//ps����printf/puts������ 
 return 0;
} 
