#include <iostream> //注意头文件的使用方法
using namespace std;

int getMax(int a,int b){
    return a>b?a:b;
}
int getMax(int* array,int count){//count表示数组长度
    int max=array[0];
    for(int i=0;i<count;i++)
        if(max<array[i])
            max=array[i]; 
    return max;
} 
int getSum(int* array,int count){
	int sum = 0;
	for(int i=0;i<count;i++)
        sum += array[i];
    return sum;
}

bool isPossible(int* arr,int count,int painters,int mid) {
	int temp = 0;
	for(int i=0;i<count;i++) {
		if(arr[i]>mid) return false;
	    if((temp+arr[i])> mid) {
			temp = arr[i] ;
			painters -= 1;
			if(painters == 0) {
				return false;
			}
		}
		else {
			temp += arr[i];
		}
	} 
	return true;
}

int search(int* arr,int count,int min,int max,int painters) {
//	cout<<"a"<<endl; 
	if(min == max) {
		return min;
	}
	int left = min;
	int right = max;
	int result = max;
	
	while(left<=right) {
		int mid = (left+right)/2;
//		cout<<"mid"<<mid<<endl;
		if(isPossible(arr,count,painters,mid)){
//			cout<<"k"<<endl;
			result = mid;
			right = mid-1;
		
		}
		else{
//			cout<<"p"<<endl;
			left = mid+1;
		}
	}

	return result;
}


int main()
{
    int num;
  	cin>>num;
  	for(int i=0;i<num;i++){
	  int count;
	  cin>>count;
	  int *arr = new int[count];
	  for(int i=0;i<count;i++){
	  	cin>>arr[i];
	  }
	  int painters;
	  cin>>painters;
	  int min = getMax(arr,count);
	  int max = getSum(arr,count);
	  int result = search(arr,count,min,max,painters);
	  cout<<result<<endl;
    }
    return 0;
}

