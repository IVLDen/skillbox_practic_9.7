
#include <iostream>

int main ()
{
    std::string num;

    short minus_count = 0; // счетчик знаков минуса
    short dot_count = 0; // счетчик точек
    bool num_flag = false; // флаг для проверки наличия цифр

    std::cout << "Введите число: ";
    std::cin >> num;

    if (num[0] == '.') 
    {
        ++dot_count;
        ++minus_count;
    }

    else if ( (num[0] == '-') || (num[0] >= '0' && num[0] <= '9' ) )
    {
        ++minus_count;
    }

    else
    {
        std::cout << "No \n";
        return 0;
    }

    for (int i = 1; (minus_count < 2 && dot_count <2) && (i < num.length()) ; ++i) 
    {
        if (num[i] >= '0' && num[i] <= '9' ) { 
            num_flag = true;
        }
        else if (num[i] == '.') 
        {
            ++dot_count;
        }
        else 
        {
            std::cout << "No \n";
            return 0;
        }
    }

    if (minus_count < 2 && dot_count <2 && (num_flag) )
        std::cout << "Yes \n";
    else
        std::cout << "No \n";

    return 0;
}