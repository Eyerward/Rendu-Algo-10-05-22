#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream ifs("musique.txt");
    string s;
    map<string, int> map;

    while (ifs >> s)
        ++map[s];

    typedef::map<string, int>::const_iterator iter;
    for (iter it = map.begin(); it != map.end(); ++it)
        cout << "occurence de " << it->first << " : " << it->second << endl;

    return 0;
}