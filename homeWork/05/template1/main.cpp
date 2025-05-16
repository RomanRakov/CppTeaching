#include "template.hpp"
#include <iostream>

using namespace std;

int main(){
    std::cout << "fibonacci<6>() = " << fibonacci<6>() << std::endl;
    return 0;
}