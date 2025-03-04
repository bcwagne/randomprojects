//program to enter a start time and duration and have it print out blocked out times

#include <iostream>

void printTime(int hour, int min)
{
    if (hour < 10)
    {
        std::cout << "0";
    }
    std::cout << hour << ":";
    if (min < 10)
    {
        std::cout << "0";
    }
    std::cout << min;
}

int main(void)
{
    int startTimeHour = 0;
    int startTimeMin = 0;
    int endTimeHour = 0;
    int endTimeMin = 0;
    int days = 0;
    int duration = 0;

    std::cout << "Enter start hour as hh: ";
    std::cin >> startTimeHour;
    if (startTimeHour > 23)
    {
        startTimeHour = startTimeHour % 24;
    }
    std::cout << "Enter start minute as mm: ";
    std::cin >> startTimeMin;
    if (startTimeMin > 59)
    {
        startTimeHour = startTimeHour + (startTimeMin / 60);
        startTimeMin = startTimeMin % 60;
    }
    //std::cout << "Entered ";
    //printTime(startTimeHour, startTimeMin);

    std::cout << "Enter duration in minutes: ";
    std::cin >> duration;

    days = duration / 1440;
    duration = duration % 1440;

    endTimeHour = startTimeHour + (duration / 60);
    endTimeMin = startTimeMin + (duration % 60);

    std::cout << "Start Time: ";
    printTime(startTimeHour, startTimeMin);
    std::cout << std::endl << "End Time: ";
    printTime(endTimeHour, endTimeMin);
    std::cout << std::endl << "Extra Days: " << days << std::endl;
    std::cout << std::endl;
    return 0;
}//end main
