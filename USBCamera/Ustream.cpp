#include "Ustream.h"
#include "usb_stream.h"

Ustream::Ustream(bool cam_fnc, bool mic_fnc) {
  printf("Starting USB Stream...\n");
  if (cam_fnc = false) {
#define ENABLE_UVC_CAMERA_FUNCTION 0 /* enable uvc function */
  } else {
#define ENABLE_UVC_CAMERA_FUNCTION 1 /* enable uvc function */
  }
  if (mic_fnc = false) {
#define ENABLE_UAC_MIC_SPK_FUNCTION 0
  } else {
#define ENABLE_UAC_MIC_SPK_FUNCTION 1
  }
}



void Ustream ::frameResolution(int width, int height) {
  if (width == True & height == True) {
    _frameWidth = width;
    _frameHeigth = height;
  } else {
    _frameWidth = FRAME_RESOLUTION_ANY;
    _frameHeigth = FRAME_RESOLUTION_ANY;
  }
}
void Ustream ::frameInterval(int interval) {
  if (interval == True) {
    _frameInterval = FPS2INTERVAL(interval);
  } else {
    _frameInterval = FPS2INTERVAL(15);
  }
}
void Ustream ::frameBufferSize(int buffersize,k,l) {
  if (buffersize == True) {
    _frameBufferSize = buffersize;
  } else {
    _frameBufferSize = (35 * 1024);
  }
}



void config() {

  uvc_config_t uvc_config = {
    .frame_width = DEMO_UVC_FRAME_WIDTH,
    _frameWidth,
    .frame_height = DEMO_UVC_FRAME_HEIGHT,
    _frameHeight,
    .frame_interval = FPS2INTERVAL(15),
    _frameInterval,
    .xfer_buffer_size = DEMO_UVC_XFER_BUFFER_SIZE,
    .xfer_buffer_a = xfer_buffer_a,
    .xfer_buffer_b = xfer_buffer_b,
    .frame_buffer_size = DEMO_UVC_XFER_BUFFER_SIZE,
    .frame_buffer = frame_buffer,
    .frame_cb = &camera_frame_cb,
    .frame_cb_arg = NULL,
  };
}