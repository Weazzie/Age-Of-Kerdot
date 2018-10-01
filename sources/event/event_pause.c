/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventP.c
*/
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/System.h>
#include <SFML/Graphics/Color.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/struct.h"
#include "../../include/cook.h"

void react_to_mousepos_pause_2(ck_t *ck)
{
	if ((ck->mousePos.x > 1050 && ck->mousePos.x < 1479) &&
	(ck->mousePos.y > 673 && ck->mousePos.y < 886)) {
		ck->p->bck[1]->r.left = 1287;
		sfSprite_setTextureRect(ck->p->bck[1]->s, ck->p->bck[1]->r);
	} else {
		ck->p->bck[1]->r.left = 0;
		sfSprite_setTextureRect(ck->p->bck[1]->s, ck->p->bck[1]->r);
	}
}

void react_to_mousepos_pause(ck_t *ck)
{
	if ((ck->mousePos.x > 1050 && ck->mousePos.x < 1479) &&
	(ck->mousePos.y > 200 && ck->mousePos.y < 415)) {
		ck->p->bck[1]->r.left = 429;
		sfSprite_setTextureRect(ck->p->bck[1]->s, ck->p->bck[1]->r);
	} else if ((ck->mousePos.x > 1050 && ck->mousePos.x < 1479) &&
	(ck->mousePos.y > 437 && ck->mousePos.y < 650)) {
		ck->p->bck[1]->r.left = 858;
		sfSprite_setTextureRect(ck->p->bck[1]->s, ck->p->bck[1]->r);
	} else
		react_to_mousepos_pause_2(ck);
}

int react_to_mouseclick_pause(ck_t *ck)
{
	if (ck->mousePos.x > 1050 && ck->mousePos.x < 1479) {
		if (ck->mousePos.y > 200 && ck->mousePos.y < 415 &&
			ck->mousePressed == 1) {
			ck->scene = 3;
		}
		if (ck->mousePos.y > 437 && ck->mousePos.y < 650 &&
			ck->mousePressed == 1) {
			ck->last_scene = ck->scene;
			ck->scene = 2;
		}
		if (ck->mousePos.y > 673 && ck->mousePos.y < 886 &&
			ck->mousePressed == 1) {
			ck->scene = 0;
			sfMusic_destroy(ck->wdw->music);
			set_music(ck, "ext/music/menu.ogg");
		}
	}
	return (0);
}
