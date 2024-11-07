#include <stdio.h>

unsigned long long rdtsc() {
    unsigned long long ticks;
    // Inline assembly to call rdtsc instruction
    __asm__ volatile("rdtsc" : "=A" (ticks));
    return ticks;
}

int main() {
    unsigned long long start, end;
    
    // Get start time
    start = rdtsc();
    
    // Simple for loop (no sum)
    for (int i = 0; i < 1000000; i++);

    // Get end time
    end = rdtsc();

    // Print the number of clock cycles
    printf("Time taken: %llu clock cycles\n", end - start);

    return 0;
}
