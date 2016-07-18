#include <iostream>
#include <cstring>
#include <vector>

using namespace std;


typedef vector <string> vss;


vss rotate(vss matrix)
{
    vss aux;
    aux.clear();
    int l = matrix.size();
    string line;
    for (int i = 0; i < l ; ++i)
    {
        line = "";
        for (int j = l-1; j >= 0; j--)
            line += matrix[j][i];
        aux.push_back( line );

    }
    return aux;
}

int find(vss big, vss small)
{
    int x, y;
    int ans = 0;
    int cont;
    int L = big.size();
    int l = small.size();
    for (int i = 0; i < L; ++i)
    {
        for (int j = 0; j < L; ++j)
        {
            y = j + l;
            x = i + l; 
            if(x > L || y > L)
                continue;
            cont = 0;
            for (int k = 0; k < l; ++k)
            {
                for (int o = 0; o < l; ++o)
                {
                    if(big[k+i][o+j] == small[k][o])
                        cont ++;
                }
            }
           
            if(cont == (l*l))
                ans ++ ;

        }
    }
    return ans;
}




int main(int argc, char const *argv[])
{
    string line;
    vss matrixA;
    vss matrixB;
    
    int big, small;

    while(cin >> big >> small, big && small)
    {
        matrixA.clear();
        matrixB.clear();
        
        for (int i = 0; i < big; ++i)
        {
            cin >> line;
            matrixA.push_back( line );
        }
        for (int i = 0; i < small; ++i)
        {
            cin >> line;
            matrixB.push_back( line );
        }
        
        for (int i = 0; i < 4; ++i)
        {
            if(i)
                cout << " ";
            cout << find(matrixA,matrixB);
            matrixB = rotate(matrixB);
        }
        cout << endl;


    }
    return 0;
}   