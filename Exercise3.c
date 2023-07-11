#include <stdio.h>

#define MAX_RESPONSES 1000  // maximum number of responses

int main(void)
{
    int ratingCounters[11] = { 0 };  // initialize all elements to zero
    int response, numResponses = 0;

    printf("Enter your responses (999 to end):\n");

    // Loop until the maximum number of responses is reached
    for (numResponses = 0; numResponses < MAX_RESPONSES; ++numResponses) {
        scanf_s("%i", &response);

        if (response == 999) {
            break;  // exit loop if 999 is entered
        }

        if (response < 1 || response > 10) {
            printf("Bad response: %i\n", response);
        }
        else {
            ++ratingCounters[response];
        }
    }

    printf("\nRating  Number of Responses\n");
    printf("------  -------------------\n");
    for (int i = 1; i <= 10; ++i) {
        printf("%4i%14i\n", i, ratingCounters[i]);
    }

    return 0;
}
/*In this modified version, we use a for loop to iterate over the responses.
The loop continues until either the maximum number of responses is reached (set to 1000 in this example) or the user enters the value 999 to indicate the last response.
Inside the loop, we check if the response is between 1 and 10, and increment the corresponding element of the ratingCounters array if it is.
Finally, we use a for loop to print out the results in a table.*/

/* Module 7, Exercise 3..Program 6.2 permits only 20 responses to be entered.Modify that
program so that any number of responses can be entered.So that the
user does not have to count the number of responses in the list, set up
the program so that the value 999 can be keyed in by the user to
indicate that the last response has been entered. (Hint: You can use
    the break statement here if you want to exit your loop.)*/