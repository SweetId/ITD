/*!
 *	\file jeu.h
 *	\author André & Laury
 *	\version 0.1
 *	\date 04/04/13
 *
 *	\brief Fonctions du jeu (menu, déroulement).
 */

#ifndef JEU_H
#define JEU_H

#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <SDL/SDL.h>

#include "list.h"
#include "map.h"
#include "monster.h"
#include "tower.h"

/*!
 * \enum MENU_CHOICE
 * \brief Toutes les options du menu principal
 */
typedef enum {
	MENU_EXIT = 0, /*!< Quitter le jeu */
	MENU_MAP = 1, /*!< Affichage des maps */
	MENU_HELP = 2 /*!< Affichage de l'aide */
} MENU_CHOICE;

/*!
 * \fn extern void launchGameWithMap(const char* map)
 * \brief Lance une partie directement avec la carte map
 *
 * \param map Carte à charger
 */
extern void launchGameWithMap(const char* map);

/*!
 * \fn extern int startMenu()
 * \brief Lance la boucle de menus
 *
 * \return -1 en cas d'erreur, 0 sinon.
 */
extern int startMenu();

/*!
 * \fn extern int showMainMenu()
 * \brief Affiche le menu principal
 *
 * \return Option choisie
 */
extern MENU_CHOICE showMainMenu();

/*!
 * \fn extern Map* showMapMenu()
 * \brief Affiche le menu de sélection de map
 * 
 * \return La carte chargée.
 */
extern Map* showMapMenu();

/*!
 * \fn extern void showHelpMenu()
 * \brief Affiche le menu d'aide
 */
extern void showHelpMenu();


/*!
 * \fn extern int play(Map* map)
 * \brief Boucle de jeu
 *
 * \param map Carte du jeu à afficher
 * \return 1 si victoire, 0 si défaite, -1 si quitte.
 */
extern int play(Map* map);

/*!
 * \fn extern void showEndMenu(int victory)
 * \brief Affiche le menu de victoire/défaite
 *
 * \param victory Entier différent de 0 si victoire.
 */
extern void showEndMenu(int victory);

#endif