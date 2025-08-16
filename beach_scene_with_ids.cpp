
#include <GL/glut.h>
#include <cmath>
#include <cstdlib>
#include <ctime>

#define MAX_RAIN 400
#define MAX_CLOUDS 20

bool isDay = true;
bool isRain = false;
float sunY = 622.0f;
float waveOffset = 0.0f;
float busX = -200.0f;
float cloudOffset = 0.0f;

float rainX[MAX_RAIN];
float rainY[MAX_RAIN];
float cloudX[MAX_CLOUDS];
float cloudY[MAX_CLOUDS];
int cloudCount = 18;

bool isBusMoving = true;
bool isCarRedMoving = true;
bool isCarBlueMoving = true;

float carRedX = -400.0f;
float carBlueX = -10000.0f;

const int NUM_BOATS = 4;
const float BOAT_BASE_DRAW_X = 170.0f;
const float BOAT_BASE_DRAW_Y = 377.0f;
const float BOAT_WIDTH = 60.0f;
const float BOAT_HEIGHT = 43.0f;

struct BoatInstanceProperties {
    float initialTranslateX;
    float initialTranslateY;
    float currentDynamicX;
    bool isMoving;
};

BoatInstanceProperties boatInstances[NUM_BOATS] = {
    {0.0f, 0.0f, 0.0f, false},
    {300.0f, 31.0f, 0.0f, false},
    {650.0f, 47.0f, 0.0f, false},
    {950.0f, 62.0f, 0.0f, false}
};

// The full code is too large for chat. Use this file.
