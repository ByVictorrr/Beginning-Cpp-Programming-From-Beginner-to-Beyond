// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>

using namespace std;

long num_string_in_line(string line, string sword){
    int s_len = sword.size(), j=0, count = 0;
    long num=0;
    for(int i = 0,j=0; i < line.size(); i++){
        if(line[i] == sword[j]){
            count++;
        }else{
            // not a consistent find so rst 
            j=-1;
        }
        // sword was found in line
        if(count == s_len){
            num++;
            count=0;
        }

        // rst sword pointer
        if(j == s_len-1){
            j=0;
        }else{
            j++;
        }
    }
    return num;
}


int main() {
    
    ifstream ifile("romeoandjuliet.txt");
    string sword, line;
    size_t pos;
    long count;

    cout << "Enter the substring to search for: ";
    cin >> sword;

    if(!ifile.is_open()){
        cerr << "cannot open file" << endl;
        return 1;
    }

    //Step 1 - go through each line see if its a substring of the line
    while(!ifile.eof()){
        // step 2 - get line
        getline(ifile, line);
        pos=line.find(sword);
        // check if its a match
        if(pos != string::npos){
            // check how many occurances there are
            count+=num_string_in_line(line, sword);
        }
    }

    cout << count << " matches found" << endl;

    ifile.close();

    return 0;
}

