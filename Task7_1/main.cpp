#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
    // File open part ----------------------
    FILE * input = fopen("INPUT.TXT","r");
    FILE * out = fopen("OUTPUT.TXT","w");
    if(!input || !out)
    {
        cout << "Cannot open files";
        return 1;
    }
    //Scan data from file------------------------
    int N = 0, M = 0;
    fscanf(input,"%d%d",&N,&M);

    if( N < 1 || M > 32767 || M < 1 || N > 32767)
    {
        cout << "\nIncorrect data in file \"INPUT.TXT\" ";
    }
    // Write output.txt --------------------------
    if(M == N)
    {
        fprintf(out,"%d", M * 2 - 2);
    }
    else
    {
        fprintf(out,"%d", (M < N)? M * 2 - 1 : N * 2 - 1);
    }
    //--------------------------------------------
    cout << "N = " <<  N << " , " << " M = " << M << endl;

    fclose(input);
    fclose(out);
    system("pause");
    return 0;
}
