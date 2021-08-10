#include "processor.h"
#include "linux_parser.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
  long totalJiffies = LinuxParser::Jiffies();
  long activeJiffies = LinuxParser::ActiveJiffies();
  return activeJiffies * (1.f / totalJiffies);
 }