#include <stdio.h>

float knapsack(int size, float weight[], float value[], float capacity){
    float ratio[size];
    int i, j;
    float temp;
    float profit = 0.0f;

    for (i = 0; i < size; i++){
        ratio[i] = value[i] / weight[i];
    }

    /* sort by ratio (value/weight) in descending order */
    for (i = 0; i < size; i++){
        for (j = i + 1; j < size; j++){
            if (ratio[i] < ratio[j]){
                temp = ratio[i]; ratio[i] = ratio[j]; ratio[j] = temp;

                temp = weight[i]; weight[i] = weight[j]; weight[j] = temp;

                temp = value[i]; value[i] = value[j]; value[j] = temp;
            }
        }
    }

    for (i = 0; i < size; i++){
        if (capacity >= weight[i]){
            capacity -= weight[i];
            profit += value[i];
        } else {
            if (capacity > 0.0f){
                profit += value[i] * (capacity / weight[i]);
                capacity = 0.0f;
            }
            break;
        }
    }

    printf("Maximum profit is %.2f\n", profit);
    return profit;
}

int main(){
    int size, i;
    float capacity, profit;
    printf("Enter size of knapsack: ");
    if (scanf("%d", &size) != 1) return 1;

    float weight[size], value[size];

    for (i = 0; i < size; i++){
        printf("Enter the weight of item %d: ", i+1);
        if (scanf("%f", &weight[i]) != 1) return 1;
    }
    for (i = 0; i < size; i++){
        printf("Enter the value of item %d: ", i+1);
        if (scanf("%f", &value[i]) != 1) return 1;
    }

    printf("Enter the capacity of knapsack: ");
    if (scanf("%f", &capacity) != 1) return 1;

    profit = knapsack(size, weight, value, capacity);
    (void)profit;

    return 0;
}