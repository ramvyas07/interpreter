
#include<iostream>
#include<set>
#include<fstream>
#include<sstream>
#include<vector>
#include "parser.cpp"


using namespace std;



int main(int argc, char* argv[]) {

    string filename = "file";
    

    for (int i = 1; i < argc; i++)
    {
        string argStr(argv[i]);

        if (argStr.find(".txt") != -1) {
            if (filename != "file") {
                cout << "ONLY ONE FILENAME ALLOWED" << endl;
                exit(1);
            }
            else {
                filename = argStr;
            }

        }



    }
    LexItem token;
    ifstream file;
    string word;
    file.open(filename);
    int Lines = 1;
    bool tk = true;

    if (file.is_open()) {
        while (true == tk) {
            tk = Prog(file, Lines);

        }
    }
    else {
        cout << "CANNOT OPEN THE FILE " << filename << endl;
        exit(1);
    }
}