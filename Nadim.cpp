#include<iostream>
using namespace std;
void combain(int a[],int l,int mid,int h)
{

    int i=l
    int j=mid+1
    int c[(h-l)+1];
    int s=0;
    while(i<mid&&j<=h)
    {

        if(a[i]<=a[j]){
            c[s++]=a[i++];
        }
        else{
            c[s++]=a[j++];

        }
    }
    while(j<=h){
        c[s++]=a[j++;]
    }
     while(i<=mid){
        c[s++]=a[i++;]
    }
     for(int z=l;z<=h;z++){
        a[z]=c[z-l];
    }
}

int main()
{



    return 0;
}
