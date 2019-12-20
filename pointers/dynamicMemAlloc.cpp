#include <iostream>

using namespace std;


int main(){
    int *int_ptr = nullptr;
    int_ptr = new int;
    cout << int_ptr << endl;
    delete int_ptr;

    size_t size = 0;
    double *temp_ptr = nullptr;

    cout << "HOW many temps?";
    cin >> size;

    temp_ptr = new double[size]; // allocates an array
    cout << temp_ptr << endl;
    delete [] temp_ptr;

    string hi = "hi";
    string &ref = hi; //alias
    cout << "hi's address" << &hi << endl;
    cout << "ref's address" << &ref << endl;

    


    return 0;
}
