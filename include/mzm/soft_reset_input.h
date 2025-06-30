#ifndef SOFT_RESET_INPUT_H
#define SOFT_RESET_INPUT_H

#ifdef __cplusplus
extern "C"
{
#endif

void SoftResetVBlankCallback(void);
void SoftResetCheck(void);
void SoftReset(void);

#ifdef __cplusplus
}
#endif

#endif /* SOFT_RESET_INPUT_H */
