#include <iostream>

using namespace std;
int main(){
	int ageEligible = 18;
	int ageUser;
	cout << "Please enter your age:\n-> ";
	cin >> ageUser;
	if(ageUser >= ageEligible){
		cout << "You are eligible to vote!" << endl;
	}

	else{
		cout << "You are not eligible to vote." << endl;
	}
	
	return 0;
}
