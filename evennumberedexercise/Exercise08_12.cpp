#include <iostream>
#include <cmath>
using namespace std;

/** Compute the distance between two points (x1, y1, z1) and (x2, y2, z2) */
double getDistance(double x1, double y1, double z1, double x2, double y2, double z2) {
  return sqrt((x2 - x1) * (x2 - x1)
    + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1));
}

int main()
{
  const int NUMBER_OF_POINTS = 8;

  // Each row in points represents a point
  double points[NUMBER_OF_POINTS][3] = {{-1, 0, 3}, {-1, -1, -1}, {4, 1, 1},
    {2, 0.5, 9}, {3.5, 2, -1}, {3, 1.5, 3}, {-1.5, 4, 2},
    {5.5, 4, -0.5}};

  // p1 and p2 are the indices in the points array
  int p1 = 0, p2 = 1; // Initial two points
  double shortestDistances = getDistance(
    points[p1][0], points[p1][1], points[p1][2],
    points[p2][0], points[p2][1], points[p2][2]); // Initialize shortestDistances

  // Compute distance for every two points
  for (int i = 0; i < NUMBER_OF_POINTS; i++)
  {
    for (int j = i + 1; j < NUMBER_OF_POINTS; j++)
    {
      double distance = getDistance(
        points[i][0], points[i][1], points[i][2],
        points[j][0], points[j][1], points[j][2]);

      if (shortestDistances > distance)
      {
        p1 = i; // Update p1
        p2 = j; // Update p2
        shortestDistances = distance; // Update shortestDistances
      }
    }
  }

  // Display result
  cout << "The closest two points are " <<
    "(" << points[p1][0] << ", " << points[p1][1] << ", " <<
    points[p1][2] << ") and (" << points[p2][0] << ", " << points[p2][1] <<
    ", " << points[p2][2] << ")";

  return 0;
}
