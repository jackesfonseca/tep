#include <iostream>

using namespace std;

struct Cell
{
    int row;
    int col;
};

int main()
{
    ios::sync_with_stdio(false);

    long H, W;

    cin >> H >> W;

    char M[H][W];
    struct Cell cell[6]; 

    for(int i=0; i<H; i++)
    {
        for(int j=0; j<W; j++)
            cin >> M[i][j];
    }


    //verificar linha por linha    
    for(int i=0; i<H; i++)
    {
        for(int j=0; j<W; j++)
        {
            if(M[i][j] == 's' && M[i][j+1] == 'n' && M[i][j+2] == 'u' && M[i][j+3] == 'k' && M[i][j+4] == 'e')
            {
                cell[0].row = i+1;
                cell[0].col = j+1;
                cell[1].row = i+1;
                cell[1].col = j+2;
                cell[2].row = i+1;
                cell[2].col = j+3;
                cell[3].row = i+1;
                cell[3].col = j+4;
                cell[4].row = i+1;
                cell[4].col = j+5;
            }

            else if(M[i][j] == 's' && M[i][j-1] == 'n' && M[i][j-2] == 'u' && M[i][j-3] == 'k' && M[i][j-4] == 'e')
            {
                cell[0].row = i+1;
                cell[0].col = j+1;
                cell[1].row = i+1;
                cell[1].col = j;
                cell[2].row = i+1;
                cell[2].col = j-1;
                cell[3].row = i+1;
                cell[3].col = j-2;
                cell[4].row = i+1;
                cell[4].col = j-3;
            }
        }
    }  

    //verificar coluna por coluna    
    for(int i=0; i<H; i++)
    {
        for(int j=0; j<W; j++)
        {
            if(M[i][j] == 's' && M[i+1][j] == 'n' && M[i+2][j] == 'u' && M[i+3][j] == 'k' && M[i+4][j] == 'e')
            {
                cell[0].row = i+1;
                cell[0].col = j+1;
                cell[1].row = i+2;
                cell[1].col = j+1;
                cell[2].row = i+3;
                cell[2].col = j+1;
                cell[3].row = i+4;
                cell[3].col = j+1;
                cell[4].row = i+5;
                cell[4].col = j+1;
            }

            if(M[i][j] == 's' && M[i-1][j] == 'n' && M[i-2][j] == 'u' && M[i-3][j] == 'k' && M[i-4][j] == 'e')
            {
                cell[0].row = i+1;
                cell[0].col = j+1;
                cell[1].row = i;
                cell[1].col = j+1;
                cell[2].row = i-1;
                cell[2].col = j+1;
                cell[3].row = i-2;
                cell[3].col = j+1;
                cell[4].row = i-3;
                cell[4].col = j+1;
            }
            
        }
    }  

    //verificar diagonais 1
    for(int i=0; i<H; i++)
    {
        for(int j=0; j<W; j++)
        {
            if(M[i][j] == 's' && M[i+1][j+1] == 'n' && M[i+2][j+2] == 'u' && M[i+3][j+3] == 'k' && M[i+4][j+4] == 'e')
            {
                cell[0].row = i+1;
                cell[0].col = j+1;
                cell[1].row = i+2;
                cell[1].col = j+2;
                cell[2].row = i+3;
                cell[2].col = j+3;
                cell[3].row = i+4;
                cell[3].col = j+4;
                cell[4].row = i+5;
                cell[4].col = j+5;
            }

            else if(M[i][j] == 's' && M[i-1][j-1] == 'n' && M[i-2][j-2] == 'u' && M[i-3][j-3] == 'k' && M[i-4][j-4] == 'e')
            {
                cell[0].row = i+1;
                cell[0].col = j+1;
                cell[1].row = i;
                cell[1].col = j;
                cell[2].row = i-1;
                cell[2].col = j-1;
                cell[3].row = i-2;
                cell[3].col = j-2;
                cell[4].row = i-3;
                cell[4].col = j-3;
            }
        }
    } 

    //verificar diagonais 2
    for(int i=0; i<H; i++)
    {
        for(int j=0; j<W; j++)
        {
            if(M[i][j] == 's' && M[i-1][j+1] == 'n' && M[i-2][j+2] == 'u' && M[i-3][j+3] == 'k' && M[i-4][j+4] == 'e')
            {
                cell[0].row = i+1;
                cell[0].col = j+1;
                cell[1].row = i;
                cell[1].col = j+1;
                cell[2].row = i-1;
                cell[2].col = j+2;
                cell[3].row = i-2;
                cell[3].col = j+3;
                cell[4].row = i-3;
                cell[4].col = j+4;
            }

            else if(M[i][j] == 's' && M[i+1][j-1] == 'n' && M[i+2][j-2] == 'u' && M[i+3][j-3] == 'k' && M[i+4][j-4] == 'e')
            {
                cell[0].row = i+1;
                cell[0].col = j+1;
                cell[1].row = i+1;
                cell[1].col = j;
                cell[2].row = i+2;
                cell[2].col = j-1;
                cell[3].row = i+3;
                cell[3].col = j-2;
                cell[4].row = i+4;
                cell[4].col = j-3;
            }
        }
    } 

    for(int i=0; i<5; i++)
        cout << cell[i].row << " " << cell[i].col << endl;

    return 0;
}
