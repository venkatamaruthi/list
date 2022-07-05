#include<iostream>
#include<string>
#include<list>
using namespace std;

int main()
{
        char ch;
        string str;
        list<string> ll;
        list<string>::iterator itr=ll.begin();
        do
        {
                cout<<"\n Enter string"<<endl;
                getline(cin,str);
                ll.insert(itr,str);
                itr++;
                cout<<"\n Do u want to continue (y or n)"<<endl;
                cin>>ch;
                cin.get();
        }while(ch !='n');

        itr=ll.begin();
        cout<<"List contents are....\n";
        while(itr != ll.end())
        {
                cout<<"\n"<<*itr++;
        }
}

-----------------------------------------------
#include<iostream>
#include<string>
#include<list>
using namespace std;

int main(int argc,char *argv[])
{
        char ch;
        string str;
        list<string> ll;
        list<string>::iterator itr=ll.begin();{
                for(int i=1;i<argc;i++){
                str=argv[i];
                ll.insert(itr,str);
                itr++;
                }
                itr++;
        }
        itr=ll.begin();
        cout<<"Here is the List";
        while(itr != ll.end())
        {
                cout<<"\n"<<*itr++;
        }
}
-----------------------------------------------------------

#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;
int main()
{
        //Map test
        map<int,string> mp;
        char ch;
        int no;
        string name;
        do
        {
                cout<<"\n Enter Rollno:";
                cin>>no;
                cin.get();
                cout<<"\n Enter Name:";
                getline(cin,name);
                mp[no]=name;
                cout<<"\n do you want to continue (y or n):";
                cin>>ch;
        }while (ch!='n');

        // Traversing map

        cout<<"\n Values from map";
        map<int,string>::iterator it = mp.begin();
        while(it != mp.end())
        {
                cout<<"\n RNO="<<it->first<<"\t"<<"Name"<<it->second;
                 it++;
        }

//serching in map
//int no;
cout<<"\n Enter roll name whose name is to be found";
cin>>no;
if(mp.count(no))
{
        name=mp[no];
        cout<<"\n Name of student:"<<name<<endl;
}
else
{
        cout<<"\n Invalid Roll no"<<endl;
}
}






---------------------------------------------------------------------------










(SPLITTING)


listbegin=ll.begin();
        while(listbegin != ll.end())
        {      
                str =*listbegin;
                cout<<"str="<<str<<endl;
 
                for(i=0;str.at(i);i++)
                {
                        while((char)str.at(i)!=':')
                        {
                                ser[i]=(char)str.at(i);
                                i++;
                        }
 
                        cout<<"server ="<<ser<<endl;
                }




---------------------------------------------------------------



int main( int argc, char* argv[])
{
        char ch;
        string str;
        list<string> ll;

        list<string>::iterator* itr=ll.begin();{
                for(int i=1;i<argc;i++){
                        str=argv[i];
                        ll.insert(itr,str);
                        itr++;

        }
                itr=ll.begin();
                //listbegin=ll.begin();
                while(itr != ll.end())
                {
                        str = *itr;
                        cout<<"str="<<str<<endl;

                        for(int i=0;str.at(i);i++)
                        {
                                while((char)str.at(i)!=':')
                                {
                                        ser[i]=(char)str.at(i);
                                        i++;
                                }                                                                                                                                                                               cout<<"server ="<<ser<<endl;
                        }
                }
}
-----------------------------------------------------------------------------------