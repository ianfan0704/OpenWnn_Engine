#ifndef _wnn_jni_
#define _wnn_jni_
#ifdef __cplusplus
extern "C" {
#endif
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_TOUPPER
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_TOUPPER 0L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_TOLOWER
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_TOLOWER 1L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_QWERTY_NEAR
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_QWERTY_NEAR 2L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_QWERTY_NEAR_UPPER
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_APPROX_PATTERN_EN_QWERTY_NEAR_UPPER 3L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_APPROX_PATTERN_JAJP_12KEY_NORMAL
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_APPROX_PATTERN_JAJP_12KEY_NORMAL 4L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_SEARCH_EXACT
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_SEARCH_EXACT 0L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_SEARCH_PREFIX
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_SEARCH_PREFIX 1L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_SEARCH_LINK
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_SEARCH_LINK 2L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_ORDER_BY_FREQUENCY
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_ORDER_BY_FREQUENCY 0L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_ORDER_BY_KEY
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_ORDER_BY_KEY 1L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_V1
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_V1 0L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_V2
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_V2 1L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_V3
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_V3 2L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_BUNTOU
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_BUNTOU 3L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_TANKANJI
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_TANKANJI 4L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_SUUJI
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_SUUJI 5L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_MEISI
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_MEISI 6L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_JINMEI
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_JINMEI 7L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_CHIMEI
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_CHIMEI 8L
#undef jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_KIGOU
#define jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni_POS_TYPE_KIGOU 9L
/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    createWnnWork
 * Signature: (Ljava/lang/String;)J
 */
 long  createWnnWork(const char*);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    freeWnnWork
 * Signature: (J)I
 */
 int  freeWnnWork(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    clearDictionaryParameters
 * Signature: (J)I
 */
 int  clearDictionaryParameters(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    setDictionaryParameter
 * Signature: (JIII)I
 */
 int  setDictionaryParameter(long, int, int, int);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    searchWord
 * Signature: (JIILjava/lang/String;)I
 */
 int  searchWord(long, int, int, char*);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getNextWord
 * Signature: (JI)I
 */
 int  getNextWord(long, int);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getStroke
 * Signature: (J)Ljava/lang/String;
 */
 char*  getStroke(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getCandidate
 * Signature: (J)Ljava/lang/String;
 */
 char*  getCandidate(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getFrequency
 * Signature: (J)I
 */
 int  getFrequency(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getLeftPartOfSpeech
 * Signature: (J)I
 */
 int  getLeftPartOfSpeech(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getRightPartOfSpeech
 * Signature: (J)I
 */
 int  getRightPartOfSpeech(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    clearApproxPatterns
 * Signature: (J)V
 */
 void  clearApproxPatterns(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    setApproxPattern
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
 int  setApproxPattern__JLjava_lang_String_2Ljava_lang_String_2(long, char*, char*);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    setApproxPattern
 * Signature: (JI)I
 */
 int  setApproxPattern__JI(long, int);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getApproxPattern
 * Signature: (JLjava/lang/String;)[Ljava/lang/String;
 */
// jobjectArray  getApproxPattern(long, char*);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    clearResult
 * Signature: (J)V
 */
 void  clearResult(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    setLeftPartOfSpeech
 * Signature: (JI)I
 */
 int  setLeftPartOfSpeech(long, int);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    setRightPartOfSpeech
 * Signature: (JI)I
 */
 int  setRightPartOfSpeech(long, int);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    setStroke
 * Signature: (JLjava/lang/String;)I
 */
 int  setStroke(long, char*);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    setCandidate
 * Signature: (JLjava/lang/String;)I
 */
 int  setCandidate(long, char*);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    selectWord
 * Signature: (J)I
 */
 int  selectWord(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getConnectArray
 * Signature: (JI)[B
 */
// jbyteArray  getConnectArray(long, int);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getNumberOfLeftPOS
 * Signature: (J)I
 */
 int  getNumberOfLeftPOS(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getNumberOfRightPOS
 * Signature: (J)I
 */
 int  getNumberOfRightPOS(long);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getLeftPartOfSpeechSpecifiedType
 * Signature: (JI)I
 */
 int  getLeftPartOfSpeechSpecifiedType(long, int);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    getRightPartOfSpeechSpecifiedType
 * Signature: (JI)I
 */
 int  getRightPartOfSpeechSpecifiedType(long, int);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    createBindArray
 * Signature: (JLjava/lang/String;II)[Ljava/lang/String;
 */
// jobjectArray  createBindArray(long, char*, int, int);

/*
 * Class:     jp_co_omronsoft_openwnn_OpenWnnDictionaryImplJni
 * Method:    createQueryStringBase
 * Signature: (JIILjava/lang/String;)Ljava/lang/String;
 */
 char*  createQueryStringBase(long, int, int, char*);

#ifdef __cplusplus
}
#endif
#endif
