#include<iostream>
using namespace std;

class Boat
{
private:
    double weight;

public:
    void SetWeight(double w)
    {
        weight=w;
    }
    friend double getTotalWeight();
    double GetWeight()
    {
        return weight;
    }
};

class Car
{
private:
    double weight;

public:
    void SetWeight(double w)
    {
        weight=w;
    }
    friend double getTotalWeight();
    double GetWeight()
    {
        return weight;
    }
};

double getTotalWeight(Boat &a,Car &b)
{
    return a.GetWeight()+b.GetWeight();
}

int main()
{
    Boat a;Car b;
    int x,y;
    cin>>x;
    cin>>y;
    a.SetWeight(x);
    b.SetWeight(y);
    cout<<getTotalWeight(a,b)<<endl;
    return 0;
}
