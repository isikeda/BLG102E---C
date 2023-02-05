#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum suit_e {CLUBS, DIAMONDS, HEARTS, SPADES};

struct card_s{
	char face[8];
	enum suit_e suit;;
};

typedef struct card_s card_t;

int main(){
	char face_name[] = "13";
	
	card_t card1;
	strcpy(card1.face, face_name);
//	card1.face = face_name;
	card1.suit = HEARTS;
	printf("%s of %d\n", card1.face, card1.suit);
	
	card_t card2 = card1;
	strcpy(card2.face, "8");
	
	printf("%s of %d\n", card2.face, card2.suit);
	printf("%s of %d\n", card1.face, card1.suit);
	
	card_t *card3 = (card_t*) malloc(sizeof(card_t));
	
	strcpy(card3->face, "10");
	card3->suit = DIAMONDS;
	printf("%s of %d\n", card3->face, card3->suit);
	free(card3);
	
	return 0;
}