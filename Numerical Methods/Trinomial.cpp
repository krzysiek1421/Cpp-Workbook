#include <iostream>

using namespace std;

class Trinomial {
    double a, b, c, x0, x1, x2, delta;
    int v;
public:
    void readTheData();
    void makeCalculations();
    void listTheData();
};

void Trinomial::readTheData() {
    cout << "The size of a: \n";
    cin >> a;
    while (a <= 0) { 
        cout << "Wrong input for: a \n";
        cin.clear();
        cin.ignore();
        cout << "Please, re-enter: \n";
        cin >> a;
    }
    cout << "The size of b: \n";
    cin >> b;
    cout << "The size of c: \n";
    cin >> c;
};

void Trinomial::makeCalculations() {
    delta = pow(b, 2) - (4 * a * c);
    if (delta > 0) {
        x1 = ((-b) - sqrt(delta)) / (2 * a);
        x2 = ((-b)+ sqrt(delta)) / (2 * a);
        v = 1;
    }
    if (delta == 0) {
        x0 = -b / (2 * a);
        v = 2;
    }
    if (delta < 0)
        v = 0;
};
void Trinomial::listTheData() {
    switch (v) {
    case 0:
        cout << "There is no existing zeros of the function." << endl;
        break;
    case 1:
        cout << "First trinomial zero of a function is: " << x1 << endl;
        cout << "Second trinomial zero of a function is: " << x2 << endl;
        break;
    
    case 2:
        cout << "There is only one zero of a function: " << x0 << endl;
        break;
    default:
        cout << "Something went wrong!\n";
        return;
    }
}
int main()
{
    Trinomial t;
    t.readTheData();
    t.makeCalculations();
    t.listTheData();

    getchar();
    return 0;
}
