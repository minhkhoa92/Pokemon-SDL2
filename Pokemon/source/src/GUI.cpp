#include "GUI.hpp"
#include "graphics.hpp"

#include <iostream>

GUI::~GUI() {}

GUI::GUI() {
	// this->_textBox = nullptr;
}

GUI::GUI(Graphics &graphics)
{
	this->_textBox = new TextBox(graphics);
}

void GUI::draw(Graphics &graphics) {
	this->_textBox->draw(graphics);
}

TextBox* GUI::getTextBox() {
	return this->_textBox;
}


