#include <iostream>
using namespace std;

void SpiralMatrx(int arr[][6], int n, int m)
{
    int sraw = 0, scol = 0;
    int eraw = n - 1, ecol = m - 1;

    while ((sraw <= eraw) && (scol <= ecol))
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            cout << arr[sraw][j] << " ";
        }
        // right
        for (int i = sraw + 1; i <= eraw; i++)
        {
            cout << arr[i][ecol] << " ";
        }
        // bottom
        for (int j = ecol - 1; j >= sraw; j--)
        {
             if (sraw == eraw)
            {
                break;
            }
            cout << arr[eraw][j] << " ";
           
        }
        // left
        for (int i = eraw - 1; i >= scol + 1; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            cout << arr[i][scol] << " ";
            
        }

        sraw++;
        eraw--;
        scol++;
        ecol--;
    }
}

int main()
{
    // int mat[][4] = {{1, 2, 3, 4},
    //                 {5, 6, 7, 8},
    //                 {9, 10, 11, 12},
    //                 {13, 14, 15, 16},  5 x 4
    //                 {17, 18, 19,20}};

    int mat[][6] =  {{1,2,3,4,5,6},
                    {7,8,9,10,11,12},
                    {13,14,15,16,17,18}};

    SpiralMatrx(mat,3,6);
    // need to modify the call function size
    // SpiralMatrx(mat,raw,col);

    return 0;
}