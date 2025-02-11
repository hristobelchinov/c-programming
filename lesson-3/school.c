#include <stdio.h>
#include "schoolclass.h"
#include "schoolroom.h"

struct School {
    struct SchoolClass schoolClasses[20];
    struct SchoolRoom schoolRooms[10];
};

int main(void) {
    struct School school;
    school.schoolClasses[0].classNumber = 1;
    school.schoolClasses[0].classSection = 'A';
    school.schoolClasses[0].classTeacher.birthYear = 1980;
    int studentYears[] = {2005, 2006, 2007};
    char *firstNames[] = {"Student1", "Student2", "Student3"};
    char *middleNames[] = {"Middle1", "Middle2", "Middle3"};
    char *lastNames[] = {"Last1", "Last2", "Last3"};
}
