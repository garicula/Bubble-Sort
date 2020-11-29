// Garrick Morley
// CPSC 200 Project 3 B
// This program does a bubble sort

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>
#include <fstream>
#include <cassert>
using namespace std;

//compare 1st and 2nd items, swap if out of order
//compare 2nd and 3rd items, swap if out of order...

main()
{
	//decalre variables
	double score;
	int i = 0;
	int count = 0;
	double list[1000];
	bool anyChanges = false;
	int holder = 0;
	int a = 0;
	int alpha = 0;
	
	//open file
	ifstream input;
	input.open("scores");
	
	//check if file opened correctly
	if (input.fail())
	cout << "File did not open correctly" << endl;
	
	//input file into array
	while (input >> score)
	{
		list[i] = score;
		i++;
		count++;
	}
	
	//sort numbers in array
	for(int a = 0; a < count ; a++)
	{
		for(int b = a + 1; b < count; b++)
			if(list[a] > list[b])
			{
				holder = list[b];
				list[b] = list[a];
				list[a] = holder;
			}
	}
	
	//print the array
	cout << "Array in ascending order: " << endl;
	while (alpha < count)
	{
		cout << list[alpha] << endl;
		alpha++;
	}
}
