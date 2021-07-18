#include <stdio.h>

int maxProfit(int* prices, int pricesSize);

int main() {
    int prices[6] = {5, 1, 5, 3, 6, 4};
    int size = 6;

    printf("Max profit = %d\n", maxProfit(prices, size));
    return 0;
}
