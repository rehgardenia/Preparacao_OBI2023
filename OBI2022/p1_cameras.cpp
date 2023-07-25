#include <bits\stdc++.h>

using namespace std;

// cima(0,1), baixo(0,-1) , esquerda(1,0), direita(-1,0)
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

#define MAX 40

int N, M, K;

bool vigiada[MAX][MAX] = {{false}};
bool visitada[MAX][MAX] = {{false}};


void mostrarMatriz()
{
    for(int ii = 1 ; ii <= N;  ii++)
    {
        for(int jj = 1 ; jj <= M ; jj++)
        {
            cout << vigiada[ii][jj];
        }
        cout << endl;
    }
}


void dfs(int x, int y)
{
    visitada[x][y]= true;

    // vai passar por todas direções
    for(int d = 0 ; d < 4; d++)
    {
        int  vx = x + dx[d];
        int  vy = y +dy[d];

        if( N < vx || vx <= 0 )
            continue;

        if( M < vy || vy <= 0 )
            continue;

        if( visitada[vx][vy] || vigiada[vx][vy] )
            continue;

        dfs(vx, vy);
    }



}
int main ()
{

    cin >> M >> N >> K;

    for(int i= 1; i <= K; i++)
    {
        int col, lin;
        char direcao;
        cin>> col >> lin >> direcao;

        if(direcao == 'O')
        {
            for( int ii = col; ii >= 1; ii--)
            {
                vigiada[lin][ii] = true;
            }
        }
        else if (direcao =='L')
        {
            for( int ii = col; ii <= M; ii++)
            {
                vigiada[lin][ii] = true;
            }
        }
        else if ( direcao == 'N')
        {
            for( int ii = lin; ii >= 1; ii--)
            {
                vigiada[ii][col] = true;
            }
        }
        else
        {
            for( int ii = lin; ii <= N; ii++)
            {
                vigiada[ii][col] = true;
            }
        }
    }
    // mostrarMatriz();
    if(vigiada[1][1] == true)
    {
        cout<< "N"<< endl;
        return 0;
    }
    dfs(1,1);


    if(visitada[N][M] == true)
        cout << "S"<< endl;
    else
        cout << "N"<< endl;

    return 0;
}
