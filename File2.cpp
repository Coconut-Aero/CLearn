#include <bits/stdc++.h>
using namespace std;


int main()
{
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        cout << "File Not Found." << endl;
        return 1; // Indicate failure to open file
    }
    else
    {
        cout << "File Found." << endl;

        // Add your file processing code here

        fclose(fp); // Close the file when done
        return 0;   // Indicate success
    }
}
