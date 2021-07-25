/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>

using namespace std;

int main()
{
    int count=0;
    int index=0;
    int new_count=0;
    int len;
    string name;
    string copy;
    getline(cin,name);
    len=name.length();
    for(int i=0;i<len;i++)
    {
        copy[i]=name[i];
    }
    
    
    for(int j=0;j<len;j++)
    {
        int k;
        for(k=0;k<j;k++)
        {
            if(copy[k]==name[j])
            {
                break;
            }
        }
        if(j==k)
        {
            copy[index]=name[j];
            index++;
            count++;
        }
    }
    
    // cout<<count<<endl;
    // for(int l=0;l<count;l++)
    // {
    //     cout<<copy[l]<<" ";
    // }
    
    for(int m=0;m<count;m++)
    {
        new_count=0;
        for(int n=0;n<len;n++)
        {
            if(copy[m]==name[n])
            {
                new_count++;
            }
        }
        if(new_count>1)
        {
            cout<<copy[m]<<new_count<<"times"<<endl;
        }
    }
    return 0;
}
