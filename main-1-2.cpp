#include <iostream>
#include "Person.h"
using namespace std;

int main(){
    int n = 5;
    PersonList list = createPersonList(n);

    for (int i = 0; i < n; i++) {
        cout << "Person " << i << ": " 
             << list.people[i].name 
             << ", Age: " << list.people[i].age << endl;
    };

    delete[] list.people;
    return 0;

}