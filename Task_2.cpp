//
// Created by Angel Kukushev on 2019-08-29.
//

#include <iostream>
#include <fstream>
#include <algorithm>


using namespace std;

/*
 * Задача 1. Напишете програма, която изисква от потребителя да въведе име на файл
 * и изписва броя на символите, думите и редовете в този файл. След което програмата
 * отново да изисква име на файл от потребителя. Когато потребителя въведе файл,
 * който не съществува или празен низ, програмата да прекратява изпълнението си.
 */

int main()
{
    string filename;
    ifstream file;

    do {
        cout << "Въведете име на файл, който искате да отворите: ";
        cin >> filename;
        string path = "/Users/ace_dev/CLionProjects/NBU/Streams/"+ filename + ".txt";

        int cnt = std::count(std::istreambuf_iterator<char>(file),
                             std::istreambuf_iterator<char>(), '\n');
        file.open(path);

        if(!file){
            cerr << "File could not be opened!\n";
            return 1;
        } else {
            string word;
            int word_count;
            while (file >> word)
            {
                word_count++;
            }
            cout << "Брой думи: " << word_count << endl;
        }

        file.close();
    } while(file);




}