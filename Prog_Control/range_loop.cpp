#include <vector>
using namespace std;

int count_divisible() {
    
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    //---- WRITE YOUR CODE BELOW THIS LINE----
    
    int count = 0;
    for(auto v: vec){
        if (v % 3 == 0 | v%5==0)
            count++;
    
    }
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT CHANGE THE CODE BELOW THIS LINE----
    return count;
}
