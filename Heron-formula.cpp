#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float A, B, C, area;

  cout << "Enter the Value of A: ";
  cin >> A;
  cout << "Enter the Value of B: ";
  cin >> B;
  cout << "Enter the Value of C: ";
  cin >> C;

  area = (1 / (float) 4) * sqrt ((4 * pow(A, 2) * pow(B, 2)) - pow (pow(A, 2) + pow(B, 2) - pow(C, 2),2) );

  cout << "The area of triangle: " << area << endl;

  return 0;
}