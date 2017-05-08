

#include <iostream>

int val = 1;
int val2 = 2;

int* valPtr = &val;
int& ValRef = val;

void PrintVals()
{
	std::cout << "Values\n";
	std::cout << "Val: " << val << " Val2:" << val2 << " valPtr: " << *valPtr << " ValRef: " << ValRef << std::endl;

	std::cout << "Address\n";
	std::cout << "Val: " << &val << " Val2:" << &val2 << " valPtr: " << valPtr << " ValRef: " << &ValRef << std::endl;
}
int main()
{

	PrintVals();
	valPtr = &val2;
	PrintVals();
	*valPtr = 3;
	PrintVals();
	ValRef = 4;
	PrintVals();
	return 0;
}