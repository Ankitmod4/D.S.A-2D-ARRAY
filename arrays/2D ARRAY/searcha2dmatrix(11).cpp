
# include <iostream>
using namespace std;
int main(){
int arr[5][5]={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
int target=3;
for(int row=0;row<5;){
    for(int col=4;col>=0;){
        
        if(arr[row][col]==target){ 
          cout<<"element found at index:"<<"{"<<row<<","<<col<<"}";
            break;
          }
          if(arr[row][col]>target){
            col--;
          }
          if(arr[row][col]<target){
            row++;
          }
        }
        break;
    }

    return 0;
}