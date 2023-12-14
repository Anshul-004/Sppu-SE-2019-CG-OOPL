#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    bool flag = false;
    string ch;
    map<string,int> pop;
    pop["INDIA"] = 64966;
    pop["JAPAN"] = 23429;
    pop["USA"] = 34291;
    pop["BRAZIL"] = 27142;

    map<string,int> ::iterator itr;
    
    cout<<"What do want to search for "<<endl;
    cin>>ch;
    
    for (itr=pop.begin(); itr != pop.end(); itr++)
    {
        if ((*itr).first == ch)
        {
            cout<<(*itr).first<<" Has Population of "<<(*itr).second<<endl;
            flag = true;
        }            
    }
    if (flag !=true)
    {
        cout<<"NOT FOUND"<<endl;
    }
    
    return 0;
}