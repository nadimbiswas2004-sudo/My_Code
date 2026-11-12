#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// Factorial function
double factorial(int n)
{
 double fact = 1;
 for(int i = 1; i <= n; i++)
 {
 fact *= i;
 }
 return fact;
}
int main()
{
 int x;
 double lambda, result;
 cout << "Enter mean (lambda): ";
 cin >> lambda;
 cout << "Enter number of events (x): ";
 cin >> x;
 result = (pow(lambda, x) * exp(-lambda)) / factorial(x);
 cout << fixed << setprecision(6);
 cout << "Poisson Probability = " << result << endl;
 return 0;
}