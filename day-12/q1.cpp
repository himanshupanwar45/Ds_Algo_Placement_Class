class Solution
{
public:
    bool isPalindrome(string s)
    {

        // transform(s.begin(),s.end(),s.begin(),::tolower);

        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }

        int x = 0, y = s.length() - 1;
        while (x < y)
        {

            if (isalnum(s[x]) && isalnum(s[y]))
            {
                if (s[x] == s[y])
                {
                    x++;
                    y--;
                }
                else
                {
                    return false;
                }
            }
            else if (!isalnum(s[x]))
            {
                x++;
            }
            else
            {
                y--;
            }
        }

        return true;
    }
};