## Function Template Instantation

Apa tu nyah?

The process of creating functions (with specific types) from function templates (with template types) is called ***function template instantiation**** (or ***instantiation*** for short). When a function is instantiated due to a function call, it’s called ***implicit instantiation***. A function that is instantiated from a template is technically called a ***specialization***, but in common language is often called a ***function instance***. The template from which a specialization is produced is called a ***primary template***.

> pening nyah

### When to use and how

To use our max<T> We can use like this 

```c++
max<actual_type>(arg1, arg2); // actual_type is some actual type, like int or double
```

When the compiler encounters the function call max<int>(1, 2), it will determine that a function definition for max<int>(int, int) does not already exist. Consequently, the compiler will implicitly use our max<T> function template to create one.

### Template argument deduction

> btw p/s note for myself :  Parameters are inside the function definition, while arguments are used when you call it.

### Instantiated functions may not always compile

### Instantiated functions may not always make sense semantically

### Function templates and default arguments for non-template parameters

### Generic programming

Because template types can be replaced with any actual type, template types are sometimes called generic types. And because templates can be written agnostically of specific types, programming with templates is sometimes called generic programming. Whereas C++ typically has a strong focus on types and type checking, in contrast, generic programming lets us focus on the logic of algorithms and design of data structures without having to worry so much about type information.

