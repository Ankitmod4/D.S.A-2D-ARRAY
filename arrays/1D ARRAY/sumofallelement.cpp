# include <iostream>
using namespace std;

int main(){
     int n;
     cout<<"size of array :"<<endl;
 cin>>n; 
 int arr[n]={};

 

cout<<"array elements:"<<endl;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 int sum=0; 
 for(int i=0;i<n;i++){ 
    sum=sum+arr[i];
 }
cout<<"The sum of an array is:" <<sum;

    return 0;
}