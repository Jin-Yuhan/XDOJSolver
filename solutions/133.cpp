#include <bits/stdc++.h>
using namespace std;

struct dxs{//����ʽ...��ƴ��
 int ratio = 0;//ϵ�� 
 int index = 0;//ָ�� 
 
 bool operator < (const dxs& s){//���� < �����
  return index < s.index;
 }
};

int printDXS(dxs in, int pos){//���һ��; ����0�������ϵ��Ϊ0; ����1���������һ�� 
 if(in.ratio == 0)
  return 0;
 else{ 
  if(in.ratio > 0 && pos != 0)
   cout << "+"; 
  if(in.index == 0){
   cout << in.ratio;
   return 1; 
  }
  else if(in.index == 1){
   if(in.ratio == 1){
    cout << "x";
    return 1;
   }
   if(in.ratio == -1){
    cout << "-x";
    return 1;
   }
   cout << in.ratio << "x";
   return 1;
  }
  else{
   if(in.ratio == 1){
    cout << "x^" << in.index;
    return 1;
   }
   if(in.ratio == -1){
    cout << "-x^" << in.index;
    return 1;
   }
   cout << in.ratio << "x^" << in.index;
   return 1; 
  }
 } 
}

void merge(dxs& a, dxs& b, int op){//�ϲ�ͬ����, ���������޸�ʵ�� 
 if(op == 0)
  a.ratio = a.ratio + b.ratio;
 else 
  a.ratio = a.ratio - b.ratio;
}

int main(){
 int n, m, t;
 cin >> n >> m >> t;
 vector<dxs> a, b;//��һ��, �ڶ��� 
 
 for(int i = 0;i < n;i++){
  dxs t;
  cin >> t.ratio >> t.index;
  a.push_back(t);
 }
 
 for(int i = 0;i < m;i++){
  dxs t;
  cin >> t.ratio >> t.index;
  b.push_back(t);
 }
 
 for(int y = 0;y < m;y++){
  for(int x = 0;x < n;x++){
   if(b[y].index == a[x].index){//ָ�����
    merge(a[x], b[y], t);
    goto END; 
   }
  }
  //��Ҫ 
  if(t == 1)
   b[y].ratio = -b[y].ratio;//ϵ��ȡ��
  a.push_back(b[y]);
  END:; 
 }
 
 int outCnt = 0;//��¼����˶�����, �Ͼ� ����ǰ�治����+�� 
 sort(a.begin(), a.end());
 for(unsigned int i = 0;i < a.size();i++){
  if(printDXS(a[i], outCnt))
   outCnt++;
 }
 return 0; 
} 
