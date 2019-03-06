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

    /*Methodes*/

/*Name : get_age
 * Function : rnevoie l'age d'un personnage en fonction
 * de son année de naissance et d ela date actuelle
 * */
int Person::get_age(const Date& current_date){
   int age = current_date.year() - birth.year();
            if (current_date.month() < birth.month() || (current_date.month() == (birth.month() && current_date.day() < birth.day()))){
                age = age-1;
            }
   return age;
}



