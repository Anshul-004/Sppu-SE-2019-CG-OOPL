#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    typedef map<string, int> mapType;
    mapType populationMap;
    
//different ways of mapping
    populationMap.insert(pair<string, int>("China", 1339));
    populationMap.insert(pair<string, int>("India", 1187));
    populationMap.insert(mapType::value_type("US", 310));
    populationMap.insert(mapType::value_type("Indonesia", 234));
    populationMap.insert(make_pair("Brazil", 193));
    populationMap.insert(make_pair("Pakistan", 170));

    mapType::iterator iter = --populationMap.end();
    populationMap.erase(iter);
   
    cout << "Size of populationMap: " << populationMap.size() << '\n';
    for (iter = populationMap.begin(); iter != populationMap.end(); ++iter)
    {
        cout << iter->first << ": "
             << iter->second << " million\n";
    }

    string country("Indonesia");
    iter = populationMap.find(country);
    if (iter != populationMap.end())
        cout << country << "s populations is "
             << iter->second << " million\n";
    else
        cout << "Key is not in populationMap" << '\n';
    
    populationMap.clear();
}
