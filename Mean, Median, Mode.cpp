#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
 int n;
 cout << "How many data points? ";
 cin >> n;
 if(n <= 0) {
 cout << "Error: Number of data points must be positive." << endl;
 return 0;
 }
 vector<double> data(n);
 cout << "Enter the data values:\n";
 for(int i = 0; i < n; i++) {
 cin >> data[i];
 }
// ----------------- MEAN -----------------
 double sum = 0;
 for(int i = 0; i < n; i++)
 sum += data[i];
 double mean = sum / n;
 // ----------------- MEDIAN -----------------
 sort(data.begin(), data.end());
 double median;
 if(n % 2 == 0)
 median = (data[n/2 - 1] + data[n/2]) / 2.0;
 else
 median = data[n/2];
 // ----------------- MODE -----------------
 sort(data.begin(),data.end());
 double mode=data[0];
 int max_count=1;
 int current_count=1;

 for(int i=1; i<n;i++)
 {
    if(data[i]==data[i-1])
    {
        current_count++;
    }
    else
    {
        current_count=1;
    }
 
    if(max_count<current_count)
    {
        max_count=current_count;
        mode= data[i];
    }
 }
 
 cout.precision(4);
 cout << fixed;
 cout << "\nMean = " << mean << endl;
 cout << "Median = " << median << endl;
 if(max_count == 1)
 cout << "Mode = None (all values appear only once)" << endl;
 else {
 cout << "Mode of  "<<mode<<"= "<<max_count;
cout << endl;
 }
 return 0;
}
