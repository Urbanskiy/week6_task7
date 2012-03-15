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
    long long int N = 0;
    char M;
    while (!feof(input))
    {

        M = fgetc(input) ;
        if( isdigit(M))
        {
            N +=(long long) (M - 48);
        }

    }

    if (N % 3 == 0)
    {
        fprintf(out,"%d",2);
    }
     else if( (N + 1) % 3 == 0)
    {
        fprintf(out,"%d\n%d",1,2);
    }
    else
    {
         fprintf(out,"%d\n%d",1,1);
    }

    fclose(input);
    fclose(out);
    system("pause");
    return 0;
}
