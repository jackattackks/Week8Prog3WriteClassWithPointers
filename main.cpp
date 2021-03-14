//
//  main.cpp
//  Week8Prog3
//
//  Created by Jackie on 3/14/21.
//

#include <iostream>
using namespace std;
#include <string>
#include "Person.hpp"



int main() {
    cout << "Name: Jackie Ocaña - Prog3 - March 14th, 2021" << endl;
    Person p1; //new class p1,p2 declared
    Person p2;
    
    Person *ptrPerson1 = NULL; //pointers set to NULL
    Person *ptrPerson2 = NULL;
    
    ptrPerson1 = &p1; //pointer set to address of p11
    ptrPerson2 = &p2; //pointer set to address of p11
    
    cout << "Person 1 details:" << endl;
    ptrPerson1->setFirstName("Jacqueline");
    cout << ptrPerson1->getFirstName() << endl;
    ptrPerson1->setlastName("Ocaña");
    cout <<  ptrPerson1->getlastName()<< endl;
    ptrPerson1->setnickName("Jackie");
    cout << ptrPerson1->getnickName()<< endl;
    ptrPerson1->setYearOfBirth(1996);
    cout << ptrPerson1->getYearOfBirth()<< endl;
    cout << endl;
    
    cout << "Person 2 details:" << endl;
    ptrPerson2->setFirstName("Manuel");
    cout <<  ptrPerson2->getFirstName()<< endl;
    ptrPerson2->setlastName("Ocaña");
    cout <<  ptrPerson2->getlastName()<< endl;
    ptrPerson2->setnickName("Manny");
    cout <<  ptrPerson2->getnickName()<< endl;
    ptrPerson2->setYearOfBirth(2004);
    cout <<  ptrPerson2->getYearOfBirth()<< endl;
    
    cout << endl;
    return 0;
}
