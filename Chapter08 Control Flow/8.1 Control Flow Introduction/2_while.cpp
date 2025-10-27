#include <stdio.h>

int main() {
    int i = 1; // This is the initialization. We start from number 1.

    while (i <= 10) { // This is the condition. As long as i is less than or equal to 10, the loop will keep running.
        printf("%d\n", i); // Print the current number.
        i++; // Increment the number. This is important! Without this, the loop would run forever because i would always be 1 and hence always less than 10.
    }

    return 0;
}