#include <iostream>
using namespace std;

int main()
{

    /*
    A B C D
    A B C D
    A B C D
    A B C D
    */
    // int n;
    // cout << "Enter 'n' : ";
    // cin >> n ;

    // for(int i = 0;i<=n ; i++){
    //     char ch = 'A';
    //     for(int j = 0;j<n;j++){
    //         cout << ch ;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    /*---------------------End---------------------*/

    /*
    1 2 3
    4 5 6
    7 8 9
    */
    /*int n;
    cout << "Enter 'n' : ";
    cin >> n ;

    int num = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout <<" "<< num<<" ";
            num++;
        }
        cout <<endl;
    }
     */

    /*---------------------End---------------------*/

    /*
    A B C D E
    F G H I J
    K L M N O
    P Q R S T
    U V W X Y
    */

    /*int n;
     cout << "Enter 'n' = ";
     cin >> n;

     char ch = 'A';
     for (int i = 0; i <= n; i++)
     {
         for (int j = 0; j <= n; j++)
         {

             cout << ch << " ";
             ch++;
         }
         cout << endl;
     }
    */

    /*---------------------End---------------------*/

    /*
     *
     *  *
     *  *  *
     *  *  *  * */

    /*
    int n;
    cout << "Enter 'n' = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }*/

    /*---------------------End---------------------*/

    /*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5 */

    /*
            int n;
        cout << "Enter 'n' = ";
        cin >> n;


        for (int i = 0; i < n; i++)
        {
                int num =1;
            num = num + i;
            for (int j = 0; j < i + 1; j++)
            {
                cout << num << " ";
            }
            cout << endl;
        }*/

    /*---------------------End---------------------*/

    /*
    A
    B B
    C C C */

    /*
     int n;
    cout << "Enter 'n' = ";
    cin >> n;


    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch = ch + i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    */

    /*---------------------End---------------------*/

    /*
    1
    1 2
    1 2 3
    1 2 3 4 */

    /*
    int n;
    cout << "Enter 'n' = ";
    cin >> n;


    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }*/

    /*---------------------End---------------------*/

    /*
    1 
    2 1 
    3 2 1 
    4 3 2 1 */

    /*
    int n;
    cout << "Enter 'n' = ";
    cin >> n;


    for (int i = 0; i < n; i++)
    {
        int num = 1;
        num += i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
    */

    return 0;
}