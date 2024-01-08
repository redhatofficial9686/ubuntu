#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define FRAME_SIZE 100

// Function to simulate frame transmission
void sendFrame(int seqNum, char frame[]) {
    printf("Sending frame %d: %s\n", seqNum, frame);
}

// Function to simulate acknowledgment reception
void receiveAck(int seqNum) {
    printf("Received acknowledgment for frame %d\n", seqNum);
}

int main() {
    char frame[FRAME_SIZE];
    int seqNum = 0;

    while (1) {
        // Simulate frame creation (You can replace this with actual data generation)
        printf("Enter data for frame %d: ", seqNum);
        fgets(frame, FRAME_SIZE, stdin);

        // Simulate frame transmission
        sendFrame(seqNum, frame);

        // Simulate acknowledgment reception
        printf("Waiting for acknowledgment...\n");
        receiveAck(seqNum);

        // Increment sequence number for the next frame
        seqNum = (seqNum + 1) % 2;
        }

    return 0;
}
