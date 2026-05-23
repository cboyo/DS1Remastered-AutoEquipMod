using seconds_t = float;
using millisecond_t = uint64_t;
using microsecond_t = uint64_t;
using clockticks_t = uint64_t;

struct Stopwatch{
    clockticks_t t_start = 0;
};

clockticks_t time_get_cpu_clock_counter(){
    LARGE_INTEGER counter = {};
    QueryPerformanceCounter(&counter);
    return counter.QuadPart; 
}

microsecond_t time_cpu_clock_to_us(clockticks_t counter){
    LARGE_INTEGER freq = {};
    QueryPerformanceFrequency(&freq);
    //Can overflow when counter values are big
    return (counter * 1000000ULL) / freq.QuadPart;
}

millisecond_t time_micro_to_milli(microsecond_t microseconds){
    return microseconds / 1000;
}
seconds_t time_micro_to_seconds(microsecond_t microseconds){
    return (seconds_t)microseconds / 1000000.f;
}
seconds_t time_milli_to_seconds(millisecond_t milliseconds){
    return (seconds_t)milliseconds / 1000.f;
}

microsecond_t time_watch_reset(Stopwatch* stopwatch){
    microsecond_t time = 0;
    if(stopwatch){
        clockticks_t t_end = time_get_cpu_clock_counter();
        clockticks_t passed = t_end - stopwatch->t_start;
        if(t_end < stopwatch->t_start){
            //Overflow case, this still doesnt handle cases where the time passed cannot fit 64 bits
            passed = UINT64_MAX - stopwatch->t_start + t_end;
        }
        time = time_cpu_clock_to_us(passed);
        stopwatch->t_start = t_end;
    }
    return time;
}


microsecond_t time_watch_elapsed(Stopwatch* stopwatch){
    microsecond_t time = 0;
    if(stopwatch){
        clockticks_t t_end = time_get_cpu_clock_counter();
        clockticks_t passed = t_end - stopwatch->t_start;
        if(t_end < stopwatch->t_start){
            passed = UINT64_MAX - stopwatch->t_start + t_end;
        }
        time = time_cpu_clock_to_us(passed);
    }
    return time;
}

seconds_t time_watch_reset_seconds(Stopwatch* stopwatch){
    return time_micro_to_seconds(time_watch_reset(stopwatch));
}

Stopwatch time_start_watch(){
    Stopwatch watch;
    watch.t_start = time_get_cpu_clock_counter();
    return watch;
}