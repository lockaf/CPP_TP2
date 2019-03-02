#include "PROJ-1.hpp"
#include "Date.hpp"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//Constructeurs
Date::Date()
	:day(0),month(0),year(0) {}

Date::Date(int day, int month, int year) //Faut-il mettre dautres noms? 
	:day(this.day), month(this.month), year(this.year) {}

//Getteurs
const int& Date::day() const {return day}
const int& Date::month() const {return month}
const int& Date::year() const {return year}

//Setteurs
int& Date::day() {return day}
int& Date::month() {return month}
int& Date::year() {return year}

static bool is_date(int day, int month, int year){
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
   
