#include<iostream>
using namespace std;
void insertmid(int ele,int& size,int arr[]){
  int mid=(size/2);
  for(int i=size;i>mid;i--){
    arr[i] = arr[i-1];
  }
  arr[mid] = ele;
  size++;

}
int main(){
  int arr[100];
  //size of the array
  int size;
  cout<<"enter the size of array: ";
  cin>>size;
  cout<<endl;
  cout<<"enter the element of the array: ";
  //input the element in the array
  for(int i=0;i<size;i++){
    cin>>arr[i];
    cout<<endl;
  }
  //taking the element to be insert at mid
  int ele;
  cout<<"enter the element to be inseted in the array :";
  cin>>ele;
  insertmid(ele,size,arr);
  cout<<"new size of the array is"<<size<<endl;
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }

}