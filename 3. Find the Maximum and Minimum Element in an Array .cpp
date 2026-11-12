#include <iostream>
using namespace std;
class Array{
  private:
  int SIZE;
  int arr[];
  public:
  Array(int size){
      SIZE=size;
      arr[SIZE]={};
  }
  void arrayinput(){
      cout<<"Enter The Array Input:"<<endl;
      for(int i=0;i<SIZE;i++){
          cin>>arr[i];
      }
      cout<<endl;
  }
  void display(){
      cout<<"Print The Array:"<<endl;
      for(int i=0;i<SIZE;i++){
          cout<<arr[i]<<" ";
      }
      cout<<endl;
       cout<<"The Maximum Number in Array:"<<arr[SIZE-1]<<endl;
          cout<<"The Minimum Number in Array:"<<arr[0]<<endl;
  }
  void sort(){
      for(int i=0;i<SIZE;i++){
          for(int j=0;j<SIZE-1-i;j++){
              if(arr[j]>arr[j+1]){
                  swap(arr[j+1],arr[j]);
              }
          }
      }
  }
  
};
int main() {
    cout<<"Enter The Size:";
    int size;
    cin>>size;
    Array a(size);
    a.arrayinput();
    a.sort();   
    a.display();
    
    return 0;
}