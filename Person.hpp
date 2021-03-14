//
//  Person.hpp
//  Week8Prog3
//
//  Created by Jackie on 3/14/21.
//

#ifndef Person_hpp
#define Person_hpp
#include <string>
using namespace std;
#include <stdio.h>

class Person{
private:
    string firstName;
    string lastName;
    int YearOfBirth;
    string nickName;
public:
    void setFirstName(string a);
    string getFirstName();
    void setlastName(string b);
    string getlastName();
    void setnickName(string c);
    string getnickName();
    
    void setYearOfBirth(int d);
    int getYearOfBirth();
};


#endif /* Person_hpp */
