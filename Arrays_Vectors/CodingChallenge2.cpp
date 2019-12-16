#include <vector>
using namespace std;

vector<int> use_vector() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    
	vector<int> vec = {10,20,30,40,50};
	vec.at(0) = 100;
	vec.at(vec.size()-1) = 1000;

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----NO NOT MODIFY THE CODE BELOW THIS LINE----
    return vec;
}
