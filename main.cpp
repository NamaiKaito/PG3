#include <stdio.h>
#include <list>
#include <iostream>
#include <string.h>  

using namespace std;

int main(void) {
    // 1970年の駅名リスト（std::listを使用）
    list<const char*> eki_list{
        "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
    };

    // 1970年のリスト表示
    printf("1970年\n");
    for (list<const char*>::iterator it = eki_list.begin(); it != eki_list.end(); ++it) {
        cout << *it << endl;
    }

    // 2019年：西日暮里駅を日暮里の次に追加
    printf("\n2019年\n");
    for (list<const char*>::iterator it = eki_list.begin(); it != eki_list.end(); ++it) {
        cout << *it << endl;

        if (strcmp(*it, "Nippori") == 0) {
            ++it;  
            it = eki_list.insert(it, "Nishi-Nippori");
            cout << *it << endl;  
        }
    }

    // 2022年：高輪ゲートウェイ駅を田町の次に追加
    printf("\n2022年\n");
    for (list<const char*>::iterator it = eki_list.begin(); it != eki_list.end(); ++it) {
        cout << *it << endl;

        if (strcmp(*it, "Tamachi") == 0) {
            ++it; 
            it = eki_list.insert(it, "Takanawa Gateway");
            cout << *it << endl;  
        }
    }

    return 0;
}



