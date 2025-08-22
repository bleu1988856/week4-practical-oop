#include "Person.h"
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    PersonList list = createPersonList(n);
    PersonList new_list = shallowCopyPersonList(list);

    //test
    cout << list.people[0].name << endl;
    cout << new_list.people[0].name << endl;

    delete [] list.people;

    return 0;



}