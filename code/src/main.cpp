#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode({1920u, 1080u}), "Crossy Road");

    sf::RectangleShape player({50.f, 50.f});
    player.setFillColor(sf::Color{0xFF69B4FF});
    player.setPosition({375.f, 500.f});

    float speed = 200.f;
    sf::Clock clock;

    while (window.isOpen()) {
        float dt = clock.restart().asSeconds();

        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
            player.move({speed * dt, 0.f});
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
            player.move({-speed * dt, 0.f});
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
            player.move({0.f, speed * dt});
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
            player.move({0.f, -speed * dt});

        window.clear(sf::Color(100, 200, 100));
        window.draw(player);
        window.display();
    }
    return 0;
}