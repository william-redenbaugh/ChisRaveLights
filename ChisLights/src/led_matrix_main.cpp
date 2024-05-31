#include "led_matrix.h"
#include "global_includes.h"
#include "project_defs.h"
#include "rgbMatrix.h"
#include "stm32f4xx_hal_spi.h"

enum{
    START_LED_STRIP_TRANSAC, 
    CONTINUE_LED_STRIP_TRANSAC,
    END_LED_STRIP_TRANSAC,
    INIT_LED_STRIP   
};

uint8_t input_buffer[2048];
int current_pixel_index = 0;

os_ledmatrix_t matrix;

void led_matrix_init(void *parameters)
{
    init_ssd1374_led_matrix(&matrix);
}

void led_matrix_thread(void *parameters)
{
    for(;;){
        os_thread_sleep_ms(100); 
    }
}