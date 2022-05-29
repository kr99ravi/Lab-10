#include <iostream>
using namespace std;
// cgs system
class DM
{
    int mts; // meters
    int cms; // centimeters
public:
    void showdata()
    {
        cout << "Meters and centimeters in CGS system:"<<endl;
        std::cout << mts << " meters " << cms << " centimeters" << std::endl;
    }
    DM(int x, int y) // parameterized constructor
    {
        mts = x;
        cms = y;
    }
    int getcms()
    {
        return cms;
    }
    int getmts()
    {
        return mts;
    }
};
class DB
{
    int feet;
    int inches;

public:
    DB() // default constructor
    {
        feet = 0;
        inches = 0;
    }
    DB(DM d2)
    {
        int x;
        x = d2.getcms() + d2.getmts() * 100;
        x = x / 2.5;
        feet = x / 12;
        inches = x % 12;
    }
    void showdata()
    {
        cout << "feet and inches in FPS system:"<<endl;
        std::cout << feet << " feet " << inches << " inches" << std::endl;
    }
};

int main()
{
    DM d1(6, 11);
    DB d2;
    d2 = d1;
    d1.showdata(); // to display CGS values
    d2.showdata(); // to display FPS values
    return 0;
}
