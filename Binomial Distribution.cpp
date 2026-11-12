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
// nCr function
double combination(int n, int r)
{
 return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
 int n, x;
 double p, q, result;
 cout << "Enter total trials (n): ";
 cin >> n;
 cout << "Enter successful outcomes (x): ";
 cin >> x;
 cout << "Enter probability of success (p): ";
 cin >> p;
 q = 1 - p;
 result = combination(n, x) * pow(p, x) * pow(q, n - x);
 cout << fixed << setprecision(6);
 cout << "Binomial Probability = " << result << endl;
 return 0;
}
