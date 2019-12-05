#pragma once

#include <stdint.h>
#include <stdbool.h>

typedef struct {

} Mecanum_t;

void Mecanum_Init(Mecanum_t* hmecanum, float kp, float ki, float kd, float abs_limit);
void Mecanum_Update(Mecanum_t* hmecanum, float set, float get, float *p_out);