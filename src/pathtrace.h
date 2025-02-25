#pragma once

#include <vector>
#include "scene.h"

void pathtraceInit(Scene *scene);
void pathtraceFree();
void pathtrace(int frame, int iteration);
void showGBuffer(uchar4 *pbo);
void showImage(uchar4 *pbo, int iter);
void showDenoisedImage(uchar4* pbo, int iter);
void Denoise_Image(float c_phi, float n_phi, float p_phi, float stepWidth);