class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string s = "";
        while (columnNumber)
        {
            s = (char)('A' + (columnNumber - 1) % 26) + s;
            columnNumber = (columnNumber - 1) / 26;
        }
        return s;
    }
};