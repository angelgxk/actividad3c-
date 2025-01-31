int main()
{
    int nums[NUM];
    int total = 0;
    for (int i = 0; i < NUM; i++)
    {
        cout << "ingrese un digito";
        cin >> nums[i];
        total += nums[i];
    }
    cout << "el total es :" << total << endl;
    system("pause");
    return 0;
}