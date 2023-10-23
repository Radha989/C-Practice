#include <stdio.h>

int main() {
    int arr[20];
    int searchElement;
    int count = 0;

    // Input values into the array
    printf("Enter 20 values into the array:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    // Find the number of occurrences
    for (int i = 0; i < 20; i++) {
        if (arr[i] == searchElement) {
            count++;
        }
    }

    // Display the result
    printf("The element %d occurs %d times in the array.\n", searchElement, count);

    return 0;
}
