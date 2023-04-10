//
// String.h
// 2023-04-10
// Ivan Konishchev
//

#pragma once
#include <string>
#include <iostream>

#define NO_OF_CHARS 256
class String: public std::string
{
    std::string _string;

    void badCharHeuristic(const std::string &str, int size, int badchar[NO_OF_CHARS]);
    int search(const std::string &txt, const std::string &pat);

public:
    String() = default;
    explicit String(std::string &&string) : _string(string) {}
    explicit String(std::string &string) : _string(string) {}
    friend std::ostream &operator<<(std::ostream &out, const String &string)
    {
        out << string._string;
        return out;
    }
    bool IsKPeriodic(int K);
    bool IsKPeriodic(std::string &string, int K);
    bool IsKPeriodic(std::string &&string, int K);
    int size() const
    {
        return _string.size();
    }
};