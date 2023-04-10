//
// String.cpp
// 2023-04-10
// Ivan Konishchev
//

#include "String.h"

// public methods
bool String::IsKPeriodic(int K)
{
    // if K less or equal zero
    if (K <= 0 || _string.empty())
    {
        if (_string.empty())
        {
            std::cout << "Строка пустая!\n";
            std::cout << "Воспользуйтесь методом: IsKPeriodic(std::string, int) \n";
        }
        return false;
    }
    // if the string is equal to itself
    if (_string.size() == K)
    {
        return true;
    }
    // getting a substring for the search
    std::string pat;
    for (int i = 0; i < K; i++)
    {
        pat = pat + _string[i];
    }

    int res = search(_string, pat);
    if (res % K == 0)
    {
        return true;
    }

    return false;
}

bool String::IsKPeriodic(std::string &string, int K)
{
    _string = string;
    if (IsKPeriodic(K))
    {
        return true;
    }
    return false;
}

bool String::IsKPeriodic(std::string &&string, int K)
{
    _string = string;
    if (IsKPeriodic(K))
    {
        return true;
    }
    return false;
}

// private methods
int String::search(const std::string &txt, const std::string &pat)
{
    int m = pat.size();
    int n = txt.size();

    int badchar[NO_OF_CHARS];

    badCharHeuristic(pat, m, badchar);
    int s = 0;
    int k = -1;
    while (s <= (n - m))
    {
        int j = m - 1;

        while (j >= 0 && pat[j] == txt[s + j])
            j--;

        if (j < 0)
        {
            k = s;
            s += (s + m < n) ? m - badchar[txt[s + m]] : 1;
        }
        else
        {
            int bc = badchar[txt[s + j]];
            s += std::max(1, j - bc);
        }
    }
    return k;
}

void String::badCharHeuristic(const std::string &str, int size, int badchar[NO_OF_CHARS])
{
    int i;

    for (i = 0; i < NO_OF_CHARS; i++)
        badchar[i] = -1;

    for (i = 0; i < size; i++)
        badchar[(int)str[i]] = i;
}
