#include <iostream>
#include <algorithm>
using namespace std;

int dir[][] = {
    {1, -1}, //x y
    {-1, 1},
    {1, -1},
    {-1, 1},
};

string wall = "#";

int searchMaze(string maze[])
{

    

}

int main()
{
    string maze[] = {
        "# ####",
        "# ####",
        "#   ##",
        "### ##",
        "### ##",
    };
    int answer[][] = {
        {0, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {0, 1, 1, 1, 0, 0},
        {0, 0, 0, 1, 0, 0},
    };

    return 0;
}