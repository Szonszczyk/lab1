#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//using namespace std;


char **charSquare (int n, int seed);
void drawCharSquare (char** square, int n);

int main(int argc, char** argv)
{
    if(argc<2) {printf("MALO ARGUMENTOW\n"); return -1;}
    drawCharSquare(charSquare(atoi(argv[1]), atoi(argv[2])), atoi(argv[1]));
    return 0;
}


char **charSquare (int n, int seed)
{
    srand(seed);
    char **square=new char *[n];
    for (int i=0;i<n;i++) square[i] = new char [n];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            square[i][j]=int(( rand() % 25 ) + 65);
        }
    }
    return square;
}


void drawCharSquare(char** square, int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf(" %c", square[i][j]);
        }
        printf("\n");
    }
}
