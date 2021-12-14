#include <iostream>
#include "whatever.hpp"

int main() {
    {
        double x = 2;
        double y = 4;

        ::swap<double>(&x, &y);
        std::cout << "value of x : " << x << std::endl;
        std::cout << "value of y : " << y << std::endl;

        std::cout << "max value : " << ::max<double>(7, 9) << std::endl;
        std::cout << "min value : " << ::min<double>(7, 9) << std::endl;
    }
    {
        std::cout << "- - - - - - - - - subject main - - - - - - - - -\n";

        int a = 2;
        int b = 3;

        ::swap(&a, &b);
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
        std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

        std::string c = "chaine1";
        std::string d = "chaine2";

        ::swap<std::string>(&c, &d);
        ::max(c, d);
        
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min(c, d) = " << ::min<std::string>(c, d) << std::endl;
        std::cout << "max(c, d) = " << ::max<std::string>(c, d) << std::endl;
    }
}
