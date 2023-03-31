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

  area = (1 / (float) 4) * sqrt (( 4 * (A * A) * (B * B)) - (((A * A) + (B * B) - (C * C)) * ((A * A) + (B * B) - (C * C))));

  cout << "The area of triangle: " << area << endl;

  return 0;
}