#include <stdlib.h>
#include <stdio.h>

int main()
{
    // ↓おまじない。消さないように
    system("chcp 65001 > nul"); // コンソールをUTF-8にする設定

    struct Vector2 {
        int x;
        int y;
    };

    struct haruki{
        int hp = 50;
		int atack = 0;
		int defense = 0;
        int stamina = 5;
    };



	printf("はるきが笑った\n");

    return 0;
}
