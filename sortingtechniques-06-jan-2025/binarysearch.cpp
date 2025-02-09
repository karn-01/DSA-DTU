#include<iostream>
using namespace std;
bool binarysearch(int n , int arr[] , int key){
  int s=0;
  int e =n-1;
  while(s<=e){
    int mid = (s+e)/2;
    if(arr[mid] == key){
      return true;
    }
    else if(arr[mid] >key){
      e=mid-1;
    }
    else{   //when the arr[mid] <key  arr[mid] is less than the key.
      s=mid+1;
    }
  }
  return false;
}
int main(){
  int arr[5] = {1,2,3,4,5};
  int n=5;
  int target;
  cout<<"enter the target to be search ";
  cin>>target;
  bool check = binarysearch(n,arr,target);
  if(check){
    cout<<"element found";
  }
  else{
    cout<<"not found";
  }
}