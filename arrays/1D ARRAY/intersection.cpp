# include <iostream>
using namespace std;
intersection(int arr[],int arr1[],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(arr[i]==arr1[j]){
            
            cout<<"Intersected elements are:"<<arr[i]<<" "<<endl;
          }
        }
    }
}
int main(){
    int n,m;
    cout<<"array 1 size:"<<endl;
    cin>>n;
    cout<<"array 2 size:"<<endl;
    cin>>m;
    cout<<"Array 1 elements"<<endl;
   int arr[n]={};
 int arr1[m]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];  
    } 
    cout<<"Array 2 elements:"<<endl;
    for(int j=0;j<m;j++){ 
        cin>>arr1[j];
    }
 
intersection(arr,arr1,n,m);
    return 0;
}