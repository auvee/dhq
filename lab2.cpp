#include<bits/stdc++.h>
#include<thread>
using namespace std;
struct node
{
    int procestime;
    string type;
};
node arr[10];
void sleep(long d)
{
clock_t start=clock();
while(clock() - start < d);
}
bool com(node a,node b)
{
    if(a.procestime<b.procestime)
        return true;
    return false;
}
int calculate[200];
void evennumber()
{
    int st=0;
    for(int i=0; i<100; i++)
    {
        calculate[i]=st;
        st+=2;
    }
}
void threeexpon()
{
    calculate[0]=2;
    for(int i=1; i<20; i++)
    {
        calculate[i]=calculate[i-1]*3;
    }
}
void multiplier()
{
    for(int i=0; ; i++)
    {
        if(i%3==0 && i%5==0)
        calculate[i]=i;
    }
}
void prime()
{
    int ind=0,i,j;
    for(i=2;i<72; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            calculate[ind++]=i;
        }
        if(ind==20)
            break;
    }
}
void fivonacci()
{
    calculate[0]=0;
    calculate[1]=1;
    for(int i=2; i<20; i++)
    {
        calculate[i]=calculate[i-1]+calculate[i-2];
    }
}

int main()
{
    int i,j,k,l,ans;

    ofstream reader1("evennumbers.txt");
    ofstream reader2("threeexponent.txt");
    ofstream reader3("multipleof3and5.txt");
    ofstream reader4("prime2.txt");
    ofstream reader5("fivonacci1.txt");
    for(i=0; i<5; i++)
    {
        cin>>arr[i].type>>arr[i].procestime;
    }
    sort(arr,arr+5,com);
    for(i=0;i<5;i++)
    {
        if(i)
            cout<<"->";
        cout<<arr[i].type;
    }
    for(i=0; i<5; i++)
    {
        if(arr[i].type=="p1")
        {
            evennumber();

            for(int i=0; i<100; i++)
                reader1<<calculate[i]<<endl;

        }
        else if(arr[i].type=="p2")
        {
            threeexpon();
            for(int i=0; i<20; i++)
                reader2<<calculate[i]<<endl;
        }
        else if(arr[i].type=="p3")
        {
            multiplier();
            for(int i=0; i<20; i++)
                reader3<<calculate[i]<<endl;
        }
        else if(arr[i].type=="p4")
        {
            prime();
            for(int i=0; i<20; i++)
                reader4<<calculate[i]<<endl;
        }
        else if(arr[i].type=="p5")
        {
            fivonacci();
            for(int i=0; i<20; i++)
                reader5<<calculate[i]<<endl;
        }
    }


    for(int i=0; i<5; i++)
    {
        string t;
        string str;
        t=arr[i].type;

        if(t=="p1")
        {
            printf("\nThis is even number file:\n");
            ifstream write1("file1.txt");
            while(getline(write1,str))
                cout<<str<<" ";
             cout<<endl;
        }
        else if(t=="p2")
        {
            printf("\nThis is three exponential  file:\n");
             ifstream write1("file2.txt");
            while(getline(write1,str))
                cout<<str<<" ";
             cout<<endl;

        }
        else if(t=="p3")
        {
            printf("\nThis is multiple of 3 and 5 file:\n");
            ifstream write1("file3.txt");
            while(getline(write1,str))
                cout<<str<<" ";
             cout<<endl;
        }
        else if(t=="p4")
        {
            printf("\nThis is prime number file:\n");
             ifstream write1("file4.txt");
            while(getline(write1,str))
                cout<<str<<" ";
             cout<<endl;
        }
        else
        {
            printf("\nThis is pevonacci file:\n");
            ifstream write1("file5.txt");
            while(getline(write1,str))
                cout<<str<<" ";
             cout<<endl;
        }
        sleep(1000);
    }
    return 0;
}
