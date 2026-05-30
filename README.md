# Crossy Road Clone — C++ / SFML

Built a fully functional infinite-runner game in C++ using SFML, applying Object-Oriented Programming concepts throughout. The game features procedurally generated lanes (road, river, safe zones) that scroll infinitely as the camera advances, with dynamic obstacle spawning using the Prototype design pattern.
Implemented a 4-type collision system: static obstacles block movement, vehicles trigger death, logs carry the player across rivers, and open water causes drowning. Game states (Menu, Playing, Dead) are managed through a clean state machine with persistent high score tracked via file I/O.
Key concepts applied: abstract classes & polymorphism (Vehicle, Log, Tree, Rock all derived from Obstacle), operator overloading (copy & move assignment for safe raw pointer management), infinite world generation with camera-based spawn/despawn, and sprite-based rendering with SFML textures.

Tech: C++ · SFML 3 · OOP · Design Patterns · CMake
