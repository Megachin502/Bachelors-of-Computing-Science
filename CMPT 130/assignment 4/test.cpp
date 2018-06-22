#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int const totalNumberOfTracks=22;
int numberSelectorsPerTrack(int trackNumber_par);
int totalNumberOfSelectors();
int sectorToTrack(int sector_par,int *trackNumber_par);
void testTrackFunctions();
int main() {
    testTrackFunctions();




    return 0;
}
//Track Functions
int numberSelectorsPerTrack(int trackNumber_par){
    int const additionalSelectorsPerTrackGroup=2;
    int const tracksGroupNumber=trackNumber_par/4;
    int const baseSelectorsPerTrack=8;
    int selectors=additionalSelectorsPerTrackGroup*(tracksGroupNumber)+baseSelectorsPerTrack;
    return selectors;
}
int totalNumberOfSelectors(){
    int trackNumber=0;
    int sum=0;
    while(trackNumber<totalNumberOfTracks){
        sum+=numberSelectorsPerTrack(trackNumber);
        trackNumber++;
    }
    return sum;
}
void testTrackFunctions(){
    cout << "*** Sample Output For " << totalNumberOfTracks << " Tracks ***\n\n";
    cout << "TESTING: Track Functions\n";
    cout << "------------------------\n";
    int trackNumber=0;
    numberSelectorsPerTrack(trackNumber);
    cout << "Now displaying the [track #] to [sectors per track] mapping:\n";
    cout << "     Track#   #Sectors\n";
    while(trackNumber<totalNumberOfTracks){
        cout << "         " << setw(2) << trackNumber;
        cout << "         " << setw(2) << numberSelectorsPerTrack(trackNumber) << endl;
        trackNumber++;
    }
    cout << "\nTotal # Sectors: " << totalNumberOfSelectors();
    cout << "\n\nNow displaying the [sector number] to [track number] mapping:\n"
         << "Checking every sector at start.\n";
    cout << "     Sector      Track\n";
    trackNumber=0;
    for(int sector=0;sector<=24;sector++){
        cout << "         " << setw(2) << sector;
        cout << "         " << setw(2) << sectorToTrack(sector,&trackNumber) << endl;
    }
    cout << "\nChecking every 13th sector.\n";
    cout << "     Sector      Track\n";
    for(int sectors=25;sectors<=totalNumberOfSelectors();sectors++){
//        sectorToTrack(sectors,&trackNumber);
//        if(sectors=sectors+13){
        cout << "        " << setw(3) << sectors;
        cout << "        " << setw(3) << sectorToTrack(sectors,&trackNumber) << endl;
//        }
    }
}
int sectorToTrack(int sector_par,int *trackNumber_par){
//    if(sector_par-(8*(*trackNumber_par))==8){
    if(sector_par%numberSelectorsPerTrack(*trackNumber_par)==0 && sector_par !=0){
        return *trackNumber_par=*trackNumber_par+1;
    }else{
        return *trackNumber_par;
    }
}