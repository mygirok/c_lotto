#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand((unsigned int)time(0));
	// Lotto Program
	int iLotto[45] = {};
	
	// Put numbers from 1 to 45 in order. 
	for (int i = 0; i < 45; ++i)
	{
		iLotto[i] = i + 1;
	}

	// Swap algorithm 
	/*int iNum1 = 1, iNum2 = 2, iNum3;
	iNum3 = iNum1;
	iNum1 = iNum2;
	iNum2 = iNum3;*/
	
	// For swap
	int iTemp, idx1, idx2;
	// Shuffle 1000 times.  
	int iShuffle = 1000;
	for (int i = 0; i <  iShuffle; ++i)
	{
		idx1 = rand() % 45;
		idx2 = rand() % 45;

		iTemp = iLotto[idx1];
		iLotto[idx1] = iLotto[idx2];
		iLotto[idx2] = iTemp;
	}

	for (int i = 0; i < 6; ++i)
	{ 
		// Ascending order
		for (int j = 0; j < 6 - i; ++j)
		{
			if(iLotto[j] > iLotto[j + 1]) {
				iTemp = iLotto[j];
				iLotto[j] = iLotto[j + 1];
				iLotto[j + 1] = iTemp;
			}
		}
	}

	for (int i = 0; i < 6; ++i)
	{ 
		cout << iLotto[i] << "\t"; 
	}

	cout << "bonus Number : " << iLotto[6] << endl;


	return 0;
}
