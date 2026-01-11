#include <stdio.h>

int main()
{
    int sales = 100;
    int advertising = 1000;
    int fixedCost = 10000;
    int profitPerUnit = 500;

    int prevProfit = 0;
    int currentProfit;

    while (1)
    { 
        // Profit before advertising double
        currentProfit = (sales * profitPerUnit) - (fixedCost + advertising); 

        if (currentProfit < prevProfit)
        {
            break;
        }
        prevProfit = currentProfit;

        // Double the advertising cost
        advertising = advertising * 2;

        // calculate the sales units after double
        sales = sales + (sales * 20) / 100;
    }

    printf("Best Situation Before Profit Declines : \n");

    // sales before advertisig double
    printf("Sales = %d \n", sales - (sales * 20) / 100);

    // Previous advertising cost
    printf(" Advertising Budget = Rs %d\n", advertising / 2);

    // Net profit before advertising
    printf("Net Profit = Rs %d\n", prevProfit);
    return 0;
}