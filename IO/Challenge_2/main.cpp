// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main() {
    
    std::string key, name, answers;
    float avg;
    int score, num=0;
    int i=0;
    // step 1 - file processing
    std::ifstream i_file("responses.txt");
    if(!i_file.is_open()){
        std::cerr << "error cannot open file" << std::endl;
        return 1;
    }else{
        // process data
        while(!i_file.eof()){
            // get the key
           if(i==0) {
               i_file >> key;
               cout << "Student" << std::setw(10) <<"Score" << endl << std::string(20, '-') << endl;
           }else{
               // for the names
               if(i % 2 != 0){
                   i_file >> name;
                   num++;
                // for the ans
               }else{
                   i_file >> answers;
               }
           }
           // compare answers with key
           if(i %2 == 0 && i > 0){
               for(int j=0; j < key.size(); j++){
                   if(key[j] == answers[j]){
                       score++;
                   }
               }
               avg+=score;
             // print name and score
            cout << name << std::setw(10) << score << endl;
            score=0;
           }
            i++;
        }
        cout << string(20, '-') << endl << "Average Score " << static_cast<double>(avg)/num << endl;
        //print avg
    }
    i_file.close();
    
    
    return 0;
}

