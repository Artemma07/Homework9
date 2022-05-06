#include "Header.h"
using namespace std;
int main() {
    setlocale(0, "RUS");
    
    
    Property** a = new Property * [7];
    a[0] = new Apartment(200000);
    a[1] = new Apartment(400000);
    a[2] = new Apartment(600000);
    a[3] = new Car(80000);
    a[4] = new Car(20000);
    a[5] = new CountryHouse(250000);
    a[6] = new CountryHouse(500000);
    for (int i = 0; i < 7; i++) {
        cout << a[i]->tax() << endl;
        delete  a[i];
    }
    delete[] a;


    return 0;
}
