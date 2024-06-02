#include <stdio.h>

struct player
{
    char name[20];
    int coins;
    int age;
};

int main()
{
    char player_name[20];
    int player_coins,
        player_age;

    printf("Enter player name: ");
    scanf("%s", player_name);

    printf("Enter player age: ");
    scanf("%d", &player_age);

    struct player p1 = {name : player_name, age : player_age};

    return 0;
}