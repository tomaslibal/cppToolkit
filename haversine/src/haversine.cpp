#include "haversine.h"
#include <math.h>

double cpptoolkit::haversine(double lon1, double lat1, double lon2, double lat2, double r)
{
    double dlon = (lon2-lon1)*M_PI/180;
    double dlat = (lat2-lat1)*M_PI/180;

    double a = sin(dlat/2) * sin(dlat/2) + cos(lat1*M_PI/180) * cos(lat2*M_PI/180) * sin(dlon/2) * sin(dlon/2);
    double c = 2 * asin(sqrt(a));
    return r * c;
}

