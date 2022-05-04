#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int n=0,K=0,N=0,sum=0;

    cin >> n;
    cin >> K;
    if (K>1 && K<100)
    {
        for (int i = 1; i < n; ++i)
        {
            cin >> N;
            if ((N%K==0) && (K!=0))
            {
                sum++;
            }else if(N == 0){
                sum--;
            }
        }
    }
    cout << sum;

    system("pause");
    return 0;
}
