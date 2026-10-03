#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
    //1.
    int size = 0;

    while (size < 5 || size > 10) 
    {
        std::cout << "Введите размер массива (от 5 до 10): ";
        std::cin >> size;
        if (size < 5 || size > 10) 
        {
            std::cout << "Неверный размер! Попробуйте еще раз.\n";
        }
    }


    int mas[10];

    std::cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; i++) 
    {
        std::cout << "Элемент [" << i << "]: ";
        std::cin >> mas[i];
    }

    int min_val = mas[0];
    int max_val = mas[0];

    for (int i = 1; i < size; i++) 
    {
        if (mas[i] < min_val) 
        {
            min_val = mas[i];
        }
        if (mas[i] > max_val) 
        {
            max_val = mas[i];
        }
    }

    std::cout << "\nМинимальный элемент: " << min_val << "\n";
    std::cout << "Максимальный элемент: " << max_val << "\n";


    ////2.
    int size;
    std::cout << "Введите количество элементов в массиве: ";
    std::cin >> size;


    int masiv[100];


    std::cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << "Элемент [" << i << "]: ";
        std::cin >> masiv[i];
    }

    int porog;
    std::cout << "\nВведите пороговое значение: ";
    std::cin >> porog;

    int sumporoga = 0;

    for (int i = 0; i < size; i++)
    {
        if (masiv[i] < porog)
        {
            sumporoga += masiv[i];
        }
    }

    std::cout << "Сумма элементов, которые меньше " << porog << ": " << sumporoga << "\n";

    //3
    double profit[12];
    std::cout << "Введите прибыль фирмы за каждый месяц года:\n";
    for (int i = 0; i < 12; i++)
    {
        std::cout << "Месяц " << i + 1 << ": ";
        std::cin >> profit[i];
    }

    int first_month, second_month;
    std::cout << "\nВведите диапазон месяцев для поиска (например, 3 и 6 через пробел): ";
    std::cin >> first_month >> second_month;

    int start_idx = first_month - 1;
    int end_idx = second_month - 1;

    double max_profit = profit[start_idx];
    double min_profit = profit[start_idx];
    int max_month = first_month;
    int min_month = first_month;

    for (int i = start_idx; i <= end_idx; i++)
    {
        if (profit[i] > max_profit)
        {
            max_profit = profit[i];
            max_month = i + 1;
        }
        if (profit[i] < min_profit)
        {
            min_profit = profit[i];
            min_month = i + 1;
        }
    }

    std::cout << "\nРезультаты в диапазоне с " << first_month << " по " << first_month << "-й месяц:\n";
    std::cout << "Максимальная прибыль: " << max_profit << " (Месяц: " << max_month << ")\n";
    std::cout << "Минимальная прибыль: " << min_profit << " (Месяц: " << min_month << ")\n";

	return 0;
}