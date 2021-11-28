Headers:
			#include <iostream>
			#include <array>
			#include <algorithm>
			using namespace std;

Code:
Input taken from one array:
			    int main()
			    {
			      array<int, 10> numbers = {};
			      cout << "Enter integers " << ":" << endl;
			      for(int i = 0; i < 10; i++){
			      cin >> numbers[i];
			    }
			      sort(numbers.begin(), numbers.end()); // sorting algorithm code
Outputs of previous code:
			      cout << "The smallest number is: ";
			      cout << numbers.at(0) << endl;
			      cout << "...and the largest number is: ";
			      cout << numbers.at(9) << endl;
			    return 0;
			    }

Input taken from two arrays:

Smallest number

			  array<int, 10> numx = {};
				cout << "This program will display the smallest number from your inputted range." << endl;
				cout << "For the smallest number output, please enter your desired integers " << ":" << endl;
				for(int i = 0; i < 10; i++){
				cin >> numx[i];
			}
				sort(numx.begin(), numx.end()); // sorting algorithm code
				cout << "The smallest number is: ";
				cout << numx.at(0) << endl;

Largest number
				array<int, 10> numy = {};
				cout << "This program will display the smallest number from your inputted range." << endl;
				cout << "Enter integers " << ":" << endl;
				for(int j = 0; j < 10; j++){
				cin >> numy[j];
			}
				sort(numy.begin(), numy.end()); // sorting algorithm code
				cout << "The largest number is: ";
				cout << numy.at(9) << endl;
			return 0;
			}	

Author's notes

note: two versions of the same program is written, one which takes an input from one array,
and another that takes an input from two different arrays.

additionally, each program is separated by titles, 
