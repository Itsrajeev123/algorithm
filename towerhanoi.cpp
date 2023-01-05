#include <iostream>
using namespace std;

void towers(int, char, char, char);

int main()
{
    int num;

    cout<<"Enter the number of disks : ";
    cin>>num;
    cout<<"The sequence of moves involved in the Tower of Hanoi are :n"<<endl;
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char from, char to, char aux)
{
    if (num == 1)
    {
        cout<<"n Move disk 1 from peg "<<from<<" to peg "<<to<<endl;
        return;
    }
    towers(num - 1, from, aux, to);
    cout<<"n Move disk "<<num<<" from peg "<<from<<" to peg "<<to
    <<endl;
    towers(num - 1, aux, to, from);
}
