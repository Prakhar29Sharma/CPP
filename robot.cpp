#include <algorithm>
#include<bits/stdc++.h>
#include <cstdlib>

#define size 10

using namespace std;

// for grid of 10x10
int grid[size][size];

struct robot{
    int Sr;
    int Sc;
} Rrc;

void move_north()
{
    Rrc.Sr -= 1;
    if(grid[Rrc.Sr][Rrc.Sc] == 1)
    {
        while(grid[Rrc.Sr][Rrc.Sc]!=0)
        {
            Rrc.Sr-=1;
        }
    }
    grid[Rrc.Sr][Rrc.Sc] = 1;
    return;
}

void move_west()
{
    Rrc.Sc -= 1;
    if(grid[Rrc.Sr][Rrc.Sc] == 1)
    {
        while(grid[Rrc.Sr][Rrc.Sc]!=0)
        {
            Rrc.Sc-=1;
        }
    }
    grid[Rrc.Sr][Rrc.Sc] = 1;
    return;
}

void move_south()
{
    Rrc.Sr += 1;
    if(grid[Rrc.Sr][Rrc.Sc] == 1)
    {
        while(grid[Rrc.Sr][Rrc.Sc]!=0)
        {
            Rrc.Sr+=1;
        }
    }
    grid[Rrc.Sr][Rrc.Sc] = 1;
    return;
}

void move_east()
{
    Rrc.Sc += 1;
    if(grid[Rrc.Sr][Rrc.Sc] == 1)
    {
        while(grid[Rrc.Sr][Rrc.Sc]!=0)
        {
            Rrc.Sc+=1;
        }
    }
    grid[Rrc.Sr][Rrc.Sc] = 1;
    return;
}

void instruction()
{
    char move;
    printf("Enter Moving Dirn (N,E,W,S) : ");
    scanf("%c", &move);
    switch(move)
    {
        case 'N':
            move_north();break;
        case 'S':
            move_south();break;
        case 'W':
            move_west();break;
        case 'E':
            move_south();break;
        default:
            printf("Invalid Instruction!");
    }
}

int main()
{
    int i, j, init_r, init_c;

    // init_r, init_c -> initial position of robot
    // Assigning zero value to boxes initially

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            grid[i][j] = 0;
        }
    }

    printf("Enter initial position of robot in grid : ");
    scanf("%d %d", &init_r, &init_c);

    if(init_c > size || init_r > size || init_c < 1 || init_r < 1)
    {
        printf("Invalid position!\n");
        return 0;
    }

    Rrc.Sr = init_r-1;
    Rrc.Sc = init_c-1;

    // instructions
    move_north();
    move_east();
    move_south();
    move_south();
    move_west();

    printf("Position of Robot Now : (%d,%d)\n", Rrc.Sr+1, Rrc.Sc+1);

    return 0;

}
