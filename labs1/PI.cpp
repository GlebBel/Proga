#include <cmath>
#include <string>
#include <cstdio>

#define M_PI 3.14159265358979323846  /* pi */
using namespace std;
class PiApprox
{
    public: static string iterPi(double epsilon)
    {
      int denom = 3;
      int sign = -1;
      double pi = 1.0;
      int iterations = 1;
      while(abs(4 * pi - M_PI) > epsilon)
      {
        pi = pi + sign / double(denom);
        
        denom += 2;
        sign *= -1;
        iterations++;
      }
      char buf[64];
      std::sprintf(buf, "[%d, %.10f]", iterations, 4 * pi);
      
      return std::string(buf);
      
    }
};
