
# include <iostream>
using namespace std; 
int main(){
    int target; 
    cout<<"set the target:"<<endl; 
    cin>>target; 
    int n;
    cin>>n;
 int arr[n]={};
 cout<<"Array elements are:"<<endl;
 for(int i=0;i<n;i++){
    cin>>arr[i]; 
 }
 for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
         if(arr[i]+arr[j]==target){
             cout<<"{"<<i<<","<<j<<"}";
         }
     }
 }
    return 0;
}