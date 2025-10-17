#include <iostream>

int main()
{
	int x { 3 + 4 };
	std::cout << x << '\n';

    int z { 8 }; //In this program, variable z is defined and initialized, but it is never used anywhere, so it has no effect on the program’s behavior. Dead code elimination would remove the definition of z.


    std::cout << 8 << '\n'; // when the variable  is remove, program no longer need it
	return 0;
}