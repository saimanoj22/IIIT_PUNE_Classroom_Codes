#include<bits/stdc++.h>
using namespace std;
template<class T>
void check()
{
        string input;
    cout<<"enter string : \n";
    cin>>input;

    T i=0 ;
    T max = input[0];
    while(input[i]!='\0')
    {

        try{
                if(input[i]=='!'|| input[i]=='#'||input[i]=='&'||input[i]==1||input[i]==2||input[i]==3||input[i]==4||input[i]==1||input[i]==5||input[i]==6||input[i]==7||input[i]==8||input[i]==9)
                    {
                        throw input[i];

                    }
                    else {



                            if(input[i]>max)
                            {
                                max = input[i];
                            }


                    }
        }

        catch (...)
        {
            cout<<"Expection Caught!!! unwanted characted are used..\n";
        }

        i++;
    }
    cout<<"max is : "<<char(max)<<endl;
}
int main()
{
    check<int>();

    return 0;
}