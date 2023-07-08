#include <iostream>

int main()
{
    int num1, num2, sum;
    
    std::cout << "Lutfen bir sayi girin: ";
    std::cin >> num1;
    
    std::cout << "Lutfen bir baska sayi daha girin: ";
    std::cin >> num2;
    
    sum = num1 + num2;
    
    std::cout << "Girilen sayilarin toplami: " << sum << std::endl;
    std::cout << "Program basariyla sonlandi!";
    
    return 0;
}