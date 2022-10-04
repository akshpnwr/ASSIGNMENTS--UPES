#include <stdio.h>
#include <string.h>

union Rock
{
    char *name;
    int members;
};

struct Jazz
{
    char *name;
    int albums;
};

int main()
{

    struct Jazz j = {"Chet baker", 3};
    union Rock r = {"Pink flyod", 4};

    printf("\nDifference 1 - Simultanious Accessing\n");
    printf("\nData of the structure : %s, %d", j.name, j.albums);
    printf("\nData of the union : %s, %d", r.name, r.members);

    printf("\n\nDifference 2 - Individual Accessing");
    printf("\n\nStructure : ");
    printf("\nName : %s", j.name);
    printf("\nAlbums : %d", j.albums);

    printf("\n\nUnion : ");
    r.name = "Pink floyd";
    printf("\nName : %s", r.name);
    r.members = 4;
    printf("\nMembers : %d", r.members);

    printf("\n\nDifference 3 - Size");
    printf("\nSize of the structure : %d", sizeof(j));
    printf("\nSize of the union : %d", sizeof(r));

    printf("\n\nDifference 3 - Altering value");
    printf("\n\nStructure : ");
    j.name = "Frank sinatra";
    printf("\nData of the structure : %d, %s", j.albums, j.name);

    printf("\n\nUnion : ");
    r.members = 5;
    printf("\nData of the union : %d, %s", r.members, r.name);

    return 0;
}
