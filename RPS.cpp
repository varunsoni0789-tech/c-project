#include<iostream>
using namespace std;
class Game
{ int player,computer,sp=0,sc=0;
    string arr[3]={"Rock","Paper","Sissor"};
    public:
        void Input(int x)
        {   computer=rand()%3;
            player=x;
            
            
        }
        void result(string s )
        {if(player==computer)
            {
                cout<<"-- Tai --"<<endl;
                sp+=1;
                sc+=1;
            }
            else if(arr[player]=="Rock"&&arr[computer]=="Sissor")
            {   cout<<"You Choose "<<arr[player]<<"Computer G Choose "<<arr[computer]<<endl;
                cout<<s<<" you Won "<<endl;
                sp+=1;
            }
            else if (arr[player]=="Paper"&&arr[computer]=="Rock")
            {
                cout<<"You Choose "<<arr[player]<<"Computer G Choose "<<arr[computer]<<endl;
                cout<<s<<" you Won "<<endl;
                sp+=1;
            }
            else if (arr[player]=="Sissor"&&arr[computer]=="Paper")
            {
                cout<<"You Choose "<<arr[player]<<"Computer G Choose "<<arr[computer]<<endl;
                cout<<s<<" you Won "<<endl;
                sp+=1;
            }
            else 
            {
                cout<<"You Choose "<<arr[player]<<"Computer G Choose  "<<arr[computer]<<endl;
                cout<<s<<" you Lose "<<endl;
                sc+=1;
            }

        }
        void display()
        {
            cout<<"  Scores  "<<endl;
            cout<<"Player "<<" Computer G"<<endl;
            cout<<sp<<" "<<sc<<endl;
            
        }

};





int main()
{   cout<<"Rules-> Type 1 For Rock , Type 2 for Paper , Type 3 for Sissors "
    <<endl;

    cout<<" --Enter your name-- "<<endl;
    string s,s1;
    Game g;
    cin>>s;
     int flag=0;
     while (flag==0)
    {
    cout<<"Enter your move ->  ";
    int x;
    cin>>x;

 
   
        
    if(x==1||x==2||x==3)
    {
   
    g.Input(x-1);
    g.result(s);
    g.display();
    cout<<"  Want Remach ? then Press R  => ";
    cin>>s1;
    if(s1!="R"||s1!="r")
      {  
      }
    else 
    {
        flag=1;
    }

    }
    else
    {
        cout<<" <= Wrong Choice => "<<endl;
    }

    }

    return 0;
}

