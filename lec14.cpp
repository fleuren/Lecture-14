#include <iostream>
#include <array>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	//sample array
	/*array<int, 5> arr1 = {9,7,5,3,1};*/

	//stnlib array methods
	/*
	array<string, 4> arr = {"Mars Bar", "Snickers", "Bounty", "Wispa"};
	cout << arr.at(1) << endl;
	*/
//sorting algorithm sample
/*	
array<int, 5> numbers = {33, 5, 7, 99, 83};
sort(numbers.begin(), numbers.end());
for(int num : numbers){
	cout << num << " ";
}
*/
//reverse sorting array algorithm
/*
array<int, 5> numbers = {33, 5, 7, 99, 83};
sort(numbers.begin(), numbers.end());
reverse(numbers.begin(), numbers.end());
for(int num : numbers){
	cout << num << " ";
}
*/
//rand function
/*
int ranArr[10];

for (int i = 0; i < 10; i++){
	ranArr[i] = rand() % 50;
	cout << ranArr[i] << endl;
}
*/

/*int ranArr[1000];
int x = 0;
for (int i = 0; i < 1000; i++){
	ranArr[i] = rand() % 100;
if (ranArr[i] == 6)
	{
		cout << ranArr[i] << endl;
		x++;
	}
	else
	{
		continue;
	}
}
cout << "6s: " << x;
*/
//output largest number
array<int, 10> numbers = {};
cout << "Enter integers " << ":" << endl;
for(int i = 0; i < 10; i++){
cin >> numbers[i];
}
sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    cout << numbers.at(0);

return 0;
}


