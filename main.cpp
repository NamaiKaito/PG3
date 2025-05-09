#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <functional>
#include <thread>   
#include <chrono>   


void SetTimeout(std::function<void()> func, int delayMilliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(delayMilliseconds));
    func();
}

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    
    std::cout << "サイコロを振って、その出目が奇数か偶数かを予想してください。\n";
    std::cout << "奇数なら 'odd'、偶数なら 'even' を入力してください: ";
    std::string guess;
    std::cin >> guess;

    
    int dice = rand() % 6 + 1;  

    
    SetTimeout([=]() {
        
        std::cout << "サイコロの出目は: " << dice << std::endl;

        // 奇数か偶数かを判定
        bool isEven = (dice % 2 == 0);

        
        if ((guess == "even" && isEven) || (guess == "odd" && !isEven)) {
            std::cout << "予想が当たりました\n";
        } else {
            std::cout << "予想が外れました\n";
        }
        }, 3000);

    return 0;
}
