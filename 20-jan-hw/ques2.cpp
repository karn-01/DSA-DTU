////delete the given row of the 2d matrix
#include<iostream>
using namespace std;
void deletetherow(int arr[][3],int &row , int cole,int rownumber){
  for(int i=rownumber-1;i<row;i++){
    for(int col=0;col<cole;col++){
      arr[i][col] = arr[i+1][col];
    }
    //after the shift we decrease the row by -1
    row--;

  }

}
int main(){
  int rowsize = 3,colsize=3;
  int arr[10][3] = { {1,2,3} , {4,5,6} , {7,8,9}};
  for(int i=0;i<rowsize;i++){
    for(int j=0;j<colsize;j++){
      cout<<arr[i][j]<<" ";
    }
      cout<<endl;
  }
  int deleterownumber;
  cout<<"enter the row number to be deleted :";
  cin>>deleterownumber;
  //checking the deleterownumber is it right or not
  if (deleterownumber < 1 || deleterownumber > rowsize) {
        cout << "Invalid row number.\n";
        return 1;
    }
  deletetherow(arr,rowsize,colsize,deleterownumber);
  for(int i=0;i<rowsize;i++){
    for(int j=0;j<colsize;j++){
      cout<<arr[i][j]<<" ";
    }
      cout<<endl;
  }
  }