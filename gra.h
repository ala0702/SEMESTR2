#pragma once

// g³owna klasa programu ( silnik programu)

class gra
{
private:

	//funkcje private:
	void ustawienieZmiennych();
	void ustawienieOkna();

public:
	//konstryktor i destruktor
	gra();
	virtual ~gra();

	//funkcje
	void update();
	void render();
};




