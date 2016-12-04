#include <gtest/gtest.h>
#include "add.h"

TEST(ReverseNumder, CanreverseSingleDigitNamber)
{
  EXPECT_TRUE(ReverseNumber(7) == 7);
}

TEST(ReverseNumder, CanreverseNamber)
{
  EXPECT_TRUE(ReverseNumber(13345) == 54331);
}

TEST(ReverseNumder, CanreverseNegativNamber)
{
  EXPECT_TRUE(ReverseNumber(-10345) == -54301);
}

TEST(CommmonPrefix, CanFindRightCommonPrefix){
  char *mas[4] = {"afg","afw","aht","art"};
  char *p = CommonPrefix(mas,4,4);
  char *rightprefix = { "a" };
  int i=0;
  while (p[i] != 0) {
  EXPECT_EQ(rightprefix[i], p[i]);
  i++;  
  }

}

TEST(CommmonPrefix, CanFindCommonPrefixWhenCommonPrefixIs0){
  char *mas[4] = { "gfg", "pqw", "iht", "urt" };
  char *p = CommonPrefix(mas, 4, 4);
  char *rightprefix = { 0 };
  int i = 0;
  while (p[i] != 0) {
    EXPECT_EQ(rightprefix[i], p[i]);
    i++;
  }
}

TEST(CommmonPrefix, CanFindRightCommonPrefixWhenAllStrokiEQ){
  char *mas[4] = { "gfg", "gfg", "gfg", "gfg" };
  char *p = CommonPrefix(mas, 4, 4);
  char *rightprefix = { "gfg" };
  int i = 0;
  while (p[i] != 0) {
    EXPECT_EQ(rightprefix[i], p[i]);
    i++;
  }
}

TEST(ReversePairElement, CanReverseElementsInIsntEmptyListFromNoOodCout) {
  CNode *List=0;
  for (int i = 0; i < 2; i++) {
    CNode *node=new CNode;
    node->next=List;
    node->data=i;
    List=node;
    }
  ReversePairElement(List);
  EXPECT_TRUE(List->data==0);
  List=List->next;
  EXPECT_TRUE(List->data == 1);

}
TEST(ReversePairElement,ThrowsWhenListIsEmpty) {
  CNode *List = 0;

 ASSERT_ANY_THROW(ReversePairElement(List));

}

TEST(ReversePairElement, CanReverseElementsInIsntEmptyListFromOodCount) {
  CNode *List = 0;
  for (int i = 0; i < 3; i++) {
    CNode *node = new CNode;
    node->next = List;
    node->data = i;
    List = node;
  }
  ReversePairElement(List);
  EXPECT_TRUE(List->data == 1);
  List = List->next;
  EXPECT_TRUE(List->data == 2);
  List = List->next;
  EXPECT_TRUE(List->data == 0);

}

TEST(SearchElemEqSum, CanRightFindTwoElement) {
  int mas[] = {1,3,-7,4,5};
  int a;
  int b;
  SearchElemEqSum(a,b,4,mas,5);
  EXPECT_TRUE((a+b)==4);
}

TEST(SearchElemEqSum, ThrowsWhenNoThisElement) {
  int mas[] = { 1, 3, 7, 4, 5 };
  int a;
  int b;
  ASSERT_ANY_THROW(SearchElemEqSum(a, b, 0, mas, 5));

}

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}