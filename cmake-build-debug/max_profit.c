{
    int n;
    int sum;

    if (pricesSize < 2)
        return (0);
    n = 1;
    sum = 0;
    while(n < pricesSize)
    {
        if (prices[n] > prices[n - 1])
        {
            sum += prices[n] - prices[n - 1];
        }
        n++;
    }
    return (sum);
}