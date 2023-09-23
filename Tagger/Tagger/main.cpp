#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main() {
    // Create the SFML window
    sf::RenderWindow window(sf::VideoMode(500, 500), "Grid of Black Squares");

    // Define the size of each square and the gap between them
    const float squareSize = 100.f;
    const float gap = 10.f;

    // Create a black rectangle shape
    sf::RectangleShape square(sf::Vector2f(squareSize, squareSize));
    square.setFillColor(sf::Color::Black);

    // Loop to draw the grid
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            // Set the position of each square
            square.setPosition(i * (squareSize + gap), j * (squareSize + gap));

            // Draw the square
            window.draw(square);
        }
    }

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        // Draw your game elements here (if any)
        window.display();
    }

    return 0;
}
/*#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
*/