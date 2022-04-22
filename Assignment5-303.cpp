#include <iostream>
#include <iterator>
#include <map>

using namespace std;

// Output data function

void printMap(map<string, string> &stateDataMap)
{
    map<string, string>::iterator itr;

for(itr=stateDataMap.begin(); itr!=stateDataMap.end(); itr++)
{
    cout << itr->first << ", " << itr->second << endl;
}

cout << endl;
cout << endl;
}

// Input user data to map

map <string, string> inputMap(map<string, string> &stateDataMap)
{
    string capitalName;
string stateName;

cout << "What capital?" << endl;
cin >> capitalName;
cout << endl;
cout << "What state?" << endl;
cin >> stateName;
cout << endl;

stateDataMap.insert(pair<string, string> (stateName, capitalName));

return stateDataMap;
}


int main()
{

// Adding pairs 

map<string, string> stateDataMap;

stateDataMap.insert(pair<string, string> ("Nebraska", "Lincoln"));
stateDataMap.insert(pair<string, string> ("New York", "Albany"));
stateDataMap.insert(pair<string, string> ("Ohio", "Columbus"));
stateDataMap.insert(pair<string, string> ("California", "Sacramento"));
stateDataMap.insert(pair<string, string> ("Massachusetts", "Boston"));
stateDataMap.insert(pair<string, string> ("Texas", "Austin"));

// Output data

printMap(stateDataMap);

// Changes capital of California to Los Angeles

map<string, string>::iterator itr;
itr=stateDataMap.find("California");
if(itr!=stateDataMap.end())
{
    itr->second="Los Angeles";
}

printMap(stateDataMap);

cout << endl;
cout << endl;


// User input into map

inputMap(stateDataMap);
printMap(stateDataMap);



    return 0;
}