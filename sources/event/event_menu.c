/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventM.c
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

void react_to_mousepos_menu_2(ck_t *ck)
{
	if ((ck->mousePos.x > 1450 && ck->mousePos.x < 1879) &&
	(ck->mousePos.y > 673 && ck->mousePos.y < 886)) {
		ck->m->bck[1]->r.left = 1287;
		sfSprite_setTextureRect(ck->m->bck[1]->s, ck->m->bck[1]->r);
	} else {
		ck->m->bck[1]->r.left = 0;
		sfSprite_setTextureRect(ck->m->bck[1]->s, ck->m->bck[1]->r);
	}
}

void react_to_mousepos_menu(ck_t *ck)
{
	if ((ck->mousePos.x > 1450 && ck->mousePos.x < 1879) &&
	(ck->mousePos.y > 200 && ck->mousePos.y < 415)) {
		ck->m->bck[1]->r.left = 429;
		sfSprite_setTextureRect(ck->m->bck[1]->s, ck->m->bck[1]->r);
	} else if ((ck->mousePos.x > 1450 && ck->mousePos.x < 1879) &&
	(ck->mousePos.y > 437 && ck->mousePos.y < 650)) {
		ck->m->bck[1]->r.left = 858;
		sfSprite_setTextureRect(ck->m->bck[1]->s, ck->m->bck[1]->r);
	} else
		react_to_mousepos_menu_2(ck);
}

int react_to_mouseclick_menu(ck_t *ck)
{
	if (ck->mousePos.x > 1450 && ck->mousePos.x < 1879) {
		if (ck->mousePos.y > 200 && ck->mousePos.y < 415 &&
			ck->mousePressed == 1) {
			ck->scene = 3;
			sfMusic_destroy(ck->wdw->music);
			set_music(ck, "ext/music/game.ogg");
			sfWindow_setMouseCursorVisible((sfWindow *)ck->wdw->wdw,
			0);
		}
		if (ck->mousePos.y > 437 && ck->mousePos.y < 650 &&
			ck->mousePressed == 1) {
			ck->last_scene = ck->scene;
			ck->scene = 2;
		}
		if (ck->mousePos.y > 673 && ck->mousePos.y < 886 &&
			ck->mousePressed == 1) {
			return (1);
		}
	}
	return (0);
}
