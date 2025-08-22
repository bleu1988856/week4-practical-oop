#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


int main(){

    int n = 5;
    Person *people = createPersonArray(n);

    for (int i = 0; i < n; i++) {
        cout << "Person " << i << ": " << people[i].name 
             << ", Age: " << people[i].age << endl;
    };

    delete[] people;
    return 0;

}
