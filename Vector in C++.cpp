#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v={4,3,2,10};
	/*v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(10);*/
	cout<<"Print the First Element:  ";
	cout<<v[0];
	cout<<"\nThe size of Array:  ";
	cout<<v.size();
	v.push_back(20);
	cout<<"\nPrint the Element:"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<", ";
	}
	v.pop_back();
	v.pop_back();
		cout<<"\nPrint the Element:"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<", ";
	}
cout<<endl<<"Print First element:  ";
cout<<endl<<"  "<<v.front();
cout<<endl<<"Print last element:  ";
cout<<endl<<v.back();
cout<<endl<<"The Capasity: "<<endl;
cout<<v.capacity();
cout<<endl<<"Modifies the spacifiec value: ";
v.resize(10);
cout<<"\nPrint the Element:"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<", ";
	}
	cout<<"\nThe vector is empty or not"<<endl;
	cout<<v.empty();
	v.end();
	cout<<"\nPrint the Element:"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<", ";
	}
	cout<<"\nThe vector is inserting";
	v.insert(v.begin()+2,55);
	cout<<"\nPrint the Element:"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<", ";
	}
	cout<<"\nThe vector is eraseing";
	v.erase(v.begin()+5, v.end());
	cout<<"\nPrint the Element:"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<", ";
	}

cout<<"\nThe all vector's element are deleted:"<<endl;
	v.clear();
	cout<<"\nPrint the Element:"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<", ";
	}
	cout<<endl<<"Print a refarance to an element."<<endl;
cout<<v.at(10);
return 0;
}
