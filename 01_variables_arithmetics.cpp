#include <iostream>

int main()
{
    int file_size; // declare
    file_size = 100; // initialize
    
    int f_size = 1000;

    const double pi = 3.14;

    // std::cout << file_size;
    // std::cout << f_size;    

    int x = 10;
    int y = 12;
    int z = x + y;
    double p = 3; // needs to be double in order to be proper division
    double q = p/x;
    
    std::cout << z << std::endl
              << z << " and " << q;

    return 0;
}
