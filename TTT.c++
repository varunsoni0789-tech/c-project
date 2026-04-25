#include<iostream>
using namespace std;
class Game
{
private: 
    int p1,p2;
    bool w=false;
        int arr[3][3];
        string ar[3][3];
public:
Game()
{
    int a=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a++;
            arr[i][j]=a;
            ar[i][j]=" ";
        }
    }
}
    void input(int a,int b)
    {
        p1=a;
        p2=b;
    }
    void Logic(string c1,string c2)
    {
       
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                if(arr[i][j]==p1)
                {
                    arr[i][j]=69;
                }
                if(arr[i][j]==p2)
                {
                    arr[i][j]=60;
                }
                
            }
        }
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                if(arr[i][j]==69)
                {
                    ar[i][j]=c1;
                }
                if (arr[i][j]==60)
                {
                    ar[i][j]=c2;
                }
                
            }
        }
        
    }
    void result(string c1,string c2)
    {
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<1;j++)
            {
            if(ar[i][j]==ar[i][j+1]&&ar[i][j+1]==ar[i][j+2])
            {
                if(ar[i][j]==c1)
                {
                cout<<" Player 1 Win "<<endl;
                w=true;
                }else if(ar[i][j]==c2)
                {
                cout<<" Player 2 Win "<<endl;
                w=true;
                }
                
            }
            }
        }
        for(int i=0;i<1;i++)
        {
            for (int j=0;j<3;j++)
            {
            if(ar[i][j]==ar[i+1][j]&&ar[i+1][j]==ar[i+2][j])
            {
                if(ar[i][j]==c1)
                {
                cout<<" Player 1 Win "<<endl;
                w=true;
                }
                else if(ar[i][j]==c2){ w=true;
                cout<<" Player 2 Win "<<endl;}
                
            }
        }
        
            
            if(ar[0][0]==ar[1][1]&&ar[1][1]==ar[2][2])
            {
                if(ar[1][1]==c1)
                {
                cout<<" Player 1 Win "<<endl;
                 w=true;
                }
                else if(ar[1][1]==c2){
                cout<<" Player 2 Win "<<endl;
                 w=true;
                }
                 
            }
            
            if(ar[2][0]==ar[1][1]&&ar[1][1]==ar[1][2])
            {
                if(ar[1][1]==c1)
                {
                cout<<" Player 1 Win "<<endl;
                 w=true;
                }
                else if(ar[1][1]==c2)
                {
                cout<<" Player 2 Win "<<endl;
                 w=true;
                }
                 
                }
            }
            
        
    }
        void display()
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<" "<<ar[i][j]<<" ";
                }
                cout<<""<<endl;
            }
        }

bool check()
{
    return w;
}
};
int main()
{
    Game g;
    cout<<"Enter 1 to 9 No;"<<endl;
    int a=0;
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                a+=1;
                cout<<" "<<a<<" ";
            }
            cout<<""<<endl;
        }
        int p1,p2;
        string x="x",o="o";
        bool c=false;
    while(c==false)
    {
        cout<<"player 1 Enter no.{ X } ";
        cin>>p1;
        cout<<"player 2 Enter no. { O }";
        cin>>p2;
        g.input(p1,p2);
        g.Logic(x,o);
        g.result(x,o);
        g.display();

        c=g.check();
    }
    
}

