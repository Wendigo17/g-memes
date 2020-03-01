#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include <Windows.h>
#include <time.h>


void toClipboard(HWND hwnd, const std::string &s) {
	OpenClipboard(hwnd);
	EmptyClipboard();
	HGLOBAL hg = GlobalAlloc(GMEM_MOVEABLE, s.size() + 1);
	if (!hg) {
		CloseClipboard();
		return;
	}
	memcpy(GlobalLock(hg), s.c_str(), s.size() + 1);
	GlobalUnlock(hg);
	SetClipboardData(CF_TEXT, hg);
	CloseClipboard();
	GlobalFree(hg);
}
//303463
int generateRandNumber(int min, int max)
{
    int returnVal = rand() % (max - min) + min;
    return returnVal;
}
int main()
{
    FreeConsole();


	bool bShouldLoop{ true };
	std::string urlToCopy;
    std::string urlToHold = "https://nhentai.net/g/";
	HWND hwnd = GetDesktopWindow();
    bool bwait{ false };
    bool bDrawNewFrame{ false };
    srand(static_cast<unsigned int>(time(NULL)));

    sf::Texture texture;
    if (!texture.loadFromFile("ahegao.jpg"))
    {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture);
    sf::Font font;
    if (!font.loadFromFile("Consolas.ttf"))
    {
        return EXIT_FAILURE;
    }
    sf::RenderWindow window(sf::VideoMode(500, 500), "Nut generator", sf::Style::Close | sf::Style::Titlebar);
    window.setFramerateLimit(10);
    sf::Vector2u size = window.getSize();
    int halfWidth = size.x / 2;
    int halfHeight = size.y / 2;
    sf::Text instructions;
    instructions.setFont(font);
    instructions.setString("Press Space to generate a new URL and press C to copy it.");
    instructions.setCharacterSize(15);
    instructions.setFillColor(sf::Color::White);
    instructions.setPosition(halfWidth - 225, halfHeight + 42);

    sf::RectangleShape rectangle(sf::Vector2f(480.f, 25.f));
    rectangle.setFillColor(sf::Color::Black);
    rectangle.setPosition(halfWidth - 240, halfHeight + 40);

    sf::Color backColor(112, 112, 112, 200);
    sf::RectangleShape backBoard(sf::Vector2f(486.f, 31.f));
    backBoard.setFillColor(backColor);
    backBoard.setPosition(halfWidth - 243, halfHeight + 37);
    


    sf::Text displayedUrl;
    displayedUrl.setFont(font);
    displayedUrl.setCharacterSize(40);
    displayedUrl.setFillColor(sf::Color::White);
    displayedUrl.setPosition(halfWidth - 54, halfHeight - 19);

    sf::RectangleShape urlBox(sf::Vector2f(125.f, 45.f));
    urlBox.setFillColor(sf::Color::Black);
    urlBox.setPosition(halfWidth - 62, halfHeight - 15);


    sf::RectangleShape urlBoard(sf::Vector2f(131.f, 51.f));
    urlBoard.setFillColor(backColor);
    urlBoard.setPosition(halfWidth - 65, halfHeight - 18);

    int displayNum = 0;
    bool shouldBreak = false;
	while(!shouldBreak)
	{
        sf::Event event;
        while (window.pollEvent(event))
        {
            // check all the window's events that were triggered since the last iteration of the loop
            if (event.type == sf::Event::Closed)
            {
                window.close();
                shouldBreak = true;
            }
            //Wait for an input to continue the loop
            else if (event.type == sf::Event::KeyReleased)
            {
                bwait = false;
            }
            if (!bwait)
            {
                switch (event.type)
                {
                case sf::Event::KeyReleased:
                {
                    if (event.key.code == sf::Keyboard::Space)
                    {
                        displayNum = generateRandNumber(1, 303463);
                        urlToCopy = urlToHold + std::to_string(displayNum);
                    }
                    else if (event.key.code == sf::Keyboard::C)
                    {
                        toClipboard(hwnd, urlToCopy);
                    }
                }
                default:
                {
                    break;
                }
                }
            }
        }   
            displayedUrl.setString(std::to_string(displayNum));
            window.clear();
            window.draw(sprite);
            window.draw(urlBoard);
            window.draw(urlBox);
            window.draw(displayedUrl);
            window.draw(backBoard);
            window.draw(rectangle);
            window.draw(instructions);
            window.display();
	}
    return 0;
}

/*sf::Text Inventory;
Inventory.setFont(font);
Inventory.setString("2. Inventory");
Inventory.setCharacterSize(21);
Inventory.setFillColor(sf::Color::White);
Inventory.setPosition(15.f, 580.f);*/