#ifndef ESCAPE_CONSTANTS_H
#define ESCAPE_CONSTANTS_H

#ifdef __cplusplus
extern "C"
{
#endif

enum Escape {
    ESCAPE_NONE,
    ESCAPE_MOTHER_BRAIN,
    ESCAPE_MECHA_RIDLEY,
};

enum EscapeStatus {
    ESCAPE_STATUS_NONE,
    ESCAPE_STATUS_HAPPENNING,
    ESCAPE_STATUS_FAILED
};

#ifdef __cplusplus
}
#endif

#endif /* ESCAPE_CONSTANTS_H */
