#include "game.h"
#include <stdio.h>

void init_pole(char pole[N][N]) {
    char temp[N][N] = {
        {0,1,0,0,1},
        {1,0,1,0,0},
        {0,1,0,1,1},
        {1,0,0,0,1},
        {0,0,1,0,0}
    };

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            pole[i][j] = temp[i][j];
}

void show_pole(const char pole[N][N], const char opened[N][N]) {
    printf("\n   ");
    for (int col = 0; col < N; col++) {
        printf(" %d", col+1);
    }
    printf("\n");

    for (int row = 0; row < N; row++) {
        printf(" %d ", row+1);
        for (int col = 0; col < N; col++) {
            if (opened[row][col]) {
                printf(" %c", opened[row][col]);
            } else {
                printf(" #");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void show_mines(const char pole[N][N]) {
    printf("Mines:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", pole[i][j]);
        }
        printf("\n");
    }
}

void open_cell(const char pole[N][N], char opened[N][N], int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= N) return;
    if (opened[x][y]) return;

    int count = 0;

 
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                if (pole[nx][ny] == 1) count++;
            }
        }
    }

    opened[x][y] = '0' + count;
}

int is_mine(const char pole[N][N], int x, int y) {
    return pole[x][y] == 1;
}

int check_win(const char pole[N][N], const char opened[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (pole[i][j] == 0 && opened[i][j] != '*')
                return 0;
    return 1;
}