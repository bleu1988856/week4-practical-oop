#ifndef Person_h
#define Person_h
#include <string>

struct Person {
    std::string name;
    int age;
};

Person* createPersonArray(int n);


struct PersonList {
    Person* people;
    int numPeople;
};

PersonList createPersonList(int n);

PersonList deepCopyPersonList(PersonList pl);

PersonList shallowCopyPersonList(PersonList pl);

#endif
