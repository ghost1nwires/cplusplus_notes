## Implicit type conversion

To throwback, in chapter 4, few important notes

1. Process of converting data from one type to another type is called "type conversion"
2. Implicit type conversion is perfomed automatically by the compiler when one data type is required, but a different data type is supplied
3. Explicit type conversion is requested by using a cast operator, such as static_cast.
4. When converting a value to another type of value, the conversion process produces a temporary object of the target type that holds the result of the conversion.

### Why conversions are needed

Value of objects stored as a sequences of bits, and the data type of the object tells the compiler how to interpret those bits into meaningful values. Different data types may represent the "same" value differently. 

