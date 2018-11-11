#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0;i<n;++i)
            cin >> arr[i];
        sort(arr,arr+n);
//        for(int i = 0;i<n;++i)
//            cout << arr[i]<<" ";
        for(int i = 0;i<n-1;++i)
        {
            if (arr[i] <= k)
            {
                continue;
            }
//            int diff = arr[i] - k;
            arr[i] -= 1;
            arr[i+1] -= 1;
            i--;
//             for(int j = 0;j<n;++j)
//            cout << arr[j]<<" ";
//            cout<<endl;
        }
        int sum=0;
        for(int i = 0;i<n;++i)
            sum += arr[i];
        cout << sum << endl;
    }
    return 0;
}
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        string s;
//        cin >> s;
//        bool collision = false;
//        for (int i = 0;i<s.size() and !collision;++i)
//        {
//            if (s[i] == '.')
//            {
//                continue;
//            }
//            else{
//                int range = s[i] - '0';
//                if (range > 0)
//                {
//                    int current = range;
//                    s[i] = '!';
//                    int left = i-1;
//
//                    while (left >= 0 and current > 0 and !collision)
//                    {
//                        if (s[left] == '.')
//                            s[left] = '!';
//                        else
//                            collision = true;
//                        left--;
//                        current--;
//
//                    }
//                    int right = i+1;
//                    current = range;
//
//                    while (right < s.size() and current > 0 and !collision)
//                    {
//                        if (s[right] == '.')
//                            s[right] = '!';
//                        else
//                            collision = true;
//                        right++;
//                        current--;
//                    }
//                }
//            }
//        }
//        if (collision)
//            cout << "unsafe" << endl;
//        else
//            cout << "safe" << endl;
//    }
//    return 0;
//}
