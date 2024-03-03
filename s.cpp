#include <iostream>
using namespace std;
#include <vector>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int maxRepeating(string sequence, string word) 
    {
        int len1 = word.size();
        int len2 = sequence.size();
        int k = 0;
        if(len1 > len2)
        {
            return k;
        }
        int pos = 0;
        vector<int> array;
        while(pos <= (len2 - len1))
        {
            if(sequence[pos] == word[0])
            {
                array.push_back(pos);
                for(int idx = pos; idx < pos + len1; idx++)
                {
                    if(sequence[idx] != word[idx - pos])
                    {
                        array.pop_back();
                        break;
                    }
                }
            }
            pos++;
        }
        int count = 1;
        int pos1 = 1;
        int size = array.size();
        if(size > 1)
        {
            for(int idx = 1; idx < size ; idx++)
            {
                printf("%d\n", array[idx]);
                if((array[idx] - array[idx - pos1]) == len1)
                {
                    count++;
                }
                else
                {
                    pos1++;
                    if(pos1 >= size)
                    {
                        break;
                    }
                    if(k < count)
                    {
                        k = count;
                    }
                    count = 1;
                }
                if(k < count)
                {
                    k = count;
                }
            }
            return k;
        }
        else
        {
            return size;
        }
    }

int main()
{
    string sequence = "aaaaaa";
    string word = "aa";

    int k = maxRepeating(sequence, word);
    printf("%d\n", k);

    return 0;
}