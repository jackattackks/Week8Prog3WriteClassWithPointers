//
//  Person.cpp
//  Week8Prog3
//
//  Created by Jackie on 3/14/21.
//

#include "Person.hpp"
using namespace std;
#include <string>


//class Person{
//private:
//    string firstName;
//    string lastName;
//    int YearOfBirth;
//    string nickName;
//public:
    void Person::setFirstName(string a){
        firstName = a;
    }
    string Person::getFirstName(){
        return firstName;
    }
    
    void Person::setlastName(string b){
        lastName = b;
    }
    string Person::getlastName(){
        return lastName;
    }
    
    void Person::setnickName(string c){
        nickName = c;
    }
    string Person::getnickName(){
        return nickName;
        
    }
    
    void Person::setYearOfBirth(int d){
        YearOfBirth = d;
    }
    int Person::getYearOfBirth(){
        return YearOfBirth;
    }
