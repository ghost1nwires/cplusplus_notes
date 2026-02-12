# Numeric Conversion

In the previous lesson (10.2 -- Floating-point and integral promotion), we covered numeric promotions, which are conversions of specific narrower numeric types to wider numeric types (typically int or double) that can be processed efficiently.

There are 5 generic type of conversions.

1. Converting an integral type to any other integral type (excluding integral promotions):

```c++
short s = 3; // convert int to short
long l = 3; // convert int to long
char ch = s; // convert short to char
unsigned int u = 3; // convert int to unsigned int
```

2. Converting a floating point type to any other floating point type (excluding floating point promotions):

```c++
float f = 3.0; // convert double to float
long double ld = 3.0; // convert double to long double
```

3. Converting a floating point type to any integral type:

```c++
int i = 3.5; // convert double to int
```

4. Converting an integral type to any 
```c++
floating point type:
double d = 3; // convert int to double
```

5. Converting an integral type or a floating point type to a bool:

```c++
bool b1 = 3; // convert int to bool
bool b2 = 3.0; // convert double to bool
```

## Safe and unsafe numeric conversion

Unlike numeric promotions (which are always value-preserving and thus “safe”), many numeric conversions are unsafe. An unsafe conversion is one where at least one value of the source type cannot be converted into an equal value of the destination type.

Numeric conversions fall into three general safety categories:

1. *Value-preserving conversions* are safe numeric conversions where the destination type can exactly represent all possible values in the source type.
For example, `int` to `long` and `short` to `double` are safe conversions, as the source value can always be converted to an equal value of the destination type.

```c++
int main()
{
    int n { 5 };
    long l = n; // okay, produces long value 5

    short s { 5 };
    double d = s; // okay, produces double value 5.0

    return 0;
```

2. *Reinterpretive conversions* are unsafe numeric conversions where the converted value may be different than the source value, but no data is lost. Signed/unsigned conversions fall into this category.
For example, when converting a signed int to an unsigned int:

```c++
int main()
{
    int n1 { 5 };
    unsigned int u1 { n1 }; // okay: will be converted to unsigned int 5 (value preserved)

    int n2 { -5 };
    unsigned int u2 { n2 }; // bad: will result in large integer outside range of signed int

    return 0;
}
```
In the case of `u1`, the signed int value `5` is converted to unsigned int value `5`. Thus, the value is preserved in this case.

In the case of `u2`, the signed int value `-5` is converted to an unsigned int. Since an unsigned int can’t represent negative numbers, the result will be modulo wrapped to a large integral value that is outside the range of a signed int. The value is not preserved in this case.

3. *Lossy Conversion* are unsafe numeric conversions where data may lost during the conversion

For example, `double` to `int` is a conversion that may result in data loss:
```c++
int i = 3.0; // okay: will be converted to int value 3 (value preserved)
int j = 3.5; // data lost: will be converted to int value 3 (fractional value 0.5 lost)
```


Conversion from `double` to `float` can also result in data loss:

```c++
float f = 1.2;        // okay: will be converted to float value 1.2 (value preserved)
float g = 1.23456789; // data lost: will be converted to float 1.23457 (precision lost)
```
| Note: **float** =   24 bits ≈ 7.2 decimal digits of precision. That means a float can reliably store roughly 7 significant decimal digits.

| Note: **double** = double has 52 fraction bits ≈ 15–16 decimal digits).
Make float literals explicit with f (e.g., 1.2f) to avoid implicit double→float conversions 