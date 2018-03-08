#include <iostream>
#include <map>

using namespace std;

void countries ()
{
    map<string,double> pop;
    pop["USA"]=323.1;
    pop["Russia"]=144.3;
    pop["China"]=1.379;
    pop["Slovakia"]=5.429;
    pop["German"]=82.67;
    map<string,double>::iterator iter;
    iter=pop.begin();

    int sum;
    sum=0;

    for(int i=0;i<=4;i++)
    {
        cout<<iter->first<<"-"<<iter->second<<endl;
        sum=sum+iter->second;
        iter++;
    }
    cout<<endl;
    cout<<"Countries- "<<sum;

}

int main()
{

    countries();



}
