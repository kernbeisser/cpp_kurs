#include <iostream>

#include "exercise2.h"

// Aufgabe 1
void push_back(int *&input_array, const unsigned int &size, const int &value)
{
    // mehr Speicher == neuer Heap-speicher
    int *tmp = new int[size + 1];

    // bisherige Werte
    for (size_t i = 0; i < size; i++)
    {
        tmp[i] = input_array[i];
    }

    // an dem neuen Index (3) den neuen Wert
    tmp[size] = value;

    // bisherigen Heap löschen
    delete[] input_array;

    // input_array zeigt jetzt auf den neuen Heap-Speicher
    input_array = tmp;
}

// Aufgabe 2
void pop_back(int *&input_array, const unsigned int &size)
{
    int *tmp = new int[size - 1];

    for (size_t i = 0; i < size - 1; i++)
    {
        tmp[i] = input_array[i];
    }

    delete[] input_array;

    input_array = tmp;
}