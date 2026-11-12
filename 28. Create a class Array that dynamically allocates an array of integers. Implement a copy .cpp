#include <iostream>
using namespace std;
class Array {
private:
    int* data;
    int size;

public:
    Array(int s)
	 {
	 	size=s;
         data = new int[size];
        for (int i = 0; i < size; ++i) 
		{
            data[i] = 0; 
        }
    }
    Array(const Array& other) 
	{
        size=other.size;
		data=new int[other.size];
        for (int i = 0; i < size; ++i) 
		{
            data[i] = other.data[i];
        }
    }
    ~Array()
	{
        delete[] data;
    }
    void setValue(int index, int value) 
	{
        if (index >= 0 && index < size) 
		{
            data[index] = value;
        }
	}
    int getValue(int index) const 
	{
        if (index >= 0 && index < size) 
		{
            return data[index];
        }
        return -1; 
    }
    void print() const 
	{
        for (int i = 0; i < size; ++i) 
		{
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array arr1(5);
    arr1.setValue(0, 10);
    arr1.setValue(1, 20);
    arr1.setValue(2, 30);
    arr1.setValue(3, 40);
    arr1.setValue(4, 50);

    cout << "Original array: ";
    arr1.print();
    
    Array arr2 = arr1;

    cout << "Copied array: ";
    arr2.print();

    return 0;
}
