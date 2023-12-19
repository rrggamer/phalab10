#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){

    string myscore;
    
    ifstream source;
    source.open("score.txt");
    ifstream MyReadFile("score.txt");
    
    int count = 0;
    float sum = 0;
    float num;
    float sumsum;
    float mean;

    while(getline(MyReadFile,myscore))
    {
        count++;
        num = atof(myscore.c_str());
        sum += atof(myscore.c_str());
        sumsum += pow(num,2);
    }
    
    mean = sum/count;
    float stddev = sqrt((sumsum / count) - pow(mean, 2));
    
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << stddev;
}