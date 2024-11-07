#include <stdio.h>
#include <sys/time.h>

int main() {

    struct timeval start, end; // define struct here, these structs will hold start and end times

    // Start timing, put this above any other code you have.
    gettimeofday(&start, NULL);

    //Here I am also simulating some work using a basic for loop
    for (int i = 0; i < 100000; i++);

    // End timing, put this at the end of whatever code you want to measure
    gettimeofday(&end, NULL);

    // Display times in seconds and micro seconds
    printf("Start time: %ld seconds and %ld microseconds\n", start.tv_sec, start.tv_usec);
    printf("End time: %ld seconds and %ld microseconds\n", end.tv_sec, end.tv_usec);

    // Dispaly the difference between the start time and end time.
    printf("Elapsed seconds: %ld\n", end.tv_sec - start.tv_sec);
    printf("Elapsed microseconds: %ld\n", end.tv_usec - start.tv_usec);

    return 0;

}
