#include <stdio.h>

// function for finding leaders
void leaderprint(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                break;
            }

            if (j == n - 1)
                printf("%d ", arr[i]);
        }
    }
}

int  main()
{

    int t;
    scanf("%d", &t);

    while (t--){

        int n;
        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        //int n = sizeof(arr) / sizeof(arr[0]);
        
        // calling function
        leaderprint(arr, n);
    }
    return 0;
}