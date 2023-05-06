#include <time.h>

double calculate_runtime(clock_t start_time)
{
    clock_t end_time = clock();
    double runtime = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    return runtime;
}
