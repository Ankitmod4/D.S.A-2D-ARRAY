#include <iostream>
using namespace std;
int main() { 
    int arr[6] = {1,2,40,7,3,4};
    int max=arr[0];
    for(int i=0;i<6;i++){
    if(max<arr[i]){
        max=arr[i]; 
    }
    }
    cout<<max;

    return 0;
}
