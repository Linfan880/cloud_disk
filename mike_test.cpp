//
// Created by linfan on 2021/11/5.
//

#include <cstdio>
#include <iostream>
#include <string.h>
#include <unordered_map>
#include <map>
#include <vector>
#include <queue>

using namespace std;

int quick(vector<int>&vi, int low, int high)
{
    int i=low,j=high;
    if(i<j)
    {
        int pos=vi[i];
        while(i<j)
        {
            while(i<j&&vi[j]>=pos) j--;
            vi[i++]=vi[j];
            while(i<j&&vi[i]<=pos) i++;
            vi[j--]=vi[i];
        }
        vi[i]=pos;
    }
    return i;
}
void digui(vector<int>&vi, int l, int r)
{
    if(l<r)
    {
        int pos = quick(vi,l,r);
        digui(vi,l,pos-1);
        digui(vi,pos+1,r);
    }
}

class A{
public:
    char a;
    int b;
};
class B:public A{
public:
    int c;
    char t;
    long long d;
};


int main()
{
//    vector<int>res{5,8,7,2,1,10,9,3,2,6,7,6};
//    digui(res,0,res.size()-1);
//    for(int i=0;i<res.size();i++)
//    {
//        cout<<res[i]<<" ";
//    }
//    return 0;

}