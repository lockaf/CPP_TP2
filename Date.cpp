#include "PROJ-1.hpp"
#include "Date.hpp"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;



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
   
