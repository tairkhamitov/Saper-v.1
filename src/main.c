#include <stdio.h>
#include "game.h"

int main() {
    char pole[N][N];
    char opened[N][N] = {0};

    init_pole(pole);

    int x, y;

    while (1) {
        show_pole(pole,opened);

        printf("Enter the coordinates (line 1-5): ");
        scanf("%d", &x);
        printf("Enter the coordinates (column 1-5): ");
        scanf("%d", &y);

        if (x < 1 || x > N || y < 1 || y > N) {
            printf("Error! Incorrect coordinates\n");
            continue;
        }

        x--; y--;

        if (is_mine(pole, x, y)) {
            printf("\nYou stepped on a land mine! Losing.\n\n");
            show_mines(pole);
            break;
        }

        open_cell(pole, opened, x, y);

        if (check_win(pole, opened)) {
            printf("\nYou won!\n\n");
            break;
        }
    }

    return 0;
}