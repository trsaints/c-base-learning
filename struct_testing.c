#include <stdio.h>
#include <string.h>

enum starter_maps
{
    rune_midgard,
    niflheim,
    asgard,
    vanaheim,
    jotunheim
};
struct position
{
    int x,
        y;
};

struct player
{
    char name[20];
    char map_name[20];

    unsigned int coins;
    unsigned int age;

    struct position p;
    enum starter_maps map;
};

int main()
{
    struct player player1;
    char player_name[20];
    int player_coins = 0,
        player_age;

    printf("What is your name? ");
    scanf("%s", player_name);

    printf("How old are you? ");
    scanf("%d", &player_age);

    strcpy(player1.name, player_name);
    player1.age = player_age;
    player1.coins = player_coins;

    int map_choice;
    char available_maps[5][20] = {"Rune Midgard", "Niflheim", "Asgard", "Vanaheim", "Jotunheim"};

    printf("Which map would you like to start in?\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, available_maps[i]);
    }

    scanf("%d", &map_choice);
    player1.map = map_choice - 1;
    player1.p = (struct position){0, 0};
    strcpy(player1.map_name, available_maps[player1.map]);

    printf("Welcome, %s! You are %d years old and you have %d coins.\n", player1.name, player1.age, player1.coins);
    printf("Loading map...\n");
    printf("You are now in %s (%d, %d)\n", player1.map_name, player1.p.x, player1.p.y);

    return 0;
}