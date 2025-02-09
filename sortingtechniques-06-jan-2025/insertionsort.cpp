#include<iostream>
using namespace std;
//insertion sort
int main(){
   int arr[5] = {5,4,-1,2,1};
  int  n = (sizeof(arr))/4;
  for(int i=1;i<n;i++){
    int temp =arr[i];
    int j=i-1;
    while(j>=0 && arr[j] > temp){  //run the loop and also check the arr[j] chota ho temp me arr[i] se tabhi ye age shift karega varna nhi matlab right position me h j+1 = temp or arr[i];
        arr[j+1] =arr[j];
        j--;
    }
     arr[j+1] =temp;  //right position  pe daal do 
    }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }

  }