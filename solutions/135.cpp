#include <stdio.h>
#include <string.h>
int main(){
 int a[100]={0}; 
 int i=0,j,temp,cnt=0;  
  char ch;
 ch=getchar(); //һ��һ��������ʱ~~�Ƚϱ�~~ ������gets��ֻ�������
 while((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
  ch = getchar(); 
 }
    while(ch!= EOF && ch!='\r'&&ch!='\n'){ //�������ֶ�������windows��ctrl+z�����з�ʱ
     if(ch>='0'&&ch<='9'){
      a[i]=a[i]*10+ch-'0';//����Ҫ����Ϊһ��һ�����Ļ�����������Ҫƴ�ӳ�����
    }
     ch = getchar();
  while((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
   ch = getchar();//ͬ��
   if(ch>='0'&&ch<='9'){
    i++;
    cnt++;
   }
  }
 }
 for(i=0;i<cnt;i++){
  for(j=0;j<cnt;j++){
   if(a[j]<a[j+1]){ 
    temp = a[j];      
    a[j] = a[j+1];      
    a[j+1] = temp;
   } 
  }
 }//�򵥵�ð������
 for(i=0;i<=cnt;i++){
  printf("%d ", a[i]);
 }
 return 0;
}
