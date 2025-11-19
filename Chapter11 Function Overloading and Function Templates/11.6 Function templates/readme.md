## Introduction to C++ templates

= In C++, the template system was designed to simplify the process of creating functions (or classes) that are able to work with different data types.

Instead of manually creating a bunch of mostly-identical functions or classes (one for each set of different types), we instead create a single template. Just like a normal definition, a template definition describes what a function or class looks like. Unlike a normal definition (where all types must be specified), in a template we can use one or more placeholder types. A placeholder type represents some type that is not known at the time the template is defined, but that will be provided later (when the template is used).

Once a template is defined, the compiler can use the template to generate as many overloaded functions (or classes) as needed, each using different actual types!

The end result is the same -- we end up with a bunch of mostly-identical functions or classes (one for each set of different types). But we only have to create and maintain a single template, and the compiler does all the hard work to create the rest for us.

> Templates can work with types that didn’t even exist when the template was written. This helps make template code both flexible and future proof!

C++ supports 3 diff kind of templates

1. Type template parameters (where the template parameter represents a type).
2. Non-type template parameters (where the template parameter represents a constexpr value).
3. Template template parameters (where the template parameter represents a template).

### Naming template parameters

Preferrably to use single char T as to refer to `template` 


For example:
 ```c++
 template <typename T>
 T max(T x, Ty)
 {
    return (x<y) ? y:x;
 }
 ```
 
 