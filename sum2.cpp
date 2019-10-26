#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		std::cout << "not correct execution. program exit." << std::endl;
		return 100;
	}

	int i = argc - 2;
	int sum = atoi(argv[1]), sub = atoi(argv[1]), mul = atoi(argv[1]), div = atoi(argv[1]), max = atoi(argv[1]), min = atoi(argv[1]);

	for (i; i > 0; i--)
	{
		int new_value = atoi(argv[i + 1]);
		sum += new_value;
		sub -= new_value;
		mul *= new_value;
		div /= new_value;
		max = (max > new_value) ? max : new_value;
		min = (min > new_value) ? new_value : min;
	}
	std::cout << "sum : " << sum << std::endl;
	std::cout << "sub : " << sub << std::endl;
	std::cout << "mul : " << mul << std::endl;
	std::cout << "div : " << div << std::endl;
	std::cout << "max : " << max << "min : " << min << std::endl;
	return 0;
}