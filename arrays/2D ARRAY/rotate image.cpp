#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {{5,1,9,11}, {2,4,8, 10}, {13,3,6,7},{15,14,12,16}};
    
    for(int col=0;col<4;col++){ 
        for(int row=3;row>=0;row--){
            cout<<arr[row][col]<<" ";
        }cout<<endl;
    }

    return 0;
}