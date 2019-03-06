
#include "Date.hpp"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    //Si on a pas assez d'arguments
    if(argc<4){
        std::cerr << "Error 1 : Running out of arguments" << std::endl;
        return 1;
        }

    Date birth = Date::from_string(argv[2]);

    std::cout << birth.to_string(birth) << std::endl ;
    return 0;
}
