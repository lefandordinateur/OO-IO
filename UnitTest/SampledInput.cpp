/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>

bool suite_SampledInputTest_init = false;
#include "/Users/jessygiacomoni/Documents/workspace/OO-IO/UnitTest/SampledInput.t.h"

static SampledInputTest suite_SampledInputTest;

static CxxTest::List Tests_SampledInputTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SampledInputTest( "SampledInput.t.h", 11, "SampledInputTest", suite_SampledInputTest, Tests_SampledInputTest );

static class TestDescription_suite_SampledInputTest_testSimpleGetStateAtConstruction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampledInputTest_testSimpleGetStateAtConstruction() : CxxTest::RealTestDescription( Tests_SampledInputTest, suiteDescription_SampledInputTest, 14, "testSimpleGetStateAtConstruction" ) {}
 void runTest() { suite_SampledInputTest.testSimpleGetStateAtConstruction(); }
} testDescription_suite_SampledInputTest_testSimpleGetStateAtConstruction;

static class TestDescription_suite_SampledInputTest_testSimpleAcquirement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampledInputTest_testSimpleAcquirement() : CxxTest::RealTestDescription( Tests_SampledInputTest, suiteDescription_SampledInputTest, 25, "testSimpleAcquirement" ) {}
 void runTest() { suite_SampledInputTest.testSimpleAcquirement(); }
} testDescription_suite_SampledInputTest_testSimpleAcquirement;

static class TestDescription_suite_SampledInputTest_testTestChangeNotify : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampledInputTest_testTestChangeNotify() : CxxTest::RealTestDescription( Tests_SampledInputTest, suiteDescription_SampledInputTest, 41, "testTestChangeNotify" ) {}
 void runTest() { suite_SampledInputTest.testTestChangeNotify(); }
} testDescription_suite_SampledInputTest_testTestChangeNotify;

