// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>

using namespace std;
int main() {

   ofstream ofile("output.txt"); 
   ifstream ifile("romeoandjuliet");
   if(!ifile.is_open()){
       cerr << "Cannot open file" <<endl;
       return 1;
   }
   if(!ofile.is_open()){
       cerr << "Cannot create file" <<endl;
       return 1; 
   }
   string line;
   long long num = 0;
   while(!ifile.eof()){
       getline(ifile, line);
       ofile << num << "\t" << line << endl;
       num++;
   }
    
    ifile.close();
    ofile.close();
    return 0;
}

