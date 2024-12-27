#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h> // For nanosleep

#define WIDTH 80    // Width of the console
#define HEIGHT 24   // Height of the console
#define CLEAR_SCREEN "\x1b[H" // ANSI escape to move cursor to top-left

int main() {
    float A = 0, B = 0; // Rotation angles
    float i, j;         // Loop variables
    char buffer[HEIGHT][WIDTH]; // Frame buffer
    float zbuffer[HEIGHT][WIDTH]; // Depth buffer

    printf("\x1b[2J"); // Clear screen

    while (1) {
        // Clear buffers
        memset(buffer, ' ', sizeof(buffer));
        for (int k = 0; k < HEIGHT; k++) {
            for (int l = 0; l < WIDTH; l++) {
                zbuffer[k][l] = 0;
            }
        }

        // Generate donut points
        for (i = 0; i < 6.28; i += 0.15) { // Outer circle (increased step size)
            for (j = 0; j < 6.28; j += 0.05) { // Inner circle (increased step size)
                float sinA = sin(A), cosA = cos(A);
                float sinB = sin(B), cosB = cos(B);
                float sini = sin(i), cosi = cos(i);
                float sinj = sin(j), cosj = cos(j);

                float h = cosi + 2; // Distance from donut center
                float D = 1 / (sini * h * sinA + sinj * cosA + 5); // Perspective depth
                float t = sini * h * cosA - sinj * sinA; // Vertical projection

                // 2D projection
                int x = (int)(WIDTH / 2 + WIDTH * 0.7 * D * (cosj * h * cosB - t * sinB)); // Scale down horizontally
                int y = (int)(HEIGHT / 2 + HEIGHT * 0.4 * D * (cosj * h * sinB + t * cosB)); // Scale down vertically

                int luminance = (int)(8 * ((sinj * sinA - sini * cosj * cosA) * cosB - sini * cosj * sinA - sinj * cosA - cosi * cosj * sinB));
                if (luminance > 0 && x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT && D > zbuffer[y][x]) {
                    zbuffer[y][x] = D;
                    buffer[y][x] = ".,-~:;=!*#$@"[luminance % 12];
                }
            }
        }

        // Print the frame
        printf(CLEAR_SCREEN);
        for (int k = 0; k < HEIGHT; k++) {
            for (int l = 0; l < WIDTH; l++) {
                putchar(buffer[k][l]);
            }
            putchar('\n');
        }

        // Update rotation angles
        A += 0.04;
        B += 0.08;

        // Use nanosleep for better precision
        struct timespec req = {0, 30000000}; // 30 milliseconds
        nanosleep(&req, NULL); // Sleep for 30ms
    }

    return 0;
}
