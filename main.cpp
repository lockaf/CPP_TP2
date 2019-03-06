#include "Date.hpp"
#include "person.hpp"
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
    std::string date_str = argv[2];
    Date birth = Date::from_string(argv[2]);
    Person Louis = Person(birth);

    std::cout << Louis.get_age(Date(6,3,2019)) << std::endl ;
    return 0;
}
