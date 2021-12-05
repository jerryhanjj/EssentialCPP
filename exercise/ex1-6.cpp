#include <iostream>
#include <vector>
#include <string>
using namespace std;

void ex1_6_vector()
{
    vector<int> ivec;
    int ival;

    while (cin >> ival)
    {
        ivec.push_back(ival);
    }

    int sum = 0;
    for (int i = 0; i < ivec.size(); ++i)
    {
        sum += ivec[i];
    }

    int average = sum / ivec.size();

    cout << "Sum: " << sum << endl
         << "Average: " << average << endl;
}

void ex1_6_array()
{
    const int arr_size = 5;
    int iarr[arr_size] = {0};
    int ival, icnt = 0;

    while (cin >> ival && icnt < arr_size)
    {
        iarr[icnt++] = ival;
    }

    int sum = 0;
    for (int i = 0; i < icnt; ++i)
    {
        sum += iarr[i];
    }

    int average = sum / icnt;
    cout << "Sum: " << sum << endl
         << "Average: " << average << endl;
}

int main()
{
    ex1_6_vector();
    // ex1_6_array();
    return 0;
}