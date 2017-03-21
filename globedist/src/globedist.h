#pragma once

/*
 * calculates distance between two lon,lat coordinates on a globe object of the radius r.
 * Haversine: http://mathworld.wolfram.com/Haversine.html
 */
namespace cpptoolkit {
    double globedist(double lon1, double lat1, double lon2, double lat2, double r);
}

