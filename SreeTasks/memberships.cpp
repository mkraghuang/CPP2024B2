#include "memberships.h"
#include"Library.h"

int main()
{
    Memberships lib1("Grad Two Eluru", 27000, 3000, 4060, 250);
    lib1.getTotalBooks();
    lib1.setdetails();
    lib1.getTotalMemberships();
    lib1.setLibraryDetails();
    return 0;
}