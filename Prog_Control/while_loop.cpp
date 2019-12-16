#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    
    int count = 0, i=0;
    while(count < vec.size()){
        if(vec.at(count) == -99)
            break;
        count++;
    }
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}
