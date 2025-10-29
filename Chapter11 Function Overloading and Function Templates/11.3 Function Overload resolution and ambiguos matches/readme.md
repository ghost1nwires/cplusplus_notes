#### Throwback

From last chapter, we knew that if we not properly differentiated from the other overloads of the same name, it will cause compile error.

But..

Having set of differentiated overloaded function is only half way there. When function calling made, the compiler must ensure matching function declaration can be found.

Since a function call can only resolve to one of them, the compiler has to determine which overloaded function is the best match. The process of matching function calls to a specific overloaded function is called ***overload resolution****.

### Ambiguous match

With non overloaded functions, each function call will resolve to a function, but if nor match found the compiler will issue compile error

```
void foo()
{
}

int main()
{
     foo(); // okay: match found
     goo(); // compile error: no match found

     return 0;
}
```

