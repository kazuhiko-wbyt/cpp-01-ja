#include <iostream>



int main(){

    float inputNumber;
    std::cout << "Input number " << std::endl;
    std::cin >> inputNumber;
    std::cout << inputNumber << std::endl;

    if (inputNumber > 0)
    {
       std::cout << "Input number is more than 0 " << std::endl;     
    }

    else if (inputNumber < 0)
     {
    std::cout << "Input number is less than 0 " << std::endl;     
    }

    else
    {
    std::cout << "Input number is 0 " << std::endl;
    }
    }
