/*
 * textBox.hpp
 *
 *  Created on: 17.03.2018
 *      Author: Alexander
 */

#ifndef TEXTBOX_HPP_
#define TEXTBOX_HPP_

#include <SDL2/SDL.h>
#include "sprite.hpp"

class Graphics;

class TextBox {
public:
	TextBox(Graphics &graphics);
	void draw(Graphics &graphics);
	bool isVisible() const;
	void setVisible(bool value);
private:
	const int textBoxPosX;
	const int textBoxPosY;
	const int textBoxWidth;
	const int textBoxHeight;

	bool _visible;
	SDL_Rect _sourceRect;
	SDL_Texture* _spriteSheet;
};



#endif /* TEXTBOX_HPP_ */