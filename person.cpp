#include "person.hpp"
#include "Date.hpp"

#include <fstream>
#include <iostream>
#include <string>


//Constructeur vide
Person::Person()
      : birth(Date ()){}

//Constructeur
Person::Person(Date birth_param)
      : birth(birth_param){}

    //Methodes
int Person::get_age(const Date& current_date){
   int age = current_date.year() - birth.year();
            if (current_date.month() < birth.month() || (current_date.month() == (birth.month() && current_date.day() < birth.day()))){
                age = age-1;
            }
   return age;
}



