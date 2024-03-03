#include <iostream>
using namespace std;
int main() { 
    int arr[6] = {5,2,40,7,3,4};
    int min=arr[0];
    for(int i=0;i<6;i++){
    if(min>arr[i]){
        min=arr[i]; 
    }
    }
    cout<<min;

    return 0;
}