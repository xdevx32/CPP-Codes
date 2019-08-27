#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Reading from file

int main(){
    ifstream input_data;
    input_data.open("/home/aced3v/CLionProjects/CPP_EXAM_PREP/input.txt");

    int x;
    double y;
    //четене на цяло число и на число с палваща запетая
    input_data >> x >> y;
    cout <<"x = " << x << "\ny = " << y << endl;

    string s;
    //четене на дума
    input_data >> s;
    cout <<"s = " << s << endl;

    //четене на изречение
    getline(input_data, s);
    cout <<"s = " << s << endl;

    //четене на символ
    char ch;
    input_data.get(ch);
    cout <<"ch = " << ch << endl;

    input_data.close();
    return 0;
}