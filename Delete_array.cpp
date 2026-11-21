#include <iostream>
using namespace std;
int main() {
    int arr[4]={1,2,3,4};
    for(int i=0;i<4;i++){
        if(arr[i]==2){
                arr[i]=arr[i+1];
                for(int j=i;j<3;j++){
                arr[j]=arr[j+1];
           }
        }
        
    }
    
        for(int i=0;i<3;i++){
        cout<<arr[i]<<", ";
        }

    return 0;
}