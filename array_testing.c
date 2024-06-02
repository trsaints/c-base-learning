#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point
{
    int x,
        y;
};

struct region
{
    char name[100];
    int size;
    struct point *location_coordinates;
};

struct world
{
    char name[100];
    int count;
    struct region *world_locations;
};

int main()
{
    struct region prontera = {name : "Prontera", size : 10},
                  payon = {name : "Payon", size : 5},
                  geffen = {name : "Geffen", size : 7},
                  morroc = {name : "Morroc", size : 8},
                  alberta = {name : "Alberta", size : 6},
                  izlude = {name : "Izlude", size : 4},
                  aldebaran = {name : "Aldebaran", size : 9},
                  lighthalzen = {name : "Lighthalzen", size : 11},
                  niflheim = {name : "Niflheim", size : 3},
                  einbroch = {name : "Einbroch", size : 5};

    struct world rune_midgard = {name : "Rune Midgard", count : 10, world_locations : (struct region[]){prontera, payon, geffen, morroc, alberta, izlude, aldebaran, lighthalzen, niflheim, einbroch}};

    printf("These are the avaiable regions of Rune Midgard: \n");
    
    for (int i = 0; i < rune_midgard.count; i++)
    {
        printf("Region: %s\n", rune_midgard.world_locations[i].name);
        printf("Size: %d\n", rune_midgard.world_locations[i].size);
    }
}