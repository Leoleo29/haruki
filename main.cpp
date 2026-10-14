#include <stdlib.h>
#include <stdio.h>

int main()
{
    // ↓おまじない。消さないように
    system("chcp 65001 > nul"); // コンソールをUTF-8にする設定

<<<<<<< HEAD
	printf("はるきが笑った\n");
=======
	enum {
		yes = 1,
		no = 0
	};

    struct Vector2 {
        int x;
        int y;
    };

    struct humann{
        int hp ;
		int atack ;
		int defense;
        int stamina;
    };

	humann haruki{
		.hp = 50,
		.atack = 0,
		.defense = 0,
		.stamina = 5
	};

	printf("はるきの一日へようこそ\n\n");
	printf("prease to ENTER\n");


	/*for (haruki.stamina <= 0) {
		scanf_s("%d", &haruki.stamina);
	}*/

	printf("はるきが笑った\n");
>>>>>>> origin/はるきの冒険

    return 0;
}
