#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

// コールバック関数
void DispResult(int* s, int* kye) {
    int dice = rand() % 2;

    if (dice == *kye) {
        if (dice == 0)
            printf("%dで丁(偶数)でした。当たり\n", dice);
        else
            printf("%dで半(奇数)でした。当たり\n", dice);
    } else {
        if (dice == 1)
            printf("%dで半(奇数)でした。はずれ\n", dice);
        else
            printf("%dで丁(偶数)でした。はずれ\n", dice);
    }
}

// setTimeout関数
void setTimeout(std::function<void(int*, int*)> p, int seconds, int kye) {
    // コールバック関数を呼び出す前に指定した秒数だけ待機
    for (int i = 0; i < seconds; i++) {
        Sleep(1000);  // 1秒待機
        printf("%d...\n", seconds - i);  // 残り時間表示
    }

    // コールバック関数を実行
    p(&seconds, &kye);
}

int main() {
    int kye;

    srand(static_cast<unsigned int>(time(NULL))); // 乱数の初期化
    printf("丁(偶数)なら0、半(奇数)なら1を入力してください\n");
    scanf_s("%d", &kye);

    
    if (kye != 0 && kye != 1) {
        printf("無効な入力です。0または1を入力してください。\n");
        return 1;  
    }

    if (kye == 0) {
        puts("あなたは丁(偶数)を選びました");
    } else {
        puts("あなたは半(奇数)を選びました");
    }

   
    std::function<void(int*, int*)> p = [](int* s, int* kye) { DispResult(s, kye); };

    setTimeout(p, 3, kye);

    return 0;
}

