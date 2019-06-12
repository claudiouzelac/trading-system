# QuickFIX Third Party Dependency

This directory provides the QuickFIX component in both executable and library format for consumers.

## Prerequisites

* Bazel 0.26.1 or greater
* CMake
* Modern C++ Compiler

## Building

Bazel can compile QuickFIX with the follow command from a command terminal
from the root directory of this project:

```
bazel build //third_party/quickfix:quickfix_lib
```

### Example Build Outpu

```
bazel build //third_party/quickfix:quickfix_lib
INFO: Analyzed target //third_party/quickfix:quickfix_lib (13 packages loaded, 1979 targets configured).
INFO: Found 1 target...
INFO: From CcCmakeMakeRule third_party/quickfix/libquickfix/include:
Target //third_party/quickfix:quickfix_lib up-to-date:
  bazel-bin/third_party/quickfix/libquickfix/include
  bazel-bin/third_party/quickfix/libquickfix/lib/libquickfix.so
  bazel-bin/third_party/quickfix/copy_libquickfix/libquickfix
  bazel-bin/third_party/quickfix/libquickfix/logs/CMake_script.sh
  bazel-bin/third_party/quickfix/libquickfix/logs/CMake.log
  bazel-bin/third_party/quickfix/libquickfix/logs/wrapper_script.sh
```

## CMake Logs

You can view the CMake logs from in the following location with respect 
to the root directory of this project.

```
bazel-out/k8-fastbuild/bin/third_party/quickfix/libquickfix/logs/CMake.log
```

### Example CMake Log Output

Environment variables obscured for privacy.

```
Bazel external C/C++ Rules #0.0.7. Building library 'libquickfix'
Environment:
EXT_BUILD_ROOT=
INSTALLDIR=
PATH=
BUILD_TMPDIR=
PWD=
EXT_BUILD_DEPS=
SHLVL=
BUILD_LOG=
BUILD_SCRIPT=
__________________________-- The CXX compiler identification is GNU 5.4.0
-- The C compiler identification is GNU 5.4.0
-- Check for working CXX compiler: /usr/bin/gcc
-- Check for working CXX compiler: /usr/bin/gcc -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Check for working C compiler: /usr/bin/gcc
-- Check for working C compiler: /usr/bin/gcc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Project name quickfix
-- Generating empty Allocator.h
-- Generating empty config.h
-- Looking for include file dlfcn.h
-- Looking for include file dlfcn.h - found
-- Looking for include file inttypes.h
-- Looking for include file inttypes.h - found
-- Looking for include file stdint.h
-- Looking for include file stdint.h - found
-- Looking for include file stdio.h
-- Looking for include file stdio.h - found
-- Looking for include file stdlib.h
-- Looking for include file stdlib.h - found
-- Looking for include file strings.h
-- Looking for include file strings.h - found
-- Looking for include file string.h
-- Looking for include file string.h - found
-- Looking for include file sys/stat.h
-- Looking for include file sys/stat.h - found
-- Looking for include file sys/types.h
-- Looking for include file sys/types.h - found
-- Looking for include file unistd.h
-- Looking for include file unistd.h - found
-- Looking for gettimeofday
-- Looking for gettimeofday - found
-- Looking for gethostbyname_r
-- Looking for gethostbyname_r - found
-- Checking prototype gethostbyname_r for HAVE_GETHOSTBYNAME_R_3_ARG - False
-- Checking prototype gethostbyname_r for HAVE_GETHOSTBYNAME_R_5_ARG - False
-- Checking prototype gethostbyname_r for HAVE_GETHOSTBYNAME_R_6_ARG - True
-- Checking for shared ptr.
-- Looking for C++ include memory
-- Looking for C++ include memory - found
-- Performing Test HAVE_SHARED_PTR_IN_STD_NAMESPACE
-- Performing Test HAVE_SHARED_PTR_IN_STD_NAMESPACE - Success
-- Found shared_ptr in std namespace using <memory> header.
-- set HAVE_STD_SHARED_PTR
-- Checking for unique ptr.
-- Looking for C++ include memory
-- Looking for C++ include memory - found
-- Performing Test HAVE_UNIQUE_PTR_IN_STD_NAMESPACE
-- Performing Test HAVE_UNIQUE_PTR_IN_STD_NAMESPACE - Success
-- Found unique in std namespace using <memory> header.
-- set HAVE_STD_UNIQUE_PTR
-- Configuring done
-- Generating done
-- Build files have been written to: /tmp/tmp.nl1jpYgWfL
Scanning dependencies of target QUICKFIX_HEADERS_LINK
[  0%] Built target QUICKFIX_HEADERS_LINK
Scanning dependencies of target UnitTest++
[  1%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/AssertException.cpp.o
[  2%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/Checks.cpp.o
[  3%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/CurrentTest.cpp.o
[  3%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/DeferredTestReporter.cpp.o
[  4%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/DeferredTestResult.cpp.o
[  5%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/MemoryOutStream.cpp.o
[  6%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/ReportAssert.cpp.o
[  7%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/Test.cpp.o
[  8%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/TestDetails.cpp.o
[  9%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/TestList.cpp.o
[ 10%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/TestReporter.cpp.o
[ 11%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/TestReporterStdout.cpp.o
[ 12%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/TestResults.cpp.o
[ 13%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/TestRunner.cpp.o
[ 14%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/TimeConstraint.cpp.o
[ 15%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/XmlTestReporter.cpp.o
[ 16%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/Posix/SignalTranslator.cpp.o
[ 17%] Building CXX object UnitTest++/CMakeFiles/UnitTest++.dir/src/Posix/TimeHelpers.cpp.o
[ 18%] Linking CXX static library libUnitTest++.a
[ 18%] Built target UnitTest++
Scanning dependencies of target TestUnitTest++
[ 18%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/Main.cpp.o
[ 19%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestAssertHandler.cpp.o
[ 20%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestCheckMacros.cpp.o
[ 21%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestChecks.cpp.o
[ 22%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestCurrentTest.cpp.o
[ 23%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestDeferredTestReporter.cpp.o
[ 24%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestMemoryOutStream.cpp.o
[ 25%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestTest.cpp.o
[ 26%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestTestList.cpp.o
[ 27%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestTestMacros.cpp.o
[ 28%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestTestResults.cpp.o
[ 29%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestTestRunner.cpp.o
[ 30%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestTestSuite.cpp.o
[ 31%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestTimeConstraint.cpp.o
[ 32%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestTimeConstraintMacro.cpp.o
[ 33%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestUnitTest++.cpp.o
[ 34%] Building CXX object UnitTest++/CMakeFiles/TestUnitTest++.dir/src/tests/TestXmlTestReporter.cpp.o
[ 35%] Linking CXX executable TestUnitTest++
[ 35%] Built target TestUnitTest++
Scanning dependencies of target quickfix
[ 36%] Building CXX object src/C++/CMakeFiles/quickfix.dir/Acceptor.cpp.o
[ 37%] Building CXX object src/C++/CMakeFiles/quickfix.dir/DataDictionary.cpp.o
[ 38%] Building CXX object src/C++/CMakeFiles/quickfix.dir/DataDictionaryProvider.cpp.o
[ 39%] Building CXX object src/C++/CMakeFiles/quickfix.dir/Dictionary.cpp.o
[ 40%] Building CXX object src/C++/CMakeFiles/quickfix.dir/FieldConvertors.cpp.o
In file included from /home/bowlofstew/.cache/bazel/_bazel_bowlofstew/3ce97798d75b79c3c01f9c63b5a6a897/sandbox/processwrapper-sandbox/1/execroot/com_github_bowlofstew_tradingsystem/external/org_quickfix/src/C++/FieldConvertors.cpp:39:0:
/home/bowlofstew/.cache/bazel/_bazel_bowlofstew/3ce97798d75b79c3c01f9c63b5a6a897/sandbox/processwrapper-sandbox/1/execroot/com_github_bowlofstew_tradingsystem/external/org_quickfix/src/C++/double-conversion/bignum.cc: In member function 'void FIX::double_conversion::Bignum::AssignDecimalString(FIX::double_conversion::Vector<const char>)':
/home/bowlofstew/.cache/bazel/_bazel_bowlofstew/3ce97798d75b79c3c01f9c63b5a6a897/sandbox/processwrapper-sandbox/1/execroot/com_github_bowlofstew_tradingsystem/external/org_quickfix/src/C++/double-conversion/bignum.cc:102:6: warning: assuming signed overflow does not occur when assuming that (X + c) < X is always false [-Wstrict-overflow]
 void Bignum::AssignDecimalString(Vector<const char> value) {
      ^
[ 41%] Building CXX object src/C++/CMakeFiles/quickfix.dir/FieldMap.cpp.o
[ 42%] Building CXX object src/C++/CMakeFiles/quickfix.dir/FieldTypes.cpp.o
[ 43%] Building CXX object src/C++/CMakeFiles/quickfix.dir/FileLog.cpp.o
[ 44%] Building CXX object src/C++/CMakeFiles/quickfix.dir/FileStore.cpp.o
[ 45%] Building CXX object src/C++/CMakeFiles/quickfix.dir/Group.cpp.o
[ 45%] Building CXX object src/C++/CMakeFiles/quickfix.dir/HttpConnection.cpp.o
[ 46%] Building CXX object src/C++/CMakeFiles/quickfix.dir/HttpMessage.cpp.o
[ 47%] Building CXX object src/C++/CMakeFiles/quickfix.dir/HttpParser.cpp.o
[ 48%] Building CXX object src/C++/CMakeFiles/quickfix.dir/HttpServer.cpp.o
[ 49%] Building CXX object src/C++/CMakeFiles/quickfix.dir/Initiator.cpp.o
[ 50%] Building CXX object src/C++/CMakeFiles/quickfix.dir/Log.cpp.o
[ 51%] Building CXX object src/C++/CMakeFiles/quickfix.dir/Message.cpp.o
[ 52%] Building CXX object src/C++/CMakeFiles/quickfix.dir/MessageSorters.cpp.o
[ 53%] Building CXX object src/C++/CMakeFiles/quickfix.dir/MessageStore.cpp.o
[ 54%] Building CXX object src/C++/CMakeFiles/quickfix.dir/MySQLLog.cpp.o
[ 55%] Building CXX object src/C++/CMakeFiles/quickfix.dir/MySQLStore.cpp.o
[ 56%] Building CXX object src/C++/CMakeFiles/quickfix.dir/NullStore.cpp.o
[ 57%] Building CXX object src/C++/CMakeFiles/quickfix.dir/OdbcLog.cpp.o
[ 58%] Building CXX object src/C++/CMakeFiles/quickfix.dir/OdbcStore.cpp.o
[ 59%] Building CXX object src/C++/CMakeFiles/quickfix.dir/Parser.cpp.o
[ 60%] Building CXX object src/C++/CMakeFiles/quickfix.dir/PostgreSQLLog.cpp.o
[ 61%] Building CXX object src/C++/CMakeFiles/quickfix.dir/PostgreSQLStore.cpp.o
[ 62%] Building CXX object src/C++/CMakeFiles/quickfix.dir/pugixml.cpp.o
[ 63%] Building CXX object src/C++/CMakeFiles/quickfix.dir/PUGIXML_DOMDocument.cpp.o
[ 64%] Building CXX object src/C++/CMakeFiles/quickfix.dir/Session.cpp.o
[ 65%] Building CXX object src/C++/CMakeFiles/quickfix.dir/SessionFactory.cpp.o
[ 65%] Building CXX object src/C++/CMakeFiles/quickfix.dir/SessionSettings.cpp.o
[ 66%] Building CXX object src/C++/CMakeFiles/quickfix.dir/Settings.cpp.o
[ 67%] Building CXX object src/C++/CMakeFiles/quickfix.dir/SocketAcceptor.cpp.o
[ 68%] Building CXX object src/C++/CMakeFiles/quickfix.dir/SocketConnection.cpp.o
[ 69%] Building CXX object src/C++/CMakeFiles/quickfix.dir/SocketConnector.cpp.o
[ 70%] Building CXX object src/C++/CMakeFiles/quickfix.dir/SocketInitiator.cpp.o
[ 71%] Building CXX object src/C++/CMakeFiles/quickfix.dir/SocketMonitor.cpp.o
[ 72%] Building CXX object src/C++/CMakeFiles/quickfix.dir/SocketServer.cpp.o
[ 73%] Building CXX object src/C++/CMakeFiles/quickfix.dir/stdafx.cpp.o
[ 74%] Building CXX object src/C++/CMakeFiles/quickfix.dir/ThreadedSocketAcceptor.cpp.o
[ 75%] Building CXX object src/C++/CMakeFiles/quickfix.dir/ThreadedSocketConnection.cpp.o
[ 76%] Building CXX object src/C++/CMakeFiles/quickfix.dir/ThreadedSocketInitiator.cpp.o
[ 77%] Building CXX object src/C++/CMakeFiles/quickfix.dir/TimeRange.cpp.o
[ 78%] Building CXX object src/C++/CMakeFiles/quickfix.dir/Utility.cpp.o
[ 79%] Linking CXX shared library libquickfix.so
[ 79%] Built target quickfix
Scanning dependencies of target ut
[ 80%] Building CXX object src/CMakeFiles/ut.dir/ut.cpp.o
[ 81%] Building C object src/CMakeFiles/ut.dir/getopt.c.o
[ 82%] Linking CXX executable ut
[ 82%] Built target ut
Scanning dependencies of target ut_target
[ 82%] Built target ut_target
Scanning dependencies of target at
[ 83%] Building CXX object src/CMakeFiles/at.dir/at.cpp.o
[ 84%] Building C object src/CMakeFiles/at.dir/getopt.c.o
[ 85%] Linking CXX executable at
[ 85%] Built target at
Scanning dependencies of target at_target
[ 85%] Built target at_target
Scanning dependencies of target pt
[ 86%] Building CXX object src/CMakeFiles/pt.dir/pt.cpp.o
[ 87%] Building C object src/CMakeFiles/pt.dir/getopt.c.o
[ 88%] Linking CXX executable pt
[ 88%] Built target pt
Scanning dependencies of target pt_target
[ 88%] Built target pt_target
Scanning dependencies of target executor
[ 89%] Building CXX object examples/executor/C++/CMakeFiles/executor.dir/Application.cpp.o
[ 90%] Building CXX object examples/executor/C++/CMakeFiles/executor.dir/executor.cpp.o
[ 90%] Linking CXX executable executor
[ 90%] Built target executor
Scanning dependencies of target executor_target
[ 90%] Built target executor_target
Scanning dependencies of target tradeclient
[ 91%] Building CXX object examples/tradeclient/CMakeFiles/tradeclient.dir/Application.cpp.o
[ 92%] Building CXX object examples/tradeclient/CMakeFiles/tradeclient.dir/tradeclient.cpp.o
[ 93%] Linking CXX executable tradeclient
[ 93%] Built target tradeclient
Scanning dependencies of target tradeclient_target
[ 93%] Built target tradeclient_target
Scanning dependencies of target ordermatch
[ 94%] Building CXX object examples/ordermatch/CMakeFiles/ordermatch.dir/Application.cpp.o
[ 95%] Building CXX object examples/ordermatch/CMakeFiles/ordermatch.dir/Market.cpp.o
[ 96%] Building CXX object examples/ordermatch/CMakeFiles/ordermatch.dir/ordermatch.cpp.o
[ 97%] Linking CXX executable ordermatch
[ 97%] Built target ordermatch
Scanning dependencies of target ordermatch_target
[ 97%] Built target ordermatch_target
Scanning dependencies of target ordermatch_ut
[ 98%] Building CXX object examples/ordermatch/test/CMakeFiles/ordermatch_ut.dir/ordermatch_ut.cpp.o
[ 99%] Building CXX object examples/ordermatch/test/CMakeFiles/ordermatch_ut.dir/Market.cpp.o
[100%] Linking CXX executable ordermatch_ut
[100%] Built target ordermatch_ut
[  0%] Built target QUICKFIX_HEADERS_LINK
[ 18%] Built target UnitTest++
[ 35%] Built target TestUnitTest++
[ 79%] Built target quickfix
[ 82%] Built target ut
[ 82%] Built target ut_target
[ 85%] Built target at
[ 85%] Built target at_target
[ 88%] Built target pt
[ 88%] Built target pt_target
[ 90%] Built target executor
[ 90%] Built target executor_target
[ 93%] Built target tradeclient
[ 93%] Built target tradeclient_target
[ 97%] Built target ordermatch
[ 97%] Built target ordermatch_target
[100%] Built target ordermatch_ut
Install the project...
-- Install configuration: "RELEASE"
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/share/quickfix
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/share/quickfix/FIX40.xml
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/share/quickfix/FIX41.xml
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/share/quickfix/FIX42.xml
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/share/quickfix/FIX43.xml
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/share/quickfix/FIX44.xml
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/share/quickfix/FIX50.xml
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/share/quickfix/FIX50SP1.xml
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/share/quickfix/FIX50SP2.xml
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/share/quickfix/FIXT11.xml
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/lib/libquickfix.so.16.0.1
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/lib/libquickfix.so.16
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/lib/libquickfix.so
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Acceptor.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Allocator.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Application.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/AtomicCount.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/DOMDocument.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/DataDictionary.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/DataDictionaryProvider.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/DatabaseConnectionID.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/DatabaseConnectionPool.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Dictionary.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Event.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Except.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Exceptions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Field.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/FieldConvertors.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/FieldMap.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/FieldNumbers.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/FieldTypes.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Fields.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/FileLog.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/FileStore.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/FixFieldNumbers.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/FixFields.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/FixValues.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/FlexLexer.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Group.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/HtmlBuilder.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/HttpConnection.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/HttpMessage.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/HttpParser.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/HttpServer.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Initiator.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Log.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Message.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/MessageCracker.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/MessageSorters.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/MessageStore.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Mutex.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/MySQLConnection.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/MySQLLog.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/MySQLStore.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/NullStore.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/OdbcConnection.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/OdbcLog.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/OdbcStore.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/PUGIXML_DOMDocument.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Parser.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/PostgreSQLConnection.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/PostgreSQLLog.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/PostgreSQLStore.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Queue.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Responder.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SSLSocketAcceptor.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SSLSocketConnection.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SSLSocketInitiator.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Session.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SessionFactory.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SessionID.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SessionSettings.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SessionState.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Settings.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SharedArray.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SocketAcceptor.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SocketConnection.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SocketConnector.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SocketInitiator.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SocketMonitor.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/SocketServer.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/ThreadedSSLSocketAcceptor.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/ThreadedSSLSocketConnection.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/ThreadedSSLSocketInitiator.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/ThreadedSocketAcceptor.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/ThreadedSocketConnection.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/ThreadedSocketInitiator.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/TimeRange.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Utility.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/UtilitySSL.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/Values.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/config-all.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/dirent_windows.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/Advertisement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/Allocation.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/AllocationInstructionAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/DontKnowTrade.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/Email.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/ExecutionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/Heartbeat.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/IOI.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/ListCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/ListExecute.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/ListStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/ListStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/Logon.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/Logout.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/Message.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/MessageCracker.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/NewOrderList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/NewOrderSingle.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/News.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/OrderCancelReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/OrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/OrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/OrderStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/Quote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/QuoteRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/Reject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/ResendRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/SequenceReset.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix40/TestRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/Advertisement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/Allocation.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/AllocationInstructionAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/DontKnowTrade.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/Email.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/ExecutionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/Heartbeat.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/IOI.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/ListCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/ListExecute.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/ListStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/ListStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/Logon.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/Logout.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/Message.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/MessageCracker.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/NewOrderList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/NewOrderSingle.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/News.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/OrderCancelReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/OrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/OrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/OrderStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/Quote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/QuoteRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/Reject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/ResendRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/SequenceReset.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/SettlementInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix41/TestRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/Advertisement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/Allocation.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/AllocationInstructionAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/BidRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/BidResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/BusinessMessageReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/DontKnowTrade.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/Email.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/ExecutionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/Heartbeat.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/IOI.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/ListCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/ListExecute.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/ListStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/ListStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/ListStrikePrice.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/Logon.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/Logout.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/MarketDataIncrementalRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/MarketDataRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/MarketDataRequestReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/MarketDataSnapshotFullRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/MassQuote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/Message.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/MessageCracker.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/NewOrderList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/NewOrderSingle.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/News.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/OrderCancelReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/OrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/OrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/OrderStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/Quote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/QuoteAcknowledgement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/QuoteCancel.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/QuoteRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/QuoteStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/Reject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/ResendRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/SecurityDefinition.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/SecurityDefinitionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/SecurityStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/SecurityStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/SequenceReset.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/SettlementInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/TestRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/TradingSessionStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix42/TradingSessionStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/Advertisement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/Allocation.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/AllocationAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/BidRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/BidResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/BusinessMessageReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/CrossOrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/CrossOrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/DerivativeSecurityList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/DerivativeSecurityListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/DontKnowTrade.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/Email.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/ExecutionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/Heartbeat.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/IOI.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/ListCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/ListExecute.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/ListStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/ListStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/ListStrikePrice.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/Logon.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/Logout.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/MarketDataIncrementalRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/MarketDataRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/MarketDataRequestReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/MarketDataSnapshotFullRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/MassQuote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/MassQuoteAcknowledgement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/Message.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/MessageCracker.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/MultilegOrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/NewOrderCross.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/NewOrderList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/NewOrderMultileg.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/NewOrderSingle.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/News.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/OrderCancelReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/OrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/OrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/OrderMassCancelReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/OrderMassCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/OrderMassStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/OrderStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/Quote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/QuoteCancel.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/QuoteRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/QuoteRequestReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/QuoteStatusReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/QuoteStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/RFQRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/RegistrationInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/RegistrationInstructionsResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/Reject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/ResendRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/SecurityDefinition.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/SecurityDefinitionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/SecurityList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/SecurityListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/SecurityStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/SecurityStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/SecurityTypeRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/SecurityTypes.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/SequenceReset.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/SettlementInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/TestRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/TradeCaptureReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/TradeCaptureReportRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/TradingSessionStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/TradingSessionStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix43/XMLnonFIX.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/Advertisement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/AllocationInstruction.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/AllocationInstructionAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/AllocationReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/AllocationReportAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/AssignmentReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/BidRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/BidResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/BusinessMessageReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/CollateralAssignment.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/CollateralInquiry.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/CollateralInquiryAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/CollateralReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/CollateralRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/CollateralResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/Confirmation.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/ConfirmationAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/ConfirmationRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/CrossOrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/CrossOrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/DerivativeSecurityList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/DerivativeSecurityListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/DontKnowTrade.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/Email.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/ExecutionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/Heartbeat.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/IOI.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/ListCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/ListExecute.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/ListStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/ListStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/ListStrikePrice.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/Logon.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/Logout.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/MarketDataIncrementalRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/MarketDataRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/MarketDataRequestReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/MarketDataSnapshotFullRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/MassQuote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/MassQuoteAcknowledgement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/Message.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/MessageCracker.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/MultilegOrderCancelReplace.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/NetworkCounterpartySystemStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/NetworkCounterpartySystemStatusResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/NewOrderCross.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/NewOrderList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/NewOrderMultileg.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/NewOrderSingle.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/News.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/OrderCancelReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/OrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/OrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/OrderMassCancelReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/OrderMassCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/OrderMassStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/OrderStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/PositionMaintenanceReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/PositionMaintenanceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/PositionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/Quote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/QuoteCancel.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/QuoteRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/QuoteRequestReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/QuoteResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/QuoteStatusReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/QuoteStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/RFQRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/RegistrationInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/RegistrationInstructionsResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/Reject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/RequestForPositions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/RequestForPositionsAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/ResendRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/SecurityDefinition.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/SecurityDefinitionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/SecurityList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/SecurityListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/SecurityStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/SecurityStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/SecurityTypeRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/SecurityTypes.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/SequenceReset.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/SettlementInstructionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/SettlementInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/TestRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/TradeCaptureReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/TradeCaptureReportAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/TradeCaptureReportRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/TradeCaptureReportRequestAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/TradingSessionStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/TradingSessionStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/UserRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/UserResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix44/XMLnonFIX.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/AdjustedPositionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/Advertisement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/AllocationInstruction.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/AllocationInstructionAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/AllocationInstructionAlert.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/AllocationReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/AllocationReportAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/AssignmentReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/BidRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/BidResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/BusinessMessageReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/CollateralAssignment.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/CollateralInquiry.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/CollateralInquiryAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/CollateralReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/CollateralRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/CollateralResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/Confirmation.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/ConfirmationAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/ConfirmationRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/ContraryIntentionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/CrossOrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/CrossOrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/DerivativeSecurityList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/DerivativeSecurityListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/DontKnowTrade.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/Email.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/ExecutionAcknowledgement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/ExecutionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/IOI.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/ListCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/ListExecute.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/ListStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/ListStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/ListStrikePrice.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/MarketDataIncrementalRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/MarketDataRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/MarketDataRequestReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/MarketDataSnapshotFullRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/MassQuote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/MassQuoteAcknowledgement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/Message.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/MessageCracker.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/MultilegOrderCancelReplace.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/NetworkCounterpartySystemStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/NetworkCounterpartySystemStatusResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/NewOrderCross.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/NewOrderList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/NewOrderMultileg.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/NewOrderSingle.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/News.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/OrderCancelReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/OrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/OrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/OrderMassCancelReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/OrderMassCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/OrderMassStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/OrderStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/PositionMaintenanceReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/PositionMaintenanceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/PositionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/Quote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/QuoteCancel.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/QuoteRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/QuoteRequestReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/QuoteResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/QuoteStatusReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/QuoteStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/RFQRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/RegistrationInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/RegistrationInstructionsResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/RequestForPositions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/RequestForPositionsAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SecurityDefinition.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SecurityDefinitionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SecurityDefinitionUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SecurityList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SecurityListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SecurityListUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SecurityStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SecurityStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SecurityTypeRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SecurityTypes.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SettlementInstructionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/SettlementInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/TradeCaptureReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/TradeCaptureReportAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/TradeCaptureReportRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/TradeCaptureReportRequestAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/TradingSessionList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/TradingSessionListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/TradingSessionStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/TradingSessionStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/UserRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50/UserResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/AdjustedPositionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/Advertisement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/AllocationInstruction.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/AllocationInstructionAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/AllocationInstructionAlert.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/AllocationReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/AllocationReportAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ApplicationMessageReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ApplicationMessageRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ApplicationMessageRequestAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/AssignmentReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/BidRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/BidResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/BusinessMessageReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/CollateralAssignment.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/CollateralInquiry.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/CollateralInquiryAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/CollateralReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/CollateralRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/CollateralResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/Confirmation.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ConfirmationAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ConfirmationRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ContraryIntentionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/CrossOrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/CrossOrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/DerivativeSecurityList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/DerivativeSecurityListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/DerivativeSecurityListUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/DontKnowTrade.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/Email.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ExecutionAcknowledgement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ExecutionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/IOI.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ListCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ListExecute.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ListStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ListStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/ListStrikePrice.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/MarketDataIncrementalRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/MarketDataRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/MarketDataRequestReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/MarketDataSnapshotFullRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/MarketDefinition.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/MarketDefinitionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/MarketDefinitionUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/MassQuote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/MassQuoteAcknowledgement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/Message.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/MessageCracker.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/MultilegOrderCancelReplace.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/NetworkCounterpartySystemStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/NetworkCounterpartySystemStatusResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/NewOrderCross.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/NewOrderList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/NewOrderMultileg.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/NewOrderSingle.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/News.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/OrderCancelReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/OrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/OrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/OrderMassActionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/OrderMassActionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/OrderMassCancelReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/OrderMassCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/OrderMassStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/OrderStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/PositionMaintenanceReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/PositionMaintenanceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/PositionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/Quote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/QuoteCancel.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/QuoteRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/QuoteRequestReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/QuoteResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/QuoteStatusReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/QuoteStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/RFQRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/RegistrationInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/RegistrationInstructionsResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/RequestForPositions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/RequestForPositionsAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SecurityDefinition.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SecurityDefinitionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SecurityDefinitionUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SecurityList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SecurityListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SecurityListUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SecurityStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SecurityStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SecurityTypeRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SecurityTypes.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SettlementInstructionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SettlementInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/SettlementObligationReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/TradeCaptureReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/TradeCaptureReportAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/TradeCaptureReportRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/TradeCaptureReportRequestAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/TradingSessionList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/TradingSessionListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/TradingSessionListUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/TradingSessionStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/TradingSessionStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/UserNotification.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/UserRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp1/UserResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/AdjustedPositionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/Advertisement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/AllocationInstruction.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/AllocationInstructionAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/AllocationInstructionAlert.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/AllocationReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/AllocationReportAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ApplicationMessageReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ApplicationMessageRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ApplicationMessageRequestAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/AssignmentReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/BidRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/BidResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/BusinessMessageReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/CollateralAssignment.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/CollateralInquiry.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/CollateralInquiryAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/CollateralReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/CollateralRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/CollateralResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/Confirmation.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ConfirmationAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ConfirmationRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ContraryIntentionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/CrossOrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/CrossOrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/DerivativeSecurityList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/DerivativeSecurityListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/DerivativeSecurityListUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/DontKnowTrade.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/Email.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ExecutionAcknowledgement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ExecutionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/IOI.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ListCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ListExecute.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ListStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ListStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/ListStrikePrice.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/MarketDataIncrementalRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/MarketDataRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/MarketDataRequestReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/MarketDataSnapshotFullRefresh.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/MarketDefinition.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/MarketDefinitionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/MarketDefinitionUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/MassQuote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/MassQuoteAcknowledgement.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/Message.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/MessageCracker.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/MultilegOrderCancelReplace.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/NetworkCounterpartySystemStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/NetworkCounterpartySystemStatusResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/NewOrderCross.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/NewOrderList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/NewOrderMultileg.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/NewOrderSingle.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/News.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/OrderCancelReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/OrderCancelReplaceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/OrderCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/OrderMassActionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/OrderMassActionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/OrderMassCancelReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/OrderMassCancelRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/OrderMassStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/OrderStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/PositionMaintenanceReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/PositionMaintenanceRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/PositionReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/Quote.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/QuoteCancel.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/QuoteRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/QuoteRequestReject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/QuoteResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/QuoteStatusReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/QuoteStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/RFQRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/RegistrationInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/RegistrationInstructionsResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/RequestForPositions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/RequestForPositionsAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SecurityDefinition.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SecurityDefinitionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SecurityDefinitionUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SecurityList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SecurityListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SecurityListUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SecurityStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SecurityStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SecurityTypeRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SecurityTypes.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SettlementInstructionRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SettlementInstructions.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/SettlementObligationReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/StreamAssignmentReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/StreamAssignmentReportACK.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/StreamAssignmentRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/TradeCaptureReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/TradeCaptureReportAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/TradeCaptureReportRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/TradeCaptureReportRequestAck.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/TradingSessionList.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/TradingSessionListRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/TradingSessionListUpdateReport.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/TradingSessionStatus.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/TradingSessionStatusRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/UserNotification.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/UserRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fix50sp2/UserResponse.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fixt11
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fixt11/Heartbeat.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fixt11/Logon.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fixt11/Logout.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fixt11/Message.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fixt11/MessageCracker.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fixt11/Reject.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fixt11/ResendRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fixt11/SequenceReset.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/fixt11/TestRequest.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/index.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/stdafx.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/stdint_msvc.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/strptime.h
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/wx
-- Installing: /tmp/tmp.nl1jpYgWfL/libquickfix/include/quickfix/wx/sharedptr.h
```

## Author(s)

Stewart Henderson