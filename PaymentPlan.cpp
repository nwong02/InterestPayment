#include <stdio.h>
#include <stdlib.h>

#define kCostOfItem 1000
#define kMonthlyInterest 0.015
#define kMonthlyPayment 50

int main(void)
{
	int monthsRemaining = 0;
	int debtRemaining = 1;
	double interest = kCostOfItem * kMonthlyInterest;
	double totalInterest = 0.0;

	while (debtRemaining > 0)
	{
		totalInterest = totalInterest + interest;
		debtRemaining = 50 - totalInterest;
		debtRemaining = kCostOfItem - debtRemaining;
		monthsRemaining++;
	}
	printf("The months remaining on the current payment plan is: %d", monthsRemaining);

	return 0;
}