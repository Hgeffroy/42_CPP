#include <iostream>
#include <cstdlib>
#include <Array.hpp>

#define MAX_VAL 20
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
	}

	//Check
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

	std::cout << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	std::cout << std::endl;
    delete [] mirror;

	/*---------------------------------------------------------------------------*/

	Array<char> numbersb(MAX_VAL);
	char* mirrorb = new char[MAX_VAL];
	for (int i = 0; i < MAX_VAL; i++)
	{
		const char value = rand() % 127;
		numbersb[i] = value;
		mirrorb[i] = value;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "numbersb[" << i << "] = " << numbersb[i] << std::endl;
	}

	//Check
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirrorb[i] != numbersb[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	delete [] mirrorb;


    return 0;

}