#ifndef INTRO_CONSTANTS_H
#define INTRO_CONSTANTS_H

#ifdef __cplusplus
extern "C"
{
#endif

enum IntroTextAction {
    INTRO_TEXT_ACTION_NONE,
    INTRO_TEXT_ACTION_START,
    INTRO_TEXT_ACTION_SPACE,
    INTRO_TEXT_ACTION_SKIP_CHARACTER,
    INTRO_TEXT_ACTION_NEW_LINE,
    INTRO_TEXT_ACTION_END,
};

#ifdef __cplusplus
}
#endif

#endif
