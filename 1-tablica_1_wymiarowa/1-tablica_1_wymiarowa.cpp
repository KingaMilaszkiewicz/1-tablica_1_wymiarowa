// 1-tablica_1_wymiarowa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main() {

    srand(time(0));
    int arr[N] = {};
    int x;
    int counter = 0;

    for (int i = 0; i < N; i++) {
        int randomNumber = rand() % (10) + 1;
        arr[i] = { randomNumber };
        // std::cout << randomNumber << ", ";
    }

    std::cout << "Podaj liczbe: ";
    std::cin >> x;

    for (int i = 0; i < N; i++) {
        if (arr[i] == x) {
            counter++;
        }
    }

    std::cout << "Twoja liczba wystapila " << counter << " razy w tabeli.";

    return 0;
}
