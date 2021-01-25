#include <iostream>
#include <algorithm>
using namespace std;
void cal(int arr[],int len,int sum) {
	for(int i=0;i<len-3;i++) {
		if(i==0||arr[i]!=arr[i-1]){
			for(int j=i+1;j<len-2;j++) {
				if(j==i+1||arr[j]!=arr[j-1])
				{
					int left = j+1;
					int right = len-1;
					int target = sum - arr[i] - arr[j];
					while(left<right){
						if(arr[left]+arr[right] == target){
							cout<<arr[i]<<" "<<arr[j]<<" "<<arr[left]<<" "<<arr[right]<<" $"; 
							while(left<right&&arr[left]==arr[left+1]) left++;
							while(left<right&&arr[right]==arr[right-1]) right--;
							
							right--;
							left++;
						}else if(arr[left]+arr[right] > target){
							right--;
						}else{
							left++;
						}
				
					} 
					
				}
			
			}
		}
		
	}
}

bool compare(int a,int b)
{
    return a<b;   //升序排列，如果改为return a>b，则为降序
}

int main(){
	int num;
 	cin>>num;
 	for(int i=0;i<num;i++){
      int count;
      cin>>count;
      int sum;
      cin>>sum;
      int arr[count];
      for(int i=0;i<count;i++){
        cin>>arr[i];
      }
      sort(arr,arr+count,compare);
      if(count<4) return 0;
      cal(arr,count,sum);
      if(i!=num-1) cout<<endl;
    }
  return 0;
}
