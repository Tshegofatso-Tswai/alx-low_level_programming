#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 7) {
        printf("Usage: %s n1 n2 n3 n4 n5 bonus\n", argv[0]);
        return 1;
    }

    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    int n3 = atoi(argv[3]);
    int n4 = atoi(argv[4]);
    int n5 = atoi(argv[5]);
    int bonus = atoi(argv[6]);

    // Define the winning numbers (you can modify these)
    int winning_numbers[6] = {5, 15, 25, 35, 45, 10};

    // Check if the provided numbers match the winning numbers
    int match_count = 0;
    for (int i = 0; i < 5; i++) {
        if (n1 == winning_numbers[i] || n2 == winning_numbers[i] || n3 == winning_numbers[i] ||
            n4 == winning_numbers[i] || n5 == winning_numbers[i]) {
            match_count++;
        }
    }

    if (match_count == 5 && bonus == winning_numbers[5]) {
        printf("You win the jackpot!\n");
    } else {
        printf("Sorry, you did not win the jackpot.\n");
    }

    return 0;
}

