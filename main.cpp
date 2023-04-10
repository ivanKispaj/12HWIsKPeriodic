//
// main.cpp
// 2023-04-10
// Ivan Konishchev
//

#include "String.h"


int main(int argc, const char *argv[])
{
    // first variant
    String string("abcabcabcabcabcabc");
    int K = 3;
    if (string.IsKPeriodic(K))
    {
        std::cout << "строка: " << string << " -> кратна: " << K << "\n";
    }
    else
    {
        std::cout << "строка: " << string << " не кратна: " << K << "\n";
    }

    // second variant
    String str;
   
    K = 6;
    if (str.IsKPeriodic("cvbcvbcvbcvb", K))
    {
        std::cout << "строка: " << str << " -> кратна: " << K << "\n";
    }
    else
    {
        std::cout << "строка: " << str << " не кратна: " << K << "\n";
    }
    return 0;
}