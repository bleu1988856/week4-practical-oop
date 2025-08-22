#include "person.h"
#include <iostream>
using namespace std;

PersonList shallowCopyPersonList(PersonList pl){
    PersonList new_pl;
    new_pl.numPeople = pl.numPeople;
    new_pl.people = pl.people;
    return new_pl;
}

PersonList createPersonList(int n){
    PersonList list;
    list.numPeople = n;
    list.people = new Person[n];

    for(int i=0; i<n; i++){
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }

    return list;
}