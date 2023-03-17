class Solution
{
public:
    bool canThreePartsEqualSum(vector &arr)
    {
        int totalsum = 0;
        int leftsum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            totalsum = totalsum + arr[i];
        }
        for (int i = 0; i < arr.size(); i++)
        {
            leftsum = leftsum + arr[i];
            if ((leftsum * 3) == totalsum)
            {
                int furthersum = 0;
                i++;
                while (i < arr.size())
                {
                    furthersum = furthersum + arr[i];
                    if (i == arr.size() - 1)
                    {
                        return false;
                    }
                    if (furthersum == leftsum && furthersum == (totalsum - (furthersum + leftsum)))
                    {
                        return true;
                    }
                    i++;
                }
            }
        }
        return false;
    }
};