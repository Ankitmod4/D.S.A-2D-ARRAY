// using binary search
# include <iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int target=5;
    int start=0;
    int end=8; 
    
    while(start<=end){ 
        int mid=(start+end)/2;
        int row=mid/3;
        int col=mid%3; 
             int element=arr[row][col];
            if(element==target){ 
                cout<<"element found at index:"<<"("<<row<<","<<col<<")"; 
                 break;
            }
            else if(element<target){ 
                 start=mid+1; 
            }
            else if(element>target){
                end=mid-1; 
            }
    }

    return 0;

}
