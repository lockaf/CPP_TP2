#ifndef PERSON_HPP
#define PERSON_HPP

#include "Date.hpp"
#include <fstream>
#include <iostream>
#include <string>

class Person{
private:
    Date birth;
public:
    //Constructeurs
    Person();
    Person(Date birth);

    //Getteur
    const int& getteur_dob() const;

    //Setteur
    void set_dob(int new_dob);

    //Methode
    int get_age(const Date& current_date);
};

#endif // PERSON_HPP
