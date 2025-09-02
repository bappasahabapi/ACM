

/*
steps;
now the loop will continue until

while(string.length() > 0 && string.find(substring)<string.length())
{


 string.find(subString)
 string.erase(startpoint, endpoint);
            = (string.find(subString), subString.length()
}

 */

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.length() > 0 && s.find(part) < s.length())
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
