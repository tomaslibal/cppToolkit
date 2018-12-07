#include "globedistTest.h"
#include <cmath>

CPPUNIT_TEST_SUITE_REGISTRATION(globedistTest);

globedistTest::globedistTest() {
}

globedistTest::~globedistTest() {
}

void globedistTest::setUp()
{
}

void globedistTest::tearDown()
{
}

bool areSameWithLeniency(double a, double b)
{
    return std::fabs(a - b) < 0.1;
}


void globedistTest::testKnownLocationOnEarthGivesCorrectDistance()
{
    double dist = cpptoolkit::globedist(-103.8, 1.367, 0.1262, 51.5, cpptoolkit::EARTH_R_KM);    
    CPPUNIT_ASSERT(areSameWithLeniency(dist, 10845.3));
}


