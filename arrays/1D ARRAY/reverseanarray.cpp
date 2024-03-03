# include <iostream>
using namespace std;
int swap(int &i,int &j){
  int temp=i;
  i=j;
  j=temp;
}
int  reverse(int arr[],int i,int j){
    // base case
    if(i>j){
        return false ;
    }
    // processing
    // i++; 
    // j--;

    // recursive relation 
    swap(arr[i],arr[j]);
   return reverse(arr,i+1,j-1);
    
}
int main(){
   int arr[5]={2,3,5,7,9};
 
reverse(arr,2,4); 
for(int i=2;i<5;i++){
    cout<<arr[i]<<" ";
}


    return 0;
}