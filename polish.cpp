#include <iostream>
int main()
{
    double a, b, c;
    char x;
    std::cout << "Enter the expression: " << std::endl;
    std::cin >> x;
        if(x != 'q')
        { 
            std::cin >> a >> b;
        }
    if(x != 'q') 
        do
        {
                switch(x)
                {
                    case('+'): c = a + b; 
                    break;
                    
                    case('-') : c = a - b;
                    break;

                    case('*') : c = a * b;
                    break;

                    case('/') : c = a / b;
                    break;
                }
                std::cout << a << " " << x << " "<< b << " = ";
                std::cout << c << std::endl; 
            
            std::cout << "Enter the expression: " << std::endl;
            std::cin >> x;
            if(x != 'q')
            { 
                std::cin >> a >> b;
            }
        
        } while(x != 'q');

    return 0;
}