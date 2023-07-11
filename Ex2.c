#include <stdio.h>

struct entry {
    int value;
    struct entry* next;
};

void insertEntry(struct entry* newEntry, struct entry* prevEntry) {
    newEntry->next = prevEntry->next;
    prevEntry->next = newEntry;
}

int main() {
    // Create a linked list with three entries
    struct entry head, second, third;
    struct entry newEntry = { 4, NULL };
    head.value = 1;
    head.next = &second;
    second.value = 2;
    second.next = &third;
    third.value = 3;
    third.next = NULL;

    // Insert the new entry after the second entry
    insertEntry(&newEntry, &second);

    // Traverse the linked list and print the values
    struct entry* listPtr = &head;
    while (listPtr != NULL) {
        printf("%d ", listPtr->value);
        listPtr = listPtr->next;
    }
    printf("\n"); // outputs: 1 2 4 3

    return 0;
}