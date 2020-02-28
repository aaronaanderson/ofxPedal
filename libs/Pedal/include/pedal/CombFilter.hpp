#ifndef CombFilter_hpp
#define CombFilter_hpp

#include "CircularBuffer.hpp"//used for delay line
#define _USE_MATH_DEFINES 
#include <cmath>

/* Filter Diagram
intput__+___[DELAY]_____output
         \           /        
          \__*g_____/
*/                  
class CombFilter{
  public:
  CombFilter(float maxDelay = 1000.0f);
  
  float process(float input);
  float getFeedBackDelayTime();
  float getFeedBackGain();
  float getFeedForwardGain();
  float getMaxDelayTime();
  void setDelayTime(float newFBDelayTime);
  void setDelayByFrequency(float frequency);
  void setFeedBackGain(float newFBGain);
  void setMaxDelayTime(float newMaxDelay);
  
  private:
  float currentSample;
  CircularBuffer delayLine;
  float delayTime;
  float maxDelayTime = 1000.0f;
  float feedBackGain;
};
#endif 