/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>

bool suite_NotifierSuite_init = false;
#include "/Users/jessygiacomoni/Documents/workspace/OO-IO/UnitTest/Notifier.t.h"

static NotifierSuite suite_NotifierSuite;

static CxxTest::List Tests_NotifierSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NotifierSuite( "Notifier.t.h", 6, "NotifierSuite", suite_NotifierSuite, Tests_NotifierSuite );

static class TestDescription_suite_NotifierSuite_testListener : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NotifierSuite_testListener() : CxxTest::RealTestDescription( Tests_NotifierSuite, suiteDescription_NotifierSuite, 9, "testListener" ) {}
 void runTest() { suite_NotifierSuite.testListener(); }
} testDescription_suite_NotifierSuite_testListener;

static class TestDescription_suite_NotifierSuite_testParameterTransmission : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NotifierSuite_testParameterTransmission() : CxxTest::RealTestDescription( Tests_NotifierSuite, suiteDescription_NotifierSuite, 23, "testParameterTransmission" ) {}
 void runTest() { suite_NotifierSuite.testParameterTransmission(); }
} testDescription_suite_NotifierSuite_testParameterTransmission;

static class TestDescription_suite_NotifierSuite_testMultipleListeners : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NotifierSuite_testMultipleListeners() : CxxTest::RealTestDescription( Tests_NotifierSuite, suiteDescription_NotifierSuite, 37, "testMultipleListeners" ) {}
 void runTest() { suite_NotifierSuite.testMultipleListeners(); }
} testDescription_suite_NotifierSuite_testMultipleListeners;

static class TestDescription_suite_NotifierSuite_testMultipleListenersParameterTransmission : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NotifierSuite_testMultipleListenersParameterTransmission() : CxxTest::RealTestDescription( Tests_NotifierSuite, suiteDescription_NotifierSuite, 60, "testMultipleListenersParameterTransmission" ) {}
 void runTest() { suite_NotifierSuite.testMultipleListenersParameterTransmission(); }
} testDescription_suite_NotifierSuite_testMultipleListenersParameterTransmission;

