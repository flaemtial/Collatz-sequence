
#include "stdafx.h"
#include <iostream>

//function to test whether if its even or odd number
int parity_test(int n) // 0 - even || 1 - odd
{
	if (n % 2 == 0)
	{
		n = 0;
	}
	else 
	{
		n = 1;
	}
	return n;
}

//arithmetic function
int case_arith(int input_x, int par_res)
{
	if (par_res == 0)
	{
		input_x = input_x / 2;
	}
	else if (par_res == 1)
	{
		input_x = (3 * input_x) + 1;
	}
	return input_x;
}

int collatz(int k) //calls both parity_test and case_arith
{
	int parity_result = parity_test(k);
	int internal_counter;				//counts number of chains	
	int case_res = case_arith(k, parity_result);
	for(internal_counter; internal_counter = 0; )
}

int main()
{
	int count_length; //var to count how many processes it has been through
	int container;
	for (int i = 2; i < 1000001; i++)
	{
		;
	}
    return 0;
}
