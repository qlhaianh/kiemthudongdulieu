#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Khai báo hàm kiểm tra tuổi
bool IsCitizenEligible(int age);

// Định nghĩa test case cho chương trình của bạn
TEST(CitizenEligibilityTest, TestValidAge) {
    // Kiểm tra với tuổi hợp lệ (>= 14)
    EXPECT_TRUE(IsCitizenEligible(14));
    EXPECT_TRUE(IsCitizenEligible(18));
    EXPECT_TRUE(IsCitizenEligible(25));
}

TEST(CitizenEligibilityTest, TestInvalidAge) {
    // Kiểm tra với tuổi không hợp lệ (< 14)
    EXPECT_FALSE(IsCitizenEligible(13));
    EXPECT_FALSE(IsCitizenEligible(0));
    EXPECT_FALSE(IsCitizenEligible(-5));
}

// Hàm chuyển đổi chuỗi thành số nguyên
int ConvertAgeStringToInt(const string& ageStr) {
    int age;
    stringstream ageStream(ageStr);
    ageStream >> age;
    return age;
}

// Hàm kiểm tra tuổi công dân
bool IsCitizenEligible(int age) {
    return age >= 14;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}