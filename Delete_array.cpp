#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,9,7,4,8,5};
    int N=sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<N;i++){
        	cout<<arr[i]<<", ";
		}
		cout<<endl;
    //last position
	 for(int i=0;i<N;i++){
        if(arr[i]==5){
                arr[i]=arr[i+1];
                for(int j=i;j<N-1;j++){
                arr[j]=arr[j+1];
           }
        }
        
    }
    
        for(int i=0;i<N-1;i++){
        cout<<arr[i]<<", ";
        }
        cout<<endl;
    //any position
    int num;
    cout<<"\nEnter the any position number\n";
    cin>>num;
    for(int i=0;i<N-1;i++){
        if(arr[i]==num){
                arr[i]=arr[i+1];
                for(int j=i;j<N-2;j++){
                arr[j]=arr[j+1];
           }
        }
        
    }
    
        for(int i=0;i<N-2;i++){
        cout<<arr[i]<<", ";
        }
         cout<<endl;
        //first position
         for(int i=0;i<N-2;i++){
        if(arr[i]==1){
                arr[i]=arr[i+1];
                for(int j=i;j<N-3;j++){
                arr[j]=arr[j+1];
           }
        }
        
    }
    
        for(int i=0;i<N-3;i++){
        cout<<arr[i]<<", ";
        }
		 cout<<endl;
    return 0;
}