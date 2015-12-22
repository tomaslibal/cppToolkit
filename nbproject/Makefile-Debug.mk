#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/binsearch/src/binsearch.o \
	${OBJECTDIR}/chainedHashTable/src/ChainedHashTable.o \
	${OBJECTDIR}/doublyLinkedList/src/DoublyLinkedList.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f2 \
	${TESTDIR}/TestFiles/f4 \
	${TESTDIR}/TestFiles/f3 \
	${TESTDIR}/TestFiles/f5

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptoolkit

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptoolkit: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptoolkit ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/binsearch/src/binsearch.o: binsearch/src/binsearch.cpp 
	${MKDIR} -p ${OBJECTDIR}/binsearch/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/binsearch/src/binsearch.o binsearch/src/binsearch.cpp

${OBJECTDIR}/chainedHashTable/src/ChainedHashTable.o: chainedHashTable/src/ChainedHashTable.cpp 
	${MKDIR} -p ${OBJECTDIR}/chainedHashTable/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chainedHashTable/src/ChainedHashTable.o chainedHashTable/src/ChainedHashTable.cpp

${OBJECTDIR}/doublyLinkedList/src/DoublyLinkedList.o: doublyLinkedList/src/DoublyLinkedList.cpp 
	${MKDIR} -p ${OBJECTDIR}/doublyLinkedList/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/doublyLinkedList/src/DoublyLinkedList.o doublyLinkedList/src/DoublyLinkedList.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f2: ${TESTDIR}/binsearch/test/binsearchTest.o ${TESTDIR}/binsearch/test/binsearchTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f2 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f4: ${TESTDIR}/bitflags/test/BitflagsTest.o ${TESTDIR}/bitflags/test/bitflagsTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f4 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f3: ${TESTDIR}/chainedHashTable/test/chainedHashTableTest.o ${TESTDIR}/chainedHashTable/test/chainedHashTableTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f3 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f5: ${TESTDIR}/doublyLinkedList/test/doublyLinkedListTest.o ${TESTDIR}/doublyLinkedList/test/doublyLinkedListTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f5 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   


${TESTDIR}/binsearch/test/binsearchTest.o: binsearch/test/binsearchTest.cpp 
	${MKDIR} -p ${TESTDIR}/binsearch/test
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/binsearch/test/binsearchTest.o binsearch/test/binsearchTest.cpp


${TESTDIR}/binsearch/test/binsearchTestRunner.o: binsearch/test/binsearchTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/binsearch/test
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/binsearch/test/binsearchTestRunner.o binsearch/test/binsearchTestRunner.cpp


${TESTDIR}/bitflags/test/BitflagsTest.o: bitflags/test/BitflagsTest.cpp 
	${MKDIR} -p ${TESTDIR}/bitflags/test
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/bitflags/test/BitflagsTest.o bitflags/test/BitflagsTest.cpp


${TESTDIR}/bitflags/test/bitflagsTestRunner.o: bitflags/test/bitflagsTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/bitflags/test
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/bitflags/test/bitflagsTestRunner.o bitflags/test/bitflagsTestRunner.cpp


${TESTDIR}/chainedHashTable/test/chainedHashTableTest.o: chainedHashTable/test/chainedHashTableTest.cpp 
	${MKDIR} -p ${TESTDIR}/chainedHashTable/test
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/chainedHashTable/test/chainedHashTableTest.o chainedHashTable/test/chainedHashTableTest.cpp


${TESTDIR}/chainedHashTable/test/chainedHashTableTestRunner.o: chainedHashTable/test/chainedHashTableTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/chainedHashTable/test
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/chainedHashTable/test/chainedHashTableTestRunner.o chainedHashTable/test/chainedHashTableTestRunner.cpp


${TESTDIR}/doublyLinkedList/test/doublyLinkedListTest.o: doublyLinkedList/test/doublyLinkedListTest.cpp 
	${MKDIR} -p ${TESTDIR}/doublyLinkedList/test
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/doublyLinkedList/test/doublyLinkedListTest.o doublyLinkedList/test/doublyLinkedListTest.cpp


${TESTDIR}/doublyLinkedList/test/doublyLinkedListTestRunner.o: doublyLinkedList/test/doublyLinkedListTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/doublyLinkedList/test
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/doublyLinkedList/test/doublyLinkedListTestRunner.o doublyLinkedList/test/doublyLinkedListTestRunner.cpp


${OBJECTDIR}/binsearch/src/binsearch_nomain.o: ${OBJECTDIR}/binsearch/src/binsearch.o binsearch/src/binsearch.cpp 
	${MKDIR} -p ${OBJECTDIR}/binsearch/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/binsearch/src/binsearch.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/binsearch/src/binsearch_nomain.o binsearch/src/binsearch.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/binsearch/src/binsearch.o ${OBJECTDIR}/binsearch/src/binsearch_nomain.o;\
	fi

${OBJECTDIR}/chainedHashTable/src/ChainedHashTable_nomain.o: ${OBJECTDIR}/chainedHashTable/src/ChainedHashTable.o chainedHashTable/src/ChainedHashTable.cpp 
	${MKDIR} -p ${OBJECTDIR}/chainedHashTable/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/chainedHashTable/src/ChainedHashTable.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/chainedHashTable/src/ChainedHashTable_nomain.o chainedHashTable/src/ChainedHashTable.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/chainedHashTable/src/ChainedHashTable.o ${OBJECTDIR}/chainedHashTable/src/ChainedHashTable_nomain.o;\
	fi

${OBJECTDIR}/doublyLinkedList/src/DoublyLinkedList_nomain.o: ${OBJECTDIR}/doublyLinkedList/src/DoublyLinkedList.o doublyLinkedList/src/DoublyLinkedList.cpp 
	${MKDIR} -p ${OBJECTDIR}/doublyLinkedList/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/doublyLinkedList/src/DoublyLinkedList.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/doublyLinkedList/src/DoublyLinkedList_nomain.o doublyLinkedList/src/DoublyLinkedList.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/doublyLinkedList/src/DoublyLinkedList.o ${OBJECTDIR}/doublyLinkedList/src/DoublyLinkedList_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f2 || true; \
	    ${TESTDIR}/TestFiles/f4 || true; \
	    ${TESTDIR}/TestFiles/f3 || true; \
	    ${TESTDIR}/TestFiles/f5 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptoolkit

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
