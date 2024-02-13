/**
 * @file main.cc
 * @author sigridva lauralep
 * @date 11 Fedruary 2024
 * @brief File containing tests of class Object, to check whether perfomance saticfies requirements.
 *
 */

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#define EPSILON 1e-7
#include <time.h> /* clock_t, clock, CLOCKS_PER_SEC */

#include "../Model/object.h"

// Test for several persing during one session
TEST(PARSER_TEST, CORRECT_OBJ_FILE) {
  s21::Object test;
  s21::string filename("models/Glass.obj");
  test.parseModel(filename);

  test.parseModel(filename);
  EXPECT_EQ(test.getVerticesNum(), 896);
}

// Test for several persing during one session
TEST(PARSER_TEST, CORRECT_OBJ_FILE2) {
  s21::Object test;
  s21::string filename("models/cube.obj");
  test.parseModel(filename);

  test.parseModel(filename);
}

// Incorrect path
TEST(PARSER_TEST, INCORERCT_PATH) {
  s21::Object test;
  s21::string filename("biba_i_boba.obj");

  EXPECT_THROW(
      {
        try {
          test.parseModel(filename);
        } catch (const std::invalid_argument& e) {
          EXPECT_STREQ(INCORRECT_PATH, e.what());
          throw;
        }
      },
      std::invalid_argument);
}

TEST(PARSER_TEST, T_INCORRECT_NUMBER) {
  s21::Object test;
  s21::string filename("models/Glass_underflow_facet.obj");

  EXPECT_THROW(
      {
        try {
          test.parseModel(filename);
        } catch (const std::invalid_argument& e) {
          EXPECT_STREQ(INCORRECT_FACET_NUMBER, e.what());
          throw;
        }
      },
      std::invalid_argument);
}

TEST(PARSER_TEST, T_INCORRECT_FACET) {
  s21::Object test;
  s21::string filename("models/Glass_negative_facet.obj");

  EXPECT_THROW(
      {
        try {
          test.parseModel(filename);
        } catch (const std::invalid_argument& e) {
          EXPECT_STREQ(INCORRECT_FACET, e.what());
          throw;
        }
      },
      std::invalid_argument);
}

TEST(PARSER_TEST, T_INCORRECT_FACET_LIMIT) {
  s21::Object test;
  s21::string filename("models/Glass_overflow_facet.obj");

  EXPECT_THROW(
      {
        try {
          test.parseModel(filename);
        } catch (const std::invalid_argument& e) {
          EXPECT_STREQ(INCORRECT_FACET_LIMIT, e.what());
          throw;
        }
      },
      std::invalid_argument);
}

// Incorrect number in line
TEST(PARSER_TEST, INCORRECT_NUMBER_LINE) {
  s21::Object test;
  s21::string filename("models/Glass_crashed.obj");

  EXPECT_THROW(
      {
        try {
          test.parseModel(filename);
        } catch (const std::invalid_argument& e) {
          EXPECT_STREQ(INCORRECT_NUMBER, e.what());
          throw;
        }
      },
      std::invalid_argument);
}

TEST(PARSER_TEST, T_INCORRECT_FACET_UNDERFLOW) {
  s21::Object test;
  s21::string filename("models/Glass_underflow_facet.obj");

  EXPECT_THROW(
      {
        try {
          test.parseModel(filename);
        } catch (const std::invalid_argument& e) {
          EXPECT_STREQ(INCORRECT_FACET_NUMBER, e.what());
          throw;
        }
      },
      std::invalid_argument);
}

TEST(PARSER_TEST, T_INCORRECT_EXTENSION) {
  s21::Object test;
  s21::string filename("Makefile");

  EXPECT_THROW(
      {
        try {
          test.parseModel(filename);
        } catch (const std::invalid_argument& e) {
          EXPECT_STREQ(INCORRECT_EXTENSION, e.what());
          throw;
        }
      },
      std::invalid_argument);
}

// Correct function job with 1 villion vertices
TEST(PARSER_TEST, T_TIME_LIMIT) {
  s21::Object test;
  clock_t t;
  t = clock();

  s21::string filename("models/one_million.obj");

  t = clock() - t;

  EXPECT_TRUE(((float)t) / CLOCKS_PER_SEC - 3.0 < 1e-7);
}

// Correct function job with commas instead dots
TEST(PARSER_TEST, COMMA_TEST) {
  s21::Object test;

  s21::string filename("models/trumpet.obj");
  test.parseModel(filename);

}


int main() {
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
