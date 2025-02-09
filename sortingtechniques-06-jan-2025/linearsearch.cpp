#include<iostream>
using namespace std;
bool linearsearch(int arr[] , int n,int target){
  for(int i=0;i<n;i++){
    if (arr[i] == target ){
      return true;
    }
  }
  return false;
}
int main(){
  int arr[5] = {10,56,46,36,20};
  int  n = 5; // (sizeof(arr))/4;
  int target;
  cout<<"Enter the target to be search : ";
  cin>>target;
  bool check = linearsearch(arr,n,target);
  if(check==1){
    cout<<"target found";
  }
  else{
    cout<<"Not found";
  }
}