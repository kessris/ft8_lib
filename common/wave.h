#pragma once


// Save signal in floating point format (-1 .. +1) as a WAVE file using 16-bit signed integers.
void save_wav(const float *signal, int num_samples, int sample_rate, const char *path);


// Load signal in floating point format (-1 .. +1) as a WAVE file using 16-bit signed integers.
void load_wav(float *signal, int &num_samples, int &sample_rate, const char *path);