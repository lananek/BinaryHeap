
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    long long n;
    bool a = true;
    
   
    fin >> n;
    long long* array = new long long[n + 1];


    for (long long i = 0; i <= n; i++) {
          fin >> array[i];
    }
        


    for (long long i = 0; i < n; i++)
    {
        if ((2 * (i + 1) - 1 < n) && (array[i] > array[2 * (i + 1) - 1]))
        {
            a = false;
            
        }
        if ((2 * (i + 1) < n) && (array[i] > array[2 * (i + 1)]))
        {
            a = false;
           
        }
    }

    if (a == true)
        fout << "Yes";
    else fout << "No";
    fin.close();
    fout.close();
    return 0;
}
