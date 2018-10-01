/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventOsound.c
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

void react_to_click_sound(ck_t *ck)
{
	if ((ck->mousePos.x > 122 && ck->mousePos.x < 373) &&
	(ck->mousePos.y > 58 && ck->mousePos.y < 307) &&
	ck->mousePressed == 1) {
		sfMusic_setVolume(ck->wdw->music, 0);
		ck->wdw->volume = 0;
		ck->o->sound[1]->p.x = 122;
		sfSprite_setPosition(ck->o->sound[1]->s, ck->o->sound[1]->p);
	} else if ((ck->mousePos.x > 373 && ck->mousePos.x < 624) &&
	(ck->mousePos.y > 58 && ck->mousePos.y < 307) &&
	ck->mousePressed == 1) {
		sfMusic_setVolume(ck->wdw->music, 25);
		ck->wdw->volume = 25;
		ck->o->sound[1]->p.x = 373;
		sfSprite_setPosition(ck->o->sound[1]->s, ck->o->sound[1]->p);
	} else
		react_to_click_sound_2(ck);
}

void react_to_click_sound_2(ck_t *ck)
{
	if ((ck->mousePos.x > 624 && ck->mousePos.x < 875) &&
	(ck->mousePos.y > 58 && ck->mousePos.y < 307) &&
	ck->mousePressed == 1) {
		sfMusic_setVolume(ck->wdw->music, 50);
		ck->wdw->volume = 50;
		ck->o->sound[1]->p.x = 624;
		sfSprite_setPosition(ck->o->sound[1]->s, ck->o->sound[1]->p);
	} else if ((ck->mousePos.x > 875 && ck->mousePos.x < 1126) &&
	(ck->mousePos.y > 58 && ck->mousePos.y < 307) &&
	ck->mousePressed == 1) {
		sfMusic_setVolume(ck->wdw->music, 75);
		ck->wdw->volume = 75;
		ck->o->sound[1]->p.x = 875;
		sfSprite_setPosition(ck->o->sound[1]->s, ck->o->sound[1]->p);
	} else
		react_to_click_sound_3(ck);
}

void react_to_click_sound_3(ck_t *ck)
{
	if ((ck->mousePos.x > 1126 && ck->mousePos.x < 1377) &&
	(ck->mousePos.y > 58 && ck->mousePos.y < 307) &&
	ck->mousePressed == 1) {
		sfMusic_setVolume(ck->wdw->music, 100);
		ck->wdw->volume = 100;
		ck->o->sound[1]->p.x = 1125;
		sfSprite_setPosition(ck->o->sound[1]->s, ck->o->sound[1]->p);
	}
}
