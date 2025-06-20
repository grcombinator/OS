#include <gtest/gtest.h>
#include "utils.h"

// ���� GetMessageChoice
TEST(MessageChoiceTest, ValidInputA) {
    EXPECT_EQ(GetMessageChoice("A"), "A");
}

TEST(MessageChoiceTest, ValidInputB) {
    EXPECT_EQ(GetMessageChoice("B"), "B");
}

TEST(MessageChoiceTest, InvalidInput) {
    EXPECT_EQ(GetMessageChoice("C"), "");
    EXPECT_EQ(GetMessageChoice("AB"), "");
    EXPECT_EQ(GetMessageChoice(""), "");
}

// ���� HandleMessageEvent (���������, ��� ������� �� ������ � ��������� ������������ �����)
TEST(HandleMessageTest, EventA) {
    EXPECT_NO_THROW(HandleMessageEvent(0));
}

TEST(HandleMessageTest, EventB) {
    EXPECT_NO_THROW(HandleMessageEvent(1));
}

TEST(HandleMessageTest, InvalidEvent) {
    EXPECT_NO_THROW(HandleMessageEvent(2)); // �� ������ ���� ������
    EXPECT_NO_THROW(HandleMessageEvent(-1));
}