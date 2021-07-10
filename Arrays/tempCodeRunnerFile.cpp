int main(){
    int n, pos;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>pos>>arr[i];
    }

    ArrInsertatGivenPos(pos, arr, n);

}