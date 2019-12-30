#include <iostream>
#include <fstream>

void read_file(std::string file_name) {
    //---- YOU WRITE YOUR CODE BELOW THIS LINE----
    std::string name;
    std::ifstream i_file(file_name);
    if(!i_file.is_open()){
        std::cerr << "Error opening file" << std::endl;
    }else{
        while(!i_file.eof()){
            i_file >> name;
            std::cout << name << std::endl;
        }
    }

   
   
    //---- YOU WRITE YOUR CODE ABOVE THIS LINE----
}