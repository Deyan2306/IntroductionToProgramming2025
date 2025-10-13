#include <iostream>

int main()
{
    int myAge = 69;
    std::cout 
        << "Deyan Sirakov\n" 
        << myAge 
            << " -> " 
        << &myAge 
            << " -> " 
        << sizeof(myAge);
}
