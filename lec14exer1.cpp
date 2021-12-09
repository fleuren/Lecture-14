#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
array<int, 20> gradeInput = {};
cout << "Please input the marks of 20 students, ranging from 0 to 100" << endl;
	
	for(int i = 0; i < 20; i++){
		cin >> gradeInput[i];
}
sort(gradeInput.begin(), gradeInput.end());
cout << "Ascending order: " << endl;
for (int numx : gradeInput){
		cout << numx << " " << endl;
}
reverse(gradeInput.begin(), gradeInput.end());
cout << endl;
cout << "Descending order: " << endl;
for (int numy : gradeInput){
	cout << numy << " " << endl;
}


return 0;
}