## Validating Input

Process of checking whether user input conforms to what program will execute is called *input validation*

There are 3 basic ways to do input validation:

- Prevent the user from typing invalid input in the first p
lace.
Post-entry (after the user types):

- Let the user enter whatever they want into a string, then validate whether the string is correct, and if so, convert the string to the final variable format.
- Let the user enter whatever they want, let std::cin and operator>> try to extract it, and handle the error cases.