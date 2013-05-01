/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>

bool suite_InvertedInputTest_init = false;
#include "/Users/jessygiacomoni/Documents/workspace/OO-IO/UnitTest/InvertedInput.t.h"

static InvertedInputTest suite_InvertedInputTest;

static CxxTest::List Tests_InvertedInputTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_InvertedInputTest( "InvertedInput.t.h", 9, "InvertedInputTest", suite_InvertedInputTest, Tests_InvertedInputTest );

static class TestDescription_suite_InvertedInputTest_testInstanciation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_InvertedInputTest_testInstanciation() : CxxTest::RealTestDescription( Tests_InvertedInputTest, suiteDescription_InvertedInputTest, 12, "testInstanciation" ) {}
 void runTest() { suite_InvertedInputTest.testInstanciation(); }
} testDescription_suite_InvertedInputTest_testInstanciation;

static class TestDescription_suite_InvertedInputTest_testTestChangeNotify : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_InvertedInputTest_testTestChangeNotify() : CxxTest::RealTestDescription( Tests_InvertedInputTest, suiteDescription_InvertedInputTest, 23, "testTestChangeNotify" ) {}
 void runTest() { suite_InvertedInputTest.testTestChangeNotify(); }
} testDescription_suite_InvertedInputTest_testTestChangeNotify;

