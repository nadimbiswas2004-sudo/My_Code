#include <iostream>
using namespace std;
class Array{
    private:
    int size;
    int arr[];
    public:
    Array(int a){
        size=a;
        arr[size]={};
    }
    void arrayinput(){
        cout<<"Enter the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    }
    void display(){
         cout<<"\nPrint the array:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    }
    void beginningdelete(){
        size--;
        for(int i=0;i<size;i++){
            arr[i]=arr[i+1];
        }
        cout<<"\nPrint Beginning Delete Array:"<<endl;
        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    }
    void enddelete(){
        size--;
        cout<<"\nPrint End Delete Array:"<<endl;
        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    }
    void anypositiondelete(){
        size--;
        cout<<"\nEnter the position in 0 to"<<size<<":"<<endl;
        int pos;
        cin>>pos;
        if(pos==size){
        cout<<"\nPrint Any Position Delete Array:"<<endl;
        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        }
        }
        else{
            for(int i=pos-1;i<size;i++){
            arr[i]=arr[i+1];
        }
        cout<<"\nPrint Any Position Delete Array:"<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        }
    }
};
int main() {
	int size;
    cout<<"Enter the Size:"<<endl;
    cin>>size;
    Array a(size);
    a.arrayinput();
    a.display();
   a.beginningdelete();
   a.enddelete();
    a.anypositiondelete();

    return 0;
}