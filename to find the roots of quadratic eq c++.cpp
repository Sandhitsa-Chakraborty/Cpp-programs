#include <iostream>
#include<math.h>
using namespace std;

int main() {
int main() {

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = (b*b)- (4*a*c);
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "x1 = " << x1;
        cout << "x2 = " << x2;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same.";
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        cout << "Roots are complex and different."  << endl;
    }

    return 0;
}
