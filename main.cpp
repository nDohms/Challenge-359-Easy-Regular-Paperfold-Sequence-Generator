#include <iostream>

using namespace std;

void Solution1()
{
    short int repetitions = 8;
    short int sequenz[2000];
    int counter;
    short int length = 1;
    short int newLength;

    sequenz[0] = 1;
    for (int i = 1; i <= repetitions; i++)
    {
        if(i==repetitions)
        {
           for(int j = 0; j < length; j++)
        {
            cout << sequenz[j];
        }
        }
        sequenz[length] = 1;
        newLength = (length *2)+1;
        counter = length-1;
        for (int k = length+1; k < newLength; k++)
        {
            if(sequenz[counter] == 1)
            {
                sequenz[k] = 0;
            }
            else if(sequenz[counter] == 0)
            {
                sequenz[k] = 1;
            }
            counter--;
        }
        length = newLength;
    }

}

int main()
{
    Solution1();
    return 0;
}
