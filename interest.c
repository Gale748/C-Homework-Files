#include <stdio.h>
#include <math.h>

int main() {
	float principal, rate, time, interest;

	// Input the principal, rate, and time
	printf("Enter the principal amount: ");
	scanf_s("%f", &principal);
	printf("Enter the rate of interest: ");
	scanf_s("%f", &rate);
	printf("Enter the time in years: ");
	scanf_s("%f", &time);

	// Calculate the interest
	interest = principal * pow((1 + rate / 100), time);

	// Output the result
	printf("The interest is: %.2f", interest);

	return 0;
}