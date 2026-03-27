    #include <iostream>
    using namespace std;
    int main()
    {
    char vow[100]={'A','E','I','O','U','a','e','i','o','u'};
    cout<<"ENter your lines:";
    string str;
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {
        
        if (str[i] !='A'&& str[i] !='E'&& str[i] !='I'&& str[i] !='O'&& str[i] !='U'&& str[i] !='a'&& str[i] !='e'&& str[i] !='i'&& str[i] !='o'&& str[i] !='u')
        {
            cout<<str[i];
        }
        
    }
    cout<<endl;
    cout<<"program end";
    return 0;
    }