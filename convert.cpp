// convert.cpp -- convert stone to pound
#include<iostream>
int stonetolb(int);                             // function prototype
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pound = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pound << " pounds." << endl;
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}