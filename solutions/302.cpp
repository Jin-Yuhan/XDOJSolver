 #include<stdio.h>
int main()
{
 int p,i,j,iSum=0,iNum=1,m;
 /*i��������j�ж�ѭ������
 iNum��2����Ѿ��ҵ����������� ��
 iSumĿ��������,
 m���ڱ���������*/ 
 scanf("%d",&p);
 /*Ѱ������*/ 
 for(i=3; ;i++)
 {
  m=0;
  /*�ж�һ�����Ƿ�Ϊ����*/ 
  for(j=2;j<i;j++)
  {
   /*�ж�һ�����Ƿ���Ա�ĳ��С���Լ���������*/ 
   if(i%j!=0)
   {
    m++;
   }
   else
   {
    continue;
   }
  }
  /*ͨ��m�����ʶ�𲢲�׽Ŀ������*/ 
  if(m==i-2)
  {
   iNum++;
   if(iNum<=p+10&&iNum>=p)
   {
    iSum+=i;
   }
  }
  /*��׽�����ֹѭ��*/ 
  else if(iNum>p+10)
  {
   break;
  }
 }
 /*s������*/ 
 printf("%d",iSum);
 return 0;
}
