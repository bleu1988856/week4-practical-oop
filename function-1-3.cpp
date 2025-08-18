#include "person.h"
#include <iostream>
using namespace std;


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

PersonList deepCopyPersonList(PersonList pl){
    PersonList new_pl;
    new_pl.numPeople = pl.numPeople;

    new_pl.people = new Person[pl.numPeople];

    for (int i=0; i<pl.numPeople; i++){
        new_pl.people[i].name = pl.people[i].name;
        new_pl.people[i].age = pl.people[i].age;
    }

    return new_pl;
}