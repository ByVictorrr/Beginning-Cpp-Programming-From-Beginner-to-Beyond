#include <iostream>
#include <vector>

using namespace std;

char get_input(){

	char input;
	bool correct_input = true;

	cout << "P - Print number\n"
		 << "A - Add number\n"	
		 << "M - Display mean of numbers\n"
		 << "S - Display the smallest number\n"
		 << "L - Display the largest number\n"
		 << "Q - Quit";
	cin >> input;


	while(!correct_input){
		if ( input == 'P' |  input == 'p'){
			input = 'P';
			correct_input = true;
		}else if (input == 'A' | input == 'a'){
			input = 'A';
			correct_input = true;
		}else if (input == 'M' | input == 'm'){
			input = 'M';
			correct_input = true;
		}else if (input == 'S' | input == 's'){	
			input = 'S';
			correct_input = true;
		}else if (input == 'L' | input == 'l'){
			input = 'L';
			correct_input = true;
		}else if (input == 'Q' | input == 'q'){
			input = 'Q';
			correct_input = true;
		}else{
			correct_input = false;
			cout << "Unkown selection, please try again";
		}
				
	}
	return input;
}
void display_items(vector <int> list){

	cout << "[ ";
	for (auto item: list){
		cout << item << " ";
	}
	cout << "]" << endl;
}
int get_mean(vector <int> list){
	int mean = 0;
	for(int i = 0; i < list.size(); i++){
		mean += list.at(i);
	}	
	return mean/list.size();
}
int get_smallest(vector <int> list){

	int smallest = list.at(0);
	for (int i = 1; i < list.size(); i++)
		if (smallest > list.at(i)){
			smallest = list.at(i);
		}

		return smallest;
}
int get_largest(vector <int> list){

	int largest = list.at(0);
	for (int i = 1; i < list.size(); i++)
		if (largest < list.at(i))
			largest = list.at(i);

		return largest;
}



int main(){
	vector<int> list;
	char input;
	int add = 0;

	while(1){
		switch((input = get_input())){
			case 'P':
				// display all elements in list
				display_items(list);
				break;
			case 'A':
				// add int to the list
				cin >> add;
				list.push_back(add);
				break;
			case 'M':
				cout << "The mean is:  " << get_mean(list) << endl;
				break;
				// calculate the mean of list
			case 'S':
				cout << "The smallest is: " << get_smallest(list);
				break;
				// display the smallest element
			case 'L':
				cout << "The largest is: " << get_largest(list);
				break;
				// display the largest element
			case 'Q':
				break;
		}





	}

}





