#include "Person.h"
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    PersonList list = createPersonList(n);
    PersonList new_list = deepCopyPersonList(list);

    for (int i = 0; i < n; i++) {
        cout << "Person " << i << ": " 
             << new_list.people[i].name 
             << ", Age: " << new_list.people[i].age << endl;
    };

    delete[] list.people;
    delete[] new_list.people;
    return 0;

}