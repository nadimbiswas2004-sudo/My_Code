#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //insert value
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    cout<<"Element: ";
    for(int i=0;i<a.size();i++) //print the value in vectoor
    {

        cout<<a[i]<<", ";
    }
    cout<<endl;
    cout<<"Print the front: ";
    cout<<a.front();
    cout<<endl;
    cout<<"Print the back: ";
    cout<<a.back();
    cout<<endl;
     cout<<"Print the capacity: ";
    cout<<a.capacity();
    cout<<endl;
    cout<<"Print the speacific value: ";
    a.resize(10);
    for(int i=0;i<a.size();i++) //print the value in vectoor
    {

        cout<<a[i]<<", ";
    }

    cout<<endl<<a.empty()<<endl;
    a.end();
    cout<<"\nThe vector is inserting";
    a.insert(a.begin()+3,11);
    cout<<"Element: ";
        for(int i=0;i<a.size();i++) //print the value in vectoor
    {

        cout<<a[i]<<", ";
    }
     cout<<"\nThe vector is ereasing";
    a.erase(a.begin()+6,a.end());
    cout<<"Element: ";
        for(int i=0;i<a.size();i++) //print the value in vectoor
    {

        cout<<a[i]<<", ";
    }

cout<<"\nSize:"<<a.size();
a.pop_back();
cout<<"\nElement: ";
        for(int i=0;i<a.size();i++) //print the value in vectoor
    {

        cout<<a[i]<<", ";
    }
cout<<endl;
a.clear();
cout<<a.at(11);
    return 0;
}
