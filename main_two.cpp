# include <iostream>
#include <string>
namespace N {
    std::string nameDima = "Dimcha";
}

int main (){

   
    using N::nameDima;

    std::cout << nameDima << std::endl;

    return 0;
}
