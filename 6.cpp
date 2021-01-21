#include <iostream>
using namespace std;
int cal(int num){
  int temp = 0;
  int res = num;
  int i=1;
  while(res>=0) {
    res -= (i*i);
    i++;
  }
  return i-2;
}
int main()
{
  int num;
  cin>>num;
  for(int i=0;i<num;i++)
  {
  	int k;
    cin>>k;
    cout<<cal(k)<<endl;
  }
  return 0;
}
