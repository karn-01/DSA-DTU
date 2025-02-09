#include<iostream>
using namespace std;
int main(){
  int arr[5] = { 5,4,3,1,0};
  int n=5;
  //in selection me hum smallest element nikal ta h har round me then hum aush apni ith position per rakh deta h then agla i++ then same work and the largest element in last round already at right position toh bus loop of i is 0 to less then n-1
  for(int i=0;i<n-1;i++){
    int miniindex = i;   //minimum k=value ka index
    for(int j=i+1;j<n;j++){
     if(arr[miniindex] > arr[j]){
      miniindex = j;
     }
  }
  int temp = arr[miniindex];
  arr[miniindex] = arr[i];
  arr[i] = temp;
}

for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
}