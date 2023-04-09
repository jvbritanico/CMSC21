#include <stdio.h>

//Macro to define the size of the 2d array
#define ROWS 9
#define COLS 9


int main() {
    int road_networks[ROWS][COLS] = {
        {1, 1, 0, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1}
    };

    printf("\n");
    // Display the adjacency matrix
    printf("  a b c d e f g h i\n");
    for (int i = 0; i < ROWS; i++) {
        printf("%c ", 'a' + i); // Print the point/destination label
        for (int j = 0; j < COLS; j++) {
            if (road_networks[i][j]) {
                printf("1 "); // Print 1 if there's a direct path
            } else {
                printf("0 "); // Print 0 if there's no direct path
            }
        }
       
       
        printf("\n");
    }

    //Put a bracket to the points/destinations that are considered as charging stations

    printf("\n");

    printf("The adjacency matrix:\n");
    printf("   a   b   c   d   e   f   g   h   i\n");
    printf("a  1   1  [0] [0]  0   1   0   0   0\n");
    printf("b  1   1  [1] [0]  0   0   0   0   0\n");
    printf("c [0] [1] [1] [0] [1] [1] [0] [0] [1]\n");
    printf("d [0] [0] [0] [1] [1] [0] [0] [0] [0]\n");
    printf("e  0   0  [0] [1]  1   0   0   0   0\n");
    printf("f  1   0  [1] [0]  0   1   0   0   0\n");
    printf("g  1   0  [0] [1]  0   0   1   0   0\n");
    printf("h  0   0  [0] [0]  0   1   0   1   1\n");
    printf("i  0   0  [0] [0]  0   0   0   1   1\n");

    printf("\n");

    //Given a point/destination, determine the nearest charging station
    int charging_stations[] = {2, 3};

    int current_location, nearest_charging_station;
    printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - I\n");
    scanf("%d", &current_location);


    if (current_location < 0 || current_location >= ROWS) {
        printf("Error: Invalid location\n");
        return 1;
    }

    // Check if current location is a charging station or no path
    if (current_location == 2) {
        printf("point: C is a charging station\n");
        return 0;
    } else if (current_location == 3) {
        printf("point: D is a charging station\n");
        return 0;
    } else if (current_location == 7) {
        printf("At point: H\nThere is no path for charging station\n");
        return 0;
    } else if (current_location == 8)
    {
        printf("At point: I\nThere is no path for charging station\n");
        return 0;
    }
    


    // Find the nearest charging station
    nearest_charging_station = -1;
    int min_distance = ROWS + COLS;
    for (int i = 0; i < sizeof(charging_stations)/sizeof(int); i++) {
        int station = charging_stations[i];
        if (road_networks[current_location][station] == 1) {
            nearest_charging_station = station;
            break;
        }
        for (int j = 0; j < ROWS; j++) {
            if (road_networks[current_location][j] == 1 && road_networks[j][station] == 1) {
                int distance = j - current_location;
                if (distance < 0) {
                    distance = -distance;
                }
                if (distance < min_distance) {
                    min_distance = distance;
                    nearest_charging_station = station;
                }
            }
        }
    }

    if (nearest_charging_station != -1) {
        printf("At point: %c\npoint: %c Arrived to charging station\n", current_location + 'A', nearest_charging_station + 'A');
    } else {
        printf("At point: %c\npoint: %c is a charging station\n", current_location + 'A', current_location + 'A');
    }

    return 0;
}



//By: John Es' Ven Britanico