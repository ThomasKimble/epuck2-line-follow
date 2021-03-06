#ifndef AUDIO_PROCESSING_H
#define AUDIO_PROCESSING_H


#define FFT_SIZE 	1024

typedef enum {
	//2 times FFT_SIZE because this array contains complex numbers (real + imaginary)
	LEFT_CMPLX_INPUT = 0,
	//Array containing the computed magnitude of the complex numbers
	LEFT_OUTPUT,
} BUFFER_NAME_t;


void processAudioData(int16_t *data, uint16_t num_samples);

/*
*	Returns the pointer to the BUFFER_NAME_t buffer asked
*/
float* get_audio_buffer_ptr(BUFFER_NAME_t name);
void doFFT_optimized(uint16_t size, float* complex_buffer);

#endif /* AUDIO_PROCESSING_H */
