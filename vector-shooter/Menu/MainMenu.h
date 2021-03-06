/**
==========================================================================
						MainMenu
==========================================================================
**/

#ifndef MAIN_MENU_H_INCLUDED
#define MAIN_MENU_H_INCLUDED

#include "MenuObject.h"

class MainMenuState;
class ControllerXBox;
class Game;

class MainMenu
{
public :
	MainMenu();
	void			Init(sf::RenderWindow&,MainMenuState&,Game&);
	void			Update();

private :
	std::vector<MenuObject>		Objects_;

	int								ActiveObject_;

	MainMenuState*					GameState_;
	sf::RenderWindow*				Window_;
	sf::Texture*					ButtonOff_;
	sf::Texture*					ButtonOn_;
	sf::Texture*					BackGroundTexture_;
	sf::Sprite						BackGroundSprite_;
	Game*							Game_;
	

	float							ChangeOptionTick_;

};

#endif
