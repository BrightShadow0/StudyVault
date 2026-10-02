#include "raylib.h"

// You know classes! Here is a simple Player class.
class Player {
public:
    Vector2 position;
    float speed;
    int radius;
    Color color;

    // A function inside the class to handle movement
    void Move() {
        if (IsKeyDown(KEY_RIGHT)) position.x += speed;
        if (IsKeyDown(KEY_LEFT))  position.x -= speed;
        if (IsKeyDown(KEY_DOWN))  position.y += speed;
        if (IsKeyDown(KEY_UP))    position.y -= speed;
    }

    // A function inside the class to draw the player
    void Draw() {
        DrawCircleV(position, radius, color);
    }
};

int main() {
    InitWindow(800, 450, "C++ Class Game Example");
    SetTargetFPS(60);

    // Creating an instance of your class
    Player myPlayer;
    myPlayer.position = { 400, 225 };
    myPlayer.speed = 4.0f;
    myPlayer.radius = 30;
    myPlayer.color = BLUE;

    // Game Loop
    while (!WindowShouldClose()) {
        // 1. Handle Input & Update Logic using the class function
        myPlayer.Move();

        // 2. Render Graphics using the class function
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Look! Your C++ class is moving!", 10, 10, 20, DARKGRAY);
            
            myPlayer.Draw(); // Call the object's draw function
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
