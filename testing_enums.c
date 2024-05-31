#include <stdio.h>

int main() {
    enum options { yes = 'y', no = 'n', cancel = 'c' };
    enum options choice;

    printf("Enter your choice (y/n/c): ");
    choice = getchar();

    switch (choice) {
        case yes:
            printf("You chose yes.\n");
            break;
        case no:
            printf("You chose no.\n");
            break;
        case cancel:
            printf("You chose cancel.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}