## Implicit type conversion

Consider the following program:

```c++
#include <iostream>

void print(double x) // print takes a double parameter
{
	std::cout << x << '\n';
}

int main()
{
	print(5); // what happens when we pass an int value?

	return 0;
}
```

In the above example, the `print()` function has a parameter of type `double` but the caller is passing in the value `5` which is of type `int`. What happens in this case?

In most cases, C++ will allow us to convert values of one fundamental type to another fundamental type. The process of converting data from one type to another type is called type conversion. Thus, the `int` argument `5` will be converted to `double` value `5.0` and then copied into parameter `x`. The `print()` function will print this value, resulting in the following output:

5
A reminder

> By default, floating point values whose decimal part is 0 print without the decimal places (e.g. 5.0 prints as 5).