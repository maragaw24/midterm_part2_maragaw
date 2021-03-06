#include "MySorting.h"
#include "tddFuncs.h"
using namespace std;

int main() {


  // Test case #1
  
  string a[] {"If", "music", "be", "the", "food", "of", "love", "play", "on"};
  size_t a_size = 9;
  string expected_1 = "BE,IF,OF,ON,THE,FOOD,LOVE,PLAY,MUSIC";
  ASSERT_EQUALS(expected_1, customSort(a, a_size));

  // Test case #2
  
  string b[] {"Shall", "I" ,"compare", "thee", "to" ,"a" ,"summers", "day"};
  size_t b_size = 8;
  string expected_2 = "A,I,TO,DAY,THEE,SHALL,COMPARE,SUMMERS";
  ASSERT_EQUALS(expected_2, customSort(b, b_size));

  // Write your own test cases below
  string c[] {"ab","Bed","da","c","death"};
  size_t c_size = 5;
  string expected_3 = "C,AB,DA,BED,DEATH";
  ASSERT_EQUALS(expected_3,customSort(c, c_size));

  string d[] {"d","c","b","a"};
  size_t d_size = 4;
  string expected_4 = "A,B,C,D";
  ASSERT_EQUALS(expected_4,customSort(d, d_size));

  string e[] {"monuments", "powerful", "in", "of", "contents", "princes", "but", "nor", "outlive", "marble", "not", "the", "gilded", "bright", "you", "more", "these", "shine", "this", "rhyme", "shall","shall"};
  size_t e_size = 22;
  string expected_5 = "IN,OF,BUT,NOR,NOT,THE,YOU,MORE,THIS,RHYME,SHALL,SHALL,SHINE,THESE,BRIGHT,GILDED,MARBLE,OUTLIVE,PRINCES,CONTENTS,POWERFUL,MONUMENTS";
  ASSERT_EQUALS(expected_5, customSort(e, e_size));
 // string actual = "BRIGHT,BUT,CONTENTS,IN,OF,GILDED,MORE,NOR,NOT,RHYME,THE,YOU,THIS,SHALL,SHALL,SHINE,THESE,MARBLE,OUTLIVE,PRINCES,POWERFUL,MONUMENTS";
 // customSort(e, e_size);
  return 0;
}
