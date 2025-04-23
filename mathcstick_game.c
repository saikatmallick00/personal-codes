#include <stdio.h>
int main() {
    int matchsticks = 21, user, computer;
    while (matchsticks > 1) {
        printf("Matchsticks left: %d\n", matchsticks);
        printf("Pick 1 to 4 matchsticks: ");
        scanf("%d", &user);
        if (user < 1 || user > 4) {
            printf("Invalid choice. Try again.\n");
            continue;
        }
        computer = 5 - user;
        printf("Computer picks: %d\n", computer);
        matchsticks = matchsticks - user - computer;
    }
    printf("Only 1 matchstick left. You have to pick it. You lose!\n");
    return 0;
}
