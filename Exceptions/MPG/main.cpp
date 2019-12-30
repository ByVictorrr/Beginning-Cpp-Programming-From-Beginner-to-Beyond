#include <iostream>

int main(){
    int miles, gallons;
    double mpg;
    std::cout << "Enter the miles drivin: ";
    std::cin >> miles;
    std::cout << "Enter the miles drivin: ";
    std::cin >> gallons;

    try{
        if(gallons == 0){
            throw 0;
        }
        mpg = static_cast<double>(miles)/gallons;
        std::cout << "Result: " << mpg << std::endl;

    }catch(int &ex){
        std::cerr << " Sorry, you can not divide by zero " << std::endl;
    }

    std::cout << " Bye" << std::endl;
    return 0;

}