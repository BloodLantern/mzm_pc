#ifndef DEMO_CONSTANTS_H
#define DEMO_CONSTANTS_H

#ifdef __cplusplus
extern "C"
{
#endif

enum DemoState {
    DEMO_STATE_NONE,
    DEMO_STATE_RECORDING_DEBUG,
    DEMO_STATE_PLAYING,
    DEMO_STATE_STARTING,
};

#ifdef __cplusplus
}
#endif

#endif
