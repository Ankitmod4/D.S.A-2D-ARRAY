# include <iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
        
    }
    cout<<"The unique element in array  is:"<<ans;
}

int main(){
    int n;
    cout<<"array size:"<<endl;
cin>>n;
int arr[n]={};
cout<<"Array input elements:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

unique(arr,n); 
    return 0;
}                                                                                            