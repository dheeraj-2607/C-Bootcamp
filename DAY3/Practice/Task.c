//Question : Write a program that asks the user to enter their favorite city in Kerala. Store it in a string. Then, print a message like: "Your favorite city is [CityName], which has [N] characters." (Use strlen to find N).

//Solution:
#include <stdio.h>
#include <string.h>

int main() {
    char city[100];
    int length;

    printf("Enter your favorite city in Kerala: ");
    fgets(city, sizeof(city), stdin);

    city[strcspn(city, "\n")] = 0;

    length = strlen(city);

    printf("Your favorite city is %s, which has %d characters.\n", city, length);
    return 0;
}