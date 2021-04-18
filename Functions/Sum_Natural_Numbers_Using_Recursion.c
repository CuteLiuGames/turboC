// Sum of Natural Numbers Using Recursion
// Output
// Enter a positive integer: 20
// Sum = 210


#include <stdio.h>
int addNumbers(int n);
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", addNumbers(num));
    return 0;
}

int addNumbers(int n) {
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}
Output

Enter a positive integer: 20
Sum = 210