#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ROWS 2
#define COLS 3
#define ROWS2 3
#define COLS2 2

int array1[ROWS][COLS];
int array2[ROWS2][COLS2];
int sonucMatrix[ROWS][COLS2]; 

void random1();
void print1();
void random2();
void print2();
void carpimMatrix();
void printCarpim();

int main() {
    srand(time(NULL));

    printf("*****1. Matris*****\n");
    random1();
    print1();

    printf("\n******2. Matris*****\n");
    random2();
    print2();

    printf("\n*****Carpimlari*****\n");
    carpimMatrix();
    printCarpim();

    return 0;
}

void random1() {
    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < COLS; j++) {
            array1[i][j] = rand() % 9 + 1;
        }
    }
}


void print1() {
    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < COLS; j++) {
            printf("%d\t", array1[i][j]);
        }
        printf("\n");
    }
}

void random2() {
    for (size_t i = 0; i < ROWS2; i++) {
        for (size_t j = 0; j < COLS2; j++) {
            array2[i][j] = rand() % 9 + 1;
        }
    }
}

void print2() {
    for (size_t i = 0; i < ROWS2; i++) {
        for (size_t j = 0; j < COLS2; j++) {
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    }
}

void carpimMatrix() {
    for (size_t i = 0; i < ROWS; i++) { 
        for (size_t j = 0; j < COLS2; j++) { 
            sonucMatrix[i][j] = 0;
            for (size_t k = 0; k < COLS; k++) { 
                sonucMatrix[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }
}

void printCarpim() {
    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < COLS2; j++) {
            printf("%d\t", sonucMatrix[i][j]);
        }
        printf("\n");
    }
}









































