# include <iostream>
using namespace std;

int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int swap(int arr[],int n){
    
    for(int i=0;i<6;i=i+2){
        if(arr[i]<n){
         int temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp; 
         cout<<endl;
        }
    }
} 
int main(){
    int arr[6]={1,2,3,4,5,6};
    int arr2[5]={3,5,2,7,8};
 swap(arr,6);
print(arr,6);

swap(arr2,5);
print(arr2,5);
    return 0;
}