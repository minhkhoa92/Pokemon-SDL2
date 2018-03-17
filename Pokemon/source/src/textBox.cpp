#include "textBox.hpp"
#include "graphics.hpp"

TextBox::TextBox(Graphics &graphics) :
		textBoxPosX(57),
		textBoxPosY(370),
		textBoxWidth(260),
		textBoxHeight(52)
{
	this->_visible = false;
	this->_sourceRect.w = 912;
	this->_sourceRect.h = 160;
	this->_sourceRect.x = 0;
	this->_sourceRect.y = 0;
	this->_spriteSheet = SDL_CreateTextureFromSurface(graphics.getRenderer(), graphics.loadImage("content/sprites/textBox.png"));
	if (this->_spriteSheet == NULL) {
		printf("\nError: Unable to load image\n");
		printf(SDL_GetError());
	}
}

void TextBox::draw(Graphics &graphics) {
	if (this->_visible) {
		SDL_Rect destinationRectangle = { textBoxPosX, textBoxPosY,
				textBoxWidth * (int)globals::SPRITE_SCALE,
				textBoxHeight * (int)globals::SPRITE_SCALE};
		graphics.blitSurface(this->_spriteSheet, &this->_sourceRect, &destinationRectangle);
	}
}

bool TextBox::isVisible() const {
	return this->_visible;
}

void TextBox::setVisible(bool value) {
	this->_visible = value;
}