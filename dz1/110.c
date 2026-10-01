#include <stdio.h>

#define NODE_ID 42
int packet_size = NODE_ID * 4;

int ping(){
    
    printf("PING");
    return 0;
}

int pong(){

    printf("PONG");
    return 0;
}

int handshake(){

    ping();
    printf("-");
    pong();
    printf("-");
    ping();
    return 0;
}

int main() {
    
    int total_transfer = packet_size * 3;

    handshake();
    printf(":%d\n", packet_size);
    handshake();
    printf(":%d\n", total_transfer);
    printf("SESSION:CLOSED\n");
    return 0;
}