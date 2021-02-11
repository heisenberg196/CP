// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int n;
//     cin >> n;
//     long long int ans = 0;
//     long long int multiplier = 1;

//     while (n > 0)
//     {
//         long long int t = n % 10;

//         if (t == 9 and n == 9)
//         {
//             ans += t * multiplier;
//             break;
//         }
//         {
//             if (t > 4)
//                 ans += (9 - t) * multiplier;
//             else
//                 ans += t * multiplier;
//         }
//         n = n / 10;

//         multiplier *= 10;
//     }
//     cout << ans;
// }


#include <stdio.h>
#define NO_OF_DIGITS 20

void transform_n_to_minimum(char[]);
int main()
{
    char number[NO_OF_DIGITS];
    scanf("%s",number);
    transform_n_to_minimum(number);
    printf("%s",number);
    return 0;
}

void transform_n_to_minimum(char number[])
{
    short i;

    for(i = 0; number[i] != '\0'; i++)
    {
        //Digits greater than 5 are replaced by their compliment
        if(('5' <= number[i]) && (number[i] <= '9'))
        {
            number[i] = '9' - number[i] + '0';
        }
    }

    if(number[0] == '0')//If first digit is zero, then it means it was a 9. We leave it untouched.
    {
        number[0] = '9';
    }
}