# Домашняя работа 12.7

## Функция проверки кратности строки заданному числу 'K;

### Класс и методы ------

```C++
class String
```
## methods
```C++
    bool IsKPeriodic(int K); // if the class was created with the string
    bool IsKPeriodic(std::string &string, int K); // for lValue
    bool IsKPeriodic(std::string &&string, int K); // for rValue
```
## Методы вернут true если строка кратна 'K' либо false!
```C++
// Выведет сообщение если строка пуста (был использован инициализатор по умолчанию)!! и предлоджит воспользоваться другим методом
bool IsKPeriodic(int K); 
```

## Using
```C++
#include "String.h"
    String string("abcabcabcabcabcabc"); // строка для поиска
    int K = 3; // число которому строка должна быть кратна

    if (string.IsKPeriodic(K)) // если кратна
    {
        std::cout << "строка: " << string << " -> кратна: " << K << "\n";
    }
    else
    {
        std::cout << "строка: " << string << " не кратна: " << K << "\n";
    }
```