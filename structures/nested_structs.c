#include <stdio.h>
#include <string.h>

struct pokemon {
	int hp;
	float speed;
	char owner[50];
};

struct legendary_pokemon {
	char special_attack[50]; 
	struct pokemon Pokemon;
};

int main() {
	struct pokemon pikachu;
	pikachu.hp = 100;
	pikachu.speed = 400.01;
	strcpy(pikachu.owner, "Ash");

	printf("pikachu :- \n");
	printf("hp = %d\n", pikachu.hp);
	printf("speed = %.2f\n", pikachu.speed);
	printf("owner = %s\n", pikachu.owner);

	struct legendary_pokemon mewtwo;
	strcpy(mewtwo.special_attack, "meow");
	mewtwo.Pokemon.hp = 69;
	mewtwo.Pokemon.speed = 21;
	strcpy(mewtwo.Pokemon.owner, "no-one");

	printf("\nmewtwo :- \n");
	printf("hp = %d\n", mewtwo.Pokemon.hp);
	printf("speed = %.2f\n", mewtwo.Pokemon.speed);
	printf("owner = %s\n", mewtwo.Pokemon.owner);
	printf("special attack = %s\n", mewtwo.special_attack);

	return 0;
}