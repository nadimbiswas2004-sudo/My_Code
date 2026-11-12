#include <iostream>
using namespace std;
class Stack_using_Array{
    private:
    int stack[100];
    int MAX_SIZE;
    int top;
    public:
    Stack_using_Array(int max_size):MAX_SIZE(max_size),top(-1){};
    void Push(int element){
    if(top==MAX_SIZE-1){
        cout<<"Over Flow";
        return;
    }
    top++;
    stack[top]=element;
    cout<<"Pushed"<<endl;
    }
    void output(){
        if(top==-1){
            cout<<"Empty";
            return;
        }
        cout<<"Element:"<<endl;
        for(int i=0;i<=top;i++)
        cout<<stack[i]<<" ";
        }
        void sort(){
           for(int i=0;i<top;i++){
               for(int j=0;j<top-i;j++){
                   if(stack[j]>stack[j+1]){
                       swap(stack[j], stack[j+1]);
                   }  
               }
           }
           cout<<endl;
        }
        void revarce(){
            cout<<"\nRevarce:"<<endl;
            for(int i=top;i>=0;i--){
                cout<<stack[i]<<" ";
            }
        }
};
int main() {
   Stack_using_Array s(7);
   cout<<"Print The Output in Circular Queue:"<<endl;
    s.Push(90);
    s.Push(20);  
    s.Push(40);  
    s.Push(30);
    s.Push(60);
    s.Push(10);
    s.Push(70);
    s.output();
    s.sort();
    s.output();
    s.revarce();
    return 0;
}