#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{

    string const INPUT_FILE_NAME = "numbers.txt",
                 OUTPUT_FILE_NAME = "square.txt";
    double sum = 0, inputNumber;
    ifstream input_file;
    input_file.open(INPUT_FILE_NAME);

    if (!input_file)
    {
        cout << "Couldn't open " << INPUT_FILE_NAME << endl ;
        exit(1) ;
    }


    while (input_file >> inputNumber)
    {
        sum += pow(inputNumber, 2.0);  
    }

    ofstream output_file;
    output_file.open(OUTPUT_FILE_NAME);
    output_file << fixed << setprecision(4) << sum;

    input_file.close();
    output_file.close();

    return 0;
}