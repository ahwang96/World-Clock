#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    tzset();
    
    time_t t;
    time(&t);
    
    printf("New York City: \t %s-%s %s\n",tzname[0],tzname[1],ctime(&t));
    
    setenv("TZ", "CST6UTC", 1);
    tzset();
    
    printf("Chicago: \t %s-%s %s\n",tzname[0],tzname[1],ctime(&t));
    
    setenv("TZ", "PST8UTC", 1);
    tzset();
    
    printf("Los Angeles: \t %s-%s %s\n",tzname[0],tzname[1],ctime(&t));
    
    setenv("TZ", "HST10UTC", 1);
    tzset();
    
    printf("Honolulu: \t %s-%s %s\n",tzname[0],tzname[1],ctime(&t));
    
    setenv("TZ", "BRST3UTC", 1);
    tzset();
    
    printf("Rio de Janeiro:  %s-%s %s\n",tzname[0],tzname[1],ctime(&t));
    
    setenv("TZ", "GMT0UTC", 1);
    tzset();
    
    printf("London: \t %s-%s %s\n",tzname[0],tzname[1],ctime(&t));
    
    setenv("TZ", "JST-9UTC", 1);
    tzset();
    
    printf("Tokyo: \t\t %s-%s %s\n",tzname[0],tzname[1],ctime(&t));
    
    setenv("TZ", "AEDT-11UTC", 1);
    tzset();
    
    printf("Sydney: \t %s-%s %s\n",tzname[0],tzname[1],ctime(&t));
    
    return 0;
}
