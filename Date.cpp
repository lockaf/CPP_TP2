#include "Date.hpp"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

/* Constructeurs */

//Si aucun paramètre n'est entré, on met 0/0/0
Date::Date()
        :day_value(0),month_value(0),year_value(0) {}

//Si des paramètres sont entrés
Date::Date(int day_param, int month_param, int year_param) //Faut-il mettre dautres noms?
        :day_value(day_param), month_value(month_param), year_value(year_param) {}

/* Methodes */

//Getteurs
const int& Date::day() const {return day_value;}
const int& Date::month() const {return month_value;}
const int& Date::year() const {return year_value;}

//Setteurs
void Date::day(int new_day) {day_value = new_day;}
void Date::month(int new_month) {month_value = new_month;}
void Date::year(int new_year) {year_value = new_year;}

/* Name: is_date()
 * Function: Prend en entrée le jour/mois/année de naissance
 * teste si la date est valide et renvoie un booléen
*/
bool Date::is_date(int day, int month, int year){
	bool ret=false;
            if(day < 32 && day>0){
                if(month <13 && month>0){
                    if(year>0 && year<2019)
		        ret = true;
		    else
		        ret=false;
		}
		else
		    ret=false;
	    }
	    else
		ret=false;
	    return ret;
}

/* Name: from_string
 * Function: Prend une chaine de caractere name de la forme JJ/MM/AAAA en entrée
 * Renvoie une date appartenant a la classe Date soit avec les jours/mois/année entrés
 * soit avec 0/0/0 si la date est invalide (d'après is_date)
*/
Date Date::from_string(const std::string& name){
    Date birth;

    int slash_1 = name.find('/',0);
    int slash_2 = name.find('/',slash_1+1);

    std::string day_str = name.substr(0,2);
    std::string month_str = name.substr(slash_1+1,2);
    std::string year_str = name.substr(slash_2+1,4);

    int day = stoi(day_str);
    int month = stoi(month_str);
    int year = stoi(year_str);

    bool valid = Date::is_date(day, month, year);

    if (slash_1!=-1 and slash_2!=-1 and valid){
        birth = Date(day,month,year);
    }
    else{
        birth = Date();
    }

    return birth;
}

/* Name: to_string
 * Function: Prend en entrée une date appartenant à la classe Date
 * Renvoie une chaine de caractère permettant d'identifier la Date
*/
std::string Date::to_string(const Date& d){
    return std::to_string(d.day()) + "/" + std::to_string(d.month()) + "/" + std::to_string(d.year());
}
   

