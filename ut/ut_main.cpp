#include "ut.h"
#include <stdio.h>
#include <iostream>

using namespace std;

void printCandidates(long mWnnWork) {

  while (true) {
    int num = getNextWord(mWnnWork, 0);
    if (num == 0)
      break;

    char * stroke = getStroke(mWnnWork);

    cout << stroke << " ";

    char * candidate = getCandidate(mWnnWork);
    int freq = getFrequency(mWnnWork);
    int lps = getLeftPartOfSpeech(mWnnWork);
    int rps = getRightPartOfSpeech(mWnnWork);

    cout << candidate << " " << freq << " " << lps << " " << rps << endl;
  }
}

int main(int argc, const char * argv[]) {
  const char * str = "libwnnJpnDic.dylib";

  long mWnnWork = createWnnWork (str);

  if (mWnnWork) {
    clearDictionaryParameters(mWnnWork);
    clearApproxPatterns(mWnnWork);
  }

  if (mWnnWork) {
    clearDictionaryParameters(mWnnWork);
    clearApproxPatterns(mWnnWork);
    setDictionaryParameter(mWnnWork, 0, 100, 400);
    setDictionaryParameter(mWnnWork, 2, 245, 245);
    setDictionaryParameter(mWnnWork, 3, 100, 244);
    setApproxPattern__JI(mWnnWork, 4);
  }

  if (mWnnWork) {
    clearResult(mWnnWork);
    
    /** Search operation mode (exact matching). */
//    public static final int SEARCH_EXACT                            = 0;
    /** Search operation mode (prefix matching). */
//    public static final int SEARCH_PREFIX                           = 1;
    /** Search operation mode (link search). */
//    public static final int SEARCH_LINK                             = 2;
    
    /** Sort order (frequency in descending). */
//    public static final int ORDER_BY_FREQUENCY                      = 0;
    /** Sort order (character code of key string in ascending). */
//    public static final int ORDER_BY_KEY                            = 1;

//    searchWord(mWnnWork, 1, 0, "わたしはなまえのなかのです");
    searchWord(mWnnWork, 1, 0, "わたし");

    printCandidates(mWnnWork);
  }

  return 0;
}
