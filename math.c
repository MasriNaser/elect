#include <cmath>

long find_nth_root(double x, int d)
{
  long low = 0, high = 1;
  while (std::pow(high, d) <= x)
  {
    low = high;
    high *= 2;
  }
  while (low != high - 1)
  {
    long step = (high - low) / 2;
    long candidate = low + step;

    double value = std::pow(candidate, d);
    if (value == x)
    {
      return candidate;
    }
    if (value < x)
    {
      low = candidate;
      continue;
    }
    high = candidate;
  }
  return low;
}