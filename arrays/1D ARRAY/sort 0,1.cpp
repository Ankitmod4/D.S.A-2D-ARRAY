// BY TWO POINTERS RECURSSION

# include <iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void  sort(int arr[],int i,int j){
    // base case
    if(i>=j){
        return ;
    }
    // processing 
    if(arr[i]==0){
        i++;
    }
    if(arr[j]==1){  
        j--;
    } 
    if(arr[i]==1 && arr[j]==0){
        
        swap(arr[i],arr[j]);
    }
    // recursive relation  
   return  sort(arr,i+1,j-1);
} 
int main(){
int arr[7]={0,1,0,1,1,0,0}; 
sort(arr,0,6);
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
    return 0;
} 