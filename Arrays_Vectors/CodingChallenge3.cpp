#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char *argv){

	vector<int> vec1, vec2;
	vector<vector<int>> vec_2d;
	
	vec1.push_back(10);
	vec1.push_back(20);

	cout << vec1.at(0) << " " << vec1.at(1) << " size: " << vec1.size();

	vec2.push_back(100);
	vec2.push_back(200);

	cout << vec2.at(0) << " " << vec2.at(1) << " size: " << vec2.size();
	
	vec_2d.push_back(vec1);
	vec_2d.push_back(vec2);

	for (int i = 0; i < vec_2d.at(0).size(); i++){
		cout << vec_2d.at(0).at(i) << " " << vec_2d.at(1).at(i) << " size: " << vec_2d.size();
	}




}


