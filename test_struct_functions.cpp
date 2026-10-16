#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <cmath>
#include <doctest.h>
using namespace std;

struct Point{
    double x;
    double y;
};

double distance_from_origin(Point& distance){
    double temp1 = distance.x * distance.x;
    double temp2 = distance.y * distance.y;
    double temp3 = temp1 + temp2;
    return sqrt(temp3);
}

// Your function goes here
TEST_CASE("distance_from_origin(p) returns p's distance from (0, 0) ") {
    Point p = Point{3, 4};
    CHECK(distance_from_origin(p) == 5.0);
}
