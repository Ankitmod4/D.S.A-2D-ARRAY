// # include <iostream>
// using namespace std;
// int duplicate(int arr[],int key){
//     int count=0;
    
// for(int i=0;i<6;i++){
//     if(arr[i]==key){
        
//         count++;
//     }
   
// }
//  if(count>1){
//     cout<<"The duplicate element:"<<key<<endl;
//  } 
// }
// int main(){
    
//     int arr[6]={1,7,4,6,1,6};
    
//     duplicate(arr,1);
//     duplicate(arr,7);
//     duplicate(arr,4);
//     duplicate(arr,6);
    
//     return 0;
// }
 

// 2 approach
 #include <iostream>
using namespace std;

void findDuplicates(int arr[], int size) {
    cout << "Duplicate elements: ";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                 
            }
        }
    }
    cout << endl;
}

int main() {
    int arr[7] = {0, 7, 4, 6, 1, 6,7};

    findDuplicates(arr, 7);

    return 0;
}
