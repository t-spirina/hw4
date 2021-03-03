#include <iostream>



int main()
{
    int num1, num2, sum;
//1. написать программу, проверяющую что сумма двух чисел лежит в пределах от 10 до 20 включительно
    //если да - вывесть true, иначе false
    std::cout << "Введите первое число: " << std::endl;
    std::cin >> num1;
    std::cout << "Введите второе число: " << std::endl;
    std::cin >> num2;
    sum = num1 + num2;
    //первый вариант
    if ((sum >= 10) && (sum <= 20))
       std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
    //второй вариант
    if (sum < 10)
        std::cout << "False" << std::endl;
    else if (sum > 20)
        std::cout << "False" << std::endl;
    else
        std::cout << "True" << std::endl;

//2. написать программу, проверяюшую является ли введенное число простым
     // простым является положительное число больше 1, которое делится только само на себя и на 1
    std::cout << "Введите число: " << std::endl;
    std::cin >> num1;
    if( num1 < 2)
        std::cout << "Введенное число не является простым" << std::endl;
    else  if (num1 == 2)
        std::cout << "Введенно простoe число" << std::endl;
    else
    {
        num2 = 0;
        for (int i=2;i>num1;i++)
        {
            if ((num1 % i) == 0)
            {
               num2 = 1;
               break;
            }
         }

        if (num2)
            std::cout << "Введенное число не является простым " << std::endl;
        else
            std::cout << "Введенно простое число" << std::endl;
     }

//3. написать программу, выводящую истину, если две введенные константы равны 10 сами по себе, или их сумма равна 10
    const int numA = 10;
    const int numB = 10;
    sum=numA + numB;
    //первый вариант
    if ((numA == 10) || (numB == 10) || (sum ==10))
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;

    // второй вариант - то же самое через if / else if
    //сначала смотрю, если одна из констант 10 - условие выполнилось
    if (numA==10)
         std::cout << "True" << std::endl;
    else if (numB==10)
        std::cout << "True" << std::endl;
    //если сумма 10 - условие выполнилось
    else if (sum ==10)
        std::cout << "True" << std::endl;
    else  // ничего из перечисленного - False
         std::cout << "False" << std::endl;


    //если только одна константа может быть 10 в один момент, то будет так:
    if  (((numA == 10) || (numB == 10) || (sum ==10))  && (sum !=20) )
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;


    // то же самое через if / else if
    if ((numA == 10) && (numB != 10))       //если одна константа 10
        std::cout << "True" << std::endl;
    else if ((numA != 10) && (numB == 10))  //если другая 10
         std::cout << "True" << std::endl;
    else if (sum ==10)                      // или их сумма 10
        std::cout << "True" << std::endl;
    else                                    //если ни одна не 10, или обе равны 10, или сумма не 10
         std::cout << "False" << std::endl;


//4 определение високосности года
   std::cout << "Введите год: " << std::endl;
    std::cin >> num1;
   //делится на 400, значит и на 4 делится - високосный
    if (num1 % 400 == 0)
       std::cout << num1 << " год високосный" << std::endl;
   // если не делится на 400 нацело, и на 100 нацело, но на 4 делится - високосный
   else if ((num1 % 4 == 0)&&( num1 % 100 != 0))
       std::cout << num1 << " год високосный" << std::endl;
   else
       std::cout << num1 << " год не високосный" << std::endl;

    return 0;
}
