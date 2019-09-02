//
// Created by Angel Kukushev on 2019-08-29.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

double read_data(ifstream& in){
    double highest;
    double next;
    if(in >> next)
        highest = next;
    else
        return 0;
    while(in>>next){
        if(next > highest)
            highest = next;
    }

    return highest;
}

int main(){
    string filename;
    cout << "Please enter file name:";
    cin >> filename;

    ifstream infile;
    infile.open(filename.c_str());

    if(infile.fail()){
        cout << "Error opening file with name: " << filename << "\n";
        return 1;
    }
    double max = read_data(infile);
    cout << "The maximum value is: " << max << "\n";

    infile.close();
    return 0;
}
