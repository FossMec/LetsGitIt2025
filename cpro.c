#include <stdio.h>

int main() {
    int n, sum = 0;

        // 1. Read input
            printf("Enter a positive integer n: ");
                scanf("%d", &n);

                    // Input validation (Important to prevent errors)
                        if (n < 0) {
                                printf("Please enter a positive integer.\n");
                                        return 1; // Indicate an error
                                            }


                                                // 2. Calculate the sum using a for loop
                                                    for (int i = 1; i <= n; i++) {
                                                            sum += i;  // sum = sum + i;
                                                                }

                                                                    // 3. Print the result
                                                                        printf("The sum of the first %d natural numbers is: %d\n", n, sum);

                                                                            return 0; // Indicate successful execution
                                                                            }

                                                                            