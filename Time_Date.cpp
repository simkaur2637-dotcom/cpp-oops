//The time() function can only create a timestamp for the current date, but we can create a timestamp for any date by using the mktime() function.

//The mktime() function converts a datetime structure into a timestamp.

struct tm datetime;
time_t timestamp;

datetime.tm_year = 2023 - 1900; // Number of years since 1900
datetime.tm_mon = 12 - 1; // Number of months since January
datetime.tm_mday = 17;
datetime.tm_hour = 12;
datetime.tm_min = 30;
datetime.tm_sec = 1;
// Daylight Savings must be specified
// -1 uses the computer's timezone setting
datetime.tm_isdst = -1;

timestamp = mktime(&datetime);

cout << ctime(&timestamp);




// Create the datetime structure and use mktime to fill in the missing members
struct tm datetime;
datetime.tm_year = 2023 - 1900; // Number of years since 1900
datetime.tm_mon = 12 - 1; // Number of months since January
datetime.tm_mday = 17;
datetime.tm_hour = 0; datetime.tm_min = 0; datetime.tm_sec = 0;
datetime.tm_isdst = -1;
mktime(&datetime);

string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

cout << "The date is on a " << weekdays[datetime.tm_wday];
