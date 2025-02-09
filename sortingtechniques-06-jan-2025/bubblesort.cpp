#include<iostream>
using namespace std;
int main(){
  int arr[5] = {10,56,46,36,20};
  int  n = (sizeof(arr))/4;
  //bubble sort
  for(int i=0;i<n-1;i++){
    for(int j=0;j<=n-i-1;){
      if(arr[j] >arr[j+1]){
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = arr[j];
    }
    }
  }
  for(int i=0;i<n;i++){ 
    cout<<arr[i]<<" ";
  }
 
}