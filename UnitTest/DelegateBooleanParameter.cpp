/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_DelegateTestSuite_init = false;
#include "/Users/jessygiacomoni/Documents/workspace/OO-IO/UnitTest/DelegateBooleanParameter.t.h"

static DelegateTestSuite suite_DelegateTestSuite;

static CxxTest::List Tests_DelegateTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DelegateTestSuite( "DelegateBooleanParameter.t.h", 6, "DelegateTestSuite", suite_DelegateTestSuite, Tests_DelegateTestSuite );

static class TestDescription_suite_DelegateTestSuite_testHandlerCall : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DelegateTestSuite_testHandlerCall() : CxxTest::RealTestDescription( Tests_DelegateTestSuite, suiteDescription_DelegateTestSuite, 9, "testHandlerCall" ) {}
 void runTest() { suite_DelegateTestSuite.testHandlerCall(); }
} testDescription_suite_DelegateTestSuite_testHandlerCall;

static class TestDescription_suite_DelegateTestSuite_testParameterTransmission : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DelegateTestSuite_testParameterTransmission() : CxxTest::RealTestDescription( Tests_DelegateTestSuite, suiteDescription_DelegateTestSuite, 21, "testParameterTransmission" ) {}
 void runTest() { suite_DelegateTestSuite.testParameterTransmission(); }
} testDescription_suite_DelegateTestSuite_testParameterTransmission;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
