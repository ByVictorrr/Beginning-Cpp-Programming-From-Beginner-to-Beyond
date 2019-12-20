#include <iostream>
#include <string>
#include <math.h>

using namespace std;


// 1, 3, 5 , 7, 9, 11, 
// numb of chars per row is odd 

int get_chars_per_row(int row){
	return 2*row+1;
}
int main(){


	string input;
	getline(cin, input);

	int max_chars = 2*input.length()+1, start = ceil(max_chars/2), middle;
	int numAfterMid = 0;
	for (int row = 0; row < input.length()+1; row++){
		cout << string(start, ' ');
		middle = ceil((2*row+1)/2);
		for (int chars = 0; chars < 2*row+1; chars++){
			// Case - where outputing getting closer to mid
			if (chars < middle){
				cout << input[chars];
			}else if (chars == middle){
				numAfterMid = 2;
				cout << input[chars - numAfterMid];
			}else{
				numAfterMid+=2;
				cout << input[chars-numAfterMid];	
			}
		}	
		start--;
		cout << endl;
		}
}
