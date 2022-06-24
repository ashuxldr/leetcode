#include <bits/stdc++.h>
class Solution {
public:
    vector <string> findWords(vector <string> &words)
{
    unordered_map <char , int> rowId;
    string temp = "qwertyuiopQWERTYUIOP";
    for(char &i : temp)
        rowId[i] = 1;
    temp = "asdfghjklASDFGHJKL";
    for(char &i : temp)
        rowId[i] = 2;
    temp = "zxcvbnmZXCVBNM";
    for(char &i : temp)
        rowId[i] = 3;
    bool same_row;
    vector <string> result;
    for(string &word : words)
    {
        same_row = true;
        for(int i = 1 ; i < word.size() ; i++)
        {
            if(rowId[word[i]] != rowId[word[0]])
            {
                same_row = false;
                break;
            }
        }
        if(same_row)
            result.push_back(word);
    }
    return result;
}
};