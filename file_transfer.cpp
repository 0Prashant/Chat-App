#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    char transferring_file_name[] = {"input.txt"};
    char recieving_file_name[] = {"output.txt"};

    const int n = 256;
    char line[n];
    ofstream fout;
    ifstream fin;
    fin.open(transferring_file_name);
    fout.open(recieving_file_name);
    while(fin)
    {
        fin.getline(line,n);
        fout<<line;
        fout<<"\n";
    }
    fout.close();
    fin.close();
    return 0;
}