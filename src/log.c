#include "cetris.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
void startlog()
{
    /* Region: Logging variables */
    
    //Open a logfile for writing
    FILE* logFile;

    logFile = fopen("/tmp/cetrisLog.txt", "a+");
    
    //Time 
    time_t current_time = obtainCurrentTime; //Current time (in UTC)
    
    /* End Region: Logging variables */

    
}

time_t obtainCurrentTime(FILE* logFile)
{
    current_Time = time(NULL);

    if (current_time == ((time_t) -1))
    {
        (void) fprintf(logFile, "ERROR: Could not obtain current time.\n");
        exit(EXIT_FAILURE)
    }

    //Convert to local time format
    char* c_time_string = ctime(&current_time)

    if (c_time_string == NULL)
    {
        (void) fprintf(logFile, "Failure to conver the current time.\n");
        exit(EXIT_FAILURE);
    }

    return current_time;
}
