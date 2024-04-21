
#include <iostream>

using namespace std;


    void changeValues(int& a, int& b) {
       
        if (a > b) {
            a *= 2;
        }
        else {
            b /= 2;
        }
    }

    int main() {
        int a, b;

       
        cout << "Enter thew variable value a: ";
        cin >> a;
        cout << "Enter thew variable value b: ";
        cin >> b;

       
        changeValues(a, b);

       
       cout << "a = " << a << endl;
       cout << "b = " << b << endl;

        return 0;
    }

    





