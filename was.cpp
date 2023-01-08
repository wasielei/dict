#include <iostream>
#include <cmath>
using namespace std;

class NumUtils {

    public:
    static long decimalToOctal(long n) {
    int remainder; 
    long octal = 0, i = 1;
   
    while(n != 0) {
        remainder = n%8;
        n = n/8;
        octal = octal + (remainder*i);
        i = i*10;
    }
    return octal;
    }
};

int main()
{
    NumUtils numUtils;

    cout << "NumUtils instance...";
    int a, b, d, e, c, n = 10, temp, temp2;
    int arr[] = {1245, 2163, 5359, 1252, 1735,3456,7856,4397,2475,1253};

    // arrange arr items
    for (a = 0; a < (n - 1); a++)
    {
        for (b = 0; b < (n - a - 1); b++)
        {
            if (arr[b] > arr[b + 1])
            {
                temp = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = temp;
            }
        }
    }
    for (a = 0; a < n; a++)
    {
        cout << arr[a] << "\t";
    }
    cout<<"\n";
    for (a = 0; a < (n - 1); a++)
    {
        for (b = 0; b < (n - a - 1); b++)
        {
            // convert integer to array
            int current = arr[b]; // 103
            // cout << current << " -- current \n";
            int len = int(log10(current) + 1); // 3
            int num[len];
            for (int i = (len - 1); i >= 0; i--)
            {
                num[i] = current % 10;
                current = current / 10;
            }
            // for (const auto &value : num)
            // {
            //     std::cout << value << ' ';
            // }
            //---------------------------------

            // arrange num digits
            for (c = 0; c < (len - 1); c++)
            {
                for (d = 0; d < (len - a - 1); d++)
                {
                    if (num[d] > num[d + 1])
                    {
                        temp = num[d];
                        num[d] = num[d + 1];
                        // temp = numUtils.decimalToOctal(temp);
                        num[d + 1] = temp;
                    }
                }
            }
             // turn num array into number
                    int j, m = 0;
                    for (j = 0; j < len; j++) {
                        m = 10 * m + num[j];
                    }
                        arr[b] = m;
            for (c = 0; c < n; c++)
            {
                // cout << arr_result[c] << "\n";
            }

            //---------------------------------
        }
    }
//final print
 for (a = 0; a < (n - 1); a++)
    {
        for (b = 0; b < (n - a - 1); b++)
        {
            if (arr[b] > arr[b + 1])
            {
                temp = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = temp;
            }
        }
    }
    for (a = 0; a < n; a++)
    {
        cout << arr[a] << "\t";
    }




}


