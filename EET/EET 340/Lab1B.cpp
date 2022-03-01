#include <iostream>
using namespace std;

int main(){
	int total_num=5, element, sum=0, average;

	cout << "Enter 5 integer numbers and press enter" << endl;
	for (int i=0; i < total_num; i++){
		cin >> element;
		sum+=element;
	}

	average=sum/total_num;
	cout << "The average value is: " << average << endl;

	return 0;
}
