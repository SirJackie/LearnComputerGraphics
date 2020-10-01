#pragma once
#include "FrameBuffer.h"
#include "Image.h"

int color = 0;

void Setup(FrameBuffer* fb, int width, int height) {
	;
}

void Update(FrameBuffer* fb, int width, int height) {
	for (int y = 0; y < 256; y++) {
		for (int x = 0; x < 256; x++) {
			Pixel(fb)[x + Pitch(fb) * y] = RGB888(
				gImage_image[(y * 256 + x) * 3 + 2],
				gImage_image[(y * 256 + x) * 3 + 1],
				gImage_image[(y * 256 + x) * 3 + 0]
			);
		}
	}
}

void OnDestroy(FrameBuffer* fb, int width, int height) {
	;
}
