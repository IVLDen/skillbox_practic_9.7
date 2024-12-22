#include <iostream>

int main ()
{
    std::string text;
    short count = 0;

    std::cout << "Введите текст: \n";
    std::getline(std::cin, text);

    
    if (text.length() > 100)
        std::cout << "Будут обработаны первые 100 символов \n";

    
    for (int i = 0; i < text.length(); ++i)
    {
        if (text[i] != ' ')
        {
            count = count + 1;
            for (int j = i; j < text.length() ; ++j)
            {
                if (text[j] == ' ')
                {
                    i = j - 1;
                    break;
                }
                else
                    i = j;

            }

        }

        else
            continue;
    }

    std::cout << "Количество символов: "<<count;
    return 0;
}

    

