//print string in ZigZag Manner (vertical)
//GeeksforGeeks (https://www.geeksforgeeks.org/program-to-print-a-string-in-vertical-zigzag-manner/)
// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to print any string
// in zigzag fashion
void zigzag(string s, int rows)
{
	// Store the gap between the major columns
	int interval = 2 * rows - 2;

	// Traverse through rows
	for (int i = 0; i < rows; i++) {

		// Store the step value for each row
		int step = interval - 2 * i;

		// Iterate in the range [1, N-1]
		for (int j = i; j < s.length(); j = j + interval) {

			// Print the character
			cout << s[j];
			if (step > 0 && step < interval
				&& step + j < s.length()) {

				// Print the spaces before character
				// s[j+step]
				for (int k = 0; k < (interval - rows - i);
					k++)
					cout << " ";

				// Print the character
				cout << s[j + step];

				// Print the spaces after character
				// after s[j+step]
				for (int k = 0; k < i - 1; k++)
					cout << " ";
			}
			else {

				// Print the spaces for first and last rows
				for (int k = 0; k < (interval - rows); k++)
					cout << " ";
			}
		}
		cout << endl;
	}
}

// Driver Code
int main()
{
	// Given Input
	string s = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int rows = 9;

	// Function Call
	zigzag(s, rows);
}
