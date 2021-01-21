#include <iostream>
using namespace std;

//:pow(A,B)%C = pow(A%C, B)%C
int cal(int a,int b,int c){
  a = a%c;
  cout<<"a:"<<a<<endl;
  int temp = 1;
  for(int i=0;i<b;i++)
  {
    temp = temp*a;
  }
  
  int res = temp/c;
  int res2 = temp - c*res;
  return res2;
}
int main() {
  int num;
  cin>>num;
  for(int i=0;i<num;i++)
  {
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;
    cout<<cal(a,b,c)<<endl;
  }
}
