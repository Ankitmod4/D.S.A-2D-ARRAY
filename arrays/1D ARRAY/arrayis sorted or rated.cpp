# include <iostream>
using namespace std;
bool rotate(int arr[],int temp[],int key){
    for(int i=0;i<5;i++){
    temp[(i+key)%5]=arr[i];
 }
//  cout<<"Rotated array:::"<<endl;
//  for(int i=0;i<5;i++){
    
//      cout<<temp[i]<<" ";
//  }cout<<endl;
 for(int i=0;i<5;i++){
  if(arr[i]==temp[i]){
     return false;;
  }
 } return true;
}

 sorted(int arr[]){
     for(int i=0;i<4;i++){
   if(arr[i]>arr[i+1]){
      return false;
 
   }     
   } return true;;
   
}
int main(){
   
   int arr[5]={2,3,10,7,9};
  int temp[5]={};
//   int key=3;
 int ans=rotate(arr,temp,3);

 int sort=sorted(arr);
 if(sort){

   cout<<"array is sorted"<<endl;;
 }
 else{
   cout<<"not sorted"<<endl;;
 }
if(ans){
    cout<<"array is rotated"<<endl;
} 
else{
    cout<<"array is not rotated";
}
    return 0;
}