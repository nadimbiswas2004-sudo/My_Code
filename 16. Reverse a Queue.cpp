#include <iostream>
using namespace std;
class Queue_Array{
  private:
  int queue[100];
  int front,raer;
  int MAX_SIZE;
  public:
  Queue_Array(int max_size):front(-1),raer(-1),MAX_SIZE(max_size){};
  void insert(int num){
      if(raer==MAX_SIZE-1){
          cout<<"Over Flow"<<endl;
          return;
      }
      if(front==-1&&raer==-1){
         front=raer=0;
      }
      else{
          raer++;
      }
      queue[raer]=num;
  }
  void traverse(){
      if(raer==-1){
          cout<<"EMPTY"<<endl;
          return;
      }
      for(int i=front;i<=raer;i++){
          cout<<queue[i]<<" ";
      }
  }
  void revarse(){
      if(raer==-1){
          cout<<"EMPTY"<<endl;
          return;
      }
      for(int i=raer;i>=front;i--){
          cout<<queue[i]<<" ";
      }
  }
};
int main() {
  Queue_Array q(5);
    q.insert(30);
    q.insert(90);
    q.insert(10);
    q.insert(40);
    q.insert(70);
    cout<<"Traverse the Queue:"<<endl;
    q.traverse();
    cout<<"\nRevarse the Queue:"<<endl;
    q.revarse();
    return 0;
}