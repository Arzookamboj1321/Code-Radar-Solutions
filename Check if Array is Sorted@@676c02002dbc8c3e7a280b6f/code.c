// Your code here...
#include<stdio.h>
{
    for (int i = 1; i < arr.size(); i++)
        if (arr[i - 1] > arr[i])
            return false;

    return true;
}

int main()
{
    vector<int> arr = { 20, 23, 23, 45, 78, 88 };
    cout << (isSorted(arr) ? "Yes\n" : "No\n");
    return 0;
}
    cout << (isSorted(arr) ? "Yes\n" : "No\n");
    return 0;

}