#include <iostream>
using namespace std;
void reverse(int arr[],int k){
  int i=0;
  for(i=k-1;i>=0;i--){
   cout<<arr[i]<<"\t";
  }
}

int main() {
  //cout << "Hello World!\n";
  int arr1[]={1,2,3,4,5,6};
  int l=6;
  reverse(arr1, l);
  
  //cout<<x<<endl;
  
}