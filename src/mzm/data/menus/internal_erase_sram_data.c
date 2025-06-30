#include "mzm/data/menus/internal_erase_sram_data.h"
#include "mzm/macros.h"
#include "mzm/data/menus/erase_sram_data.h"

#include "mzm_include.h"

const u32* const sEraseSramTextGfxPointers[LANGUAGE_END][2] = {
    [LANGUAGE_JAPANESE] = {
        sEraseSramMenuQuestionJapaneseGfx,
        sEraseSramMenuConfirmJapaneseGfx
    },
    [LANGUAGE_HIRAGANA] = {
        sEraseSramMenuQuestionJapaneseGfx,
        sEraseSramMenuConfirmJapaneseGfx
    },
    [LANGUAGE_ENGLISH] = {
        sEraseSramMenuQuestionEnglishGfx,
        sEraseSramMenuConfirmEnglishGfx
    },
    #ifdef REGION_US_BETA
    [LANGUAGE_GERMAN] = {
        sEraseSramMenuQuestionGermanGfx,
        sEraseSramMenuConfirmGermanGfx
    },
    [LANGUAGE_FRENCH] = {
        sEraseSramMenuQuestionFrenchGfx,
        sEraseSramMenuConfirmFrenchGfx
    },
    [LANGUAGE_ITALIAN] = {
        sEraseSramMenuQuestionItalianGfx,
        sEraseSramMenuConfirmItalianGfx
    },
    [LANGUAGE_SPANISH] = {
        sEraseSramMenuQuestionSpanishGfx,
        sEraseSramMenuConfirmSpanishGfx
    }
    #else // !REGION_US_BETA
    [LANGUAGE_GERMAN] = {
        sEraseSramMenuQuestionEnglishGfx,
        sEraseSramMenuConfirmEnglishGfx
    },
    [LANGUAGE_FRENCH] = {
        sEraseSramMenuQuestionEnglishGfx,
        sEraseSramMenuConfirmEnglishGfx
    },
    [LANGUAGE_ITALIAN] = {
        sEraseSramMenuQuestionEnglishGfx,
        sEraseSramMenuConfirmEnglishGfx
    },
    [LANGUAGE_SPANISH] = {
        sEraseSramMenuQuestionEnglishGfx,
        sEraseSramMenuConfirmEnglishGfx
    }
    #endif // REGION_US_BETA
};
