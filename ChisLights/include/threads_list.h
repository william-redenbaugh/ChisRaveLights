#ifndef _THREADS_LIST_H
#define _THREADS_LIST_H

#include "led_matrix.h"
#include "global_includes.h"

const task_init_descriptor_t INIT_THREAD_LIST[] =
    {
        {led_matrix_thread, led_matrix_init, "USB Driver module", 4096, NULL, 0, NULL},
};
extern int NUM_THREADS;
#endif