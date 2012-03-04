#ifndef UTIL_H
#define UTIL_H

#include <cppunit/TestRunner.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

#define assertEqual CPPUNIT_ASSERT_EQUAL
#define assert CPPUNIT_ASSERT

#define REGISTER_TEST_SUITE( ATestFixtureType )      \
  static CppUnit::AutoRegisterSuite< ATestFixtureType > CPPUNIT_JOIN( testSuite, ATestFixtureType )

#endif // UTIL_H
