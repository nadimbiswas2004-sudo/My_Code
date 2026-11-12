#include <iostream>
using namespace std;
class Array{
    private:
    int size;
    int NEW_ELEMENT;
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
        cout<<arr[i]<<endl;
    }
    }
    void beginninginsert(int new_element){
        size++;
        for(int i=size;i>=0;i--){
            arr[i+1]=arr[i];
        }
        NEW_ELEMENT=new_element;
        arr[0]=NEW_ELEMENT;
        cout<<"\nPrint Beginning Insert Array:"<<endl;
        for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    }
    void endinsert(int new_element){
        size++;
        NEW_ELEMENT=new_element;
        arr[size-1]=NEW_ELEMENT;
        cout<<"\nPrint End Insert Array:"<<endl;
        for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    }
    void anypositioninsert(int new_element){
        size++;
        NEW_ELEMENT=new_element;
        cout<<"Enter the position in 1 to"<<size<<":"<<endl;
        int pos;
        cin>>pos;
        if(pos==size){
            arr[size-1]=NEW_ELEMENT;
        cout<<"\nPrint Any Position Insert Array:"<<endl;
        for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
        }
        }
        else{
            for(int i=size;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=NEW_ELEMENT;
        cout<<"\nPrint Any Position Insert Array:"<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
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
   a.beginninginsert(4);
   a.endinsert(5);
    a.anypositioninsert(8);

    return 0;
}