#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;
int const totalNumberOfTracks=22;
int numberSectorsPerTrack(int trackNumber_par);
int totalNumberOfSelectors();
int sectorToTrack(int sector_par,int *trackNumber_par);
void testTrackFunctions();
void testSeekTimes();
double seekTime(double tStart_par, double tEnd_par, double r_par);
void  testRotationTimes();
void testAccessTimes();
void displayHardDriveStats();
int main() {
    testTrackFunctions();
    testSeekTimes();
    cout << endl;
    testRotationTimes();
    cout << endl;
    testAccessTimes();
    cout << endl << endl;
    displayHardDriveStats();
    return 0;
}
//Track Functions
int numberSectorsPerTrack(int trackNumber_par){
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
        sum+= numberSectorsPerTrack(trackNumber);
        trackNumber++;
    }
    return sum;
}
void testTrackFunctions(){
    cout << "*** Sample Output For " << totalNumberOfTracks << " Tracks ***\n\n";
    cout << "TESTING: Track Functions\n";
    cout << "------------------------\n";
    int trackNumber=0;
    numberSectorsPerTrack(trackNumber);
    cout << "Now displaying the [track #] to [sectors per track] mapping:\n";
    cout << "     Track#   #Sectors\n";
    while(trackNumber<totalNumberOfTracks){
        cout << "         " << setw(2) << trackNumber;
        cout << "         " << setw(2) << numberSectorsPerTrack(trackNumber) << endl;
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
    for(int sectors=25;sectors<=totalNumberOfSelectors();sectors+=13){
            cout << "        " << setw(3) << sectors;
            cout << "        " << setw(3) << sectorToTrack(sectors,&trackNumber) << endl;
    }
}
int sectorToTrack(int sector_par,int *trackNumber_par){
    if(sector_par% numberSectorsPerTrack(*trackNumber_par)==0 && sector_par !=0){
        return *trackNumber_par=*trackNumber_par+1;
    }else{
        return *trackNumber_par;
    }
}
void testSeekTimes(){
    cout << "\nTESTING: Seek Times\n"
            "-------------------\n"
            "Now displaying the [track #] to [track #] seek times.\n"
            "Starting track shown down left most column; ending track in first row.\n";
    cout << "From:      ";
    for(int i=0; i<=totalNumberOfTracks-1; i++){
        cout << setw(2) << i << "    ";
    }
    cout << endl << endl;
    cout << fixed << setprecision(3);
    double r=.002;
    for(int tEnd=0;tEnd<=totalNumberOfTracks-1;tEnd++){
        int tStart=0;
        cout << "   " << setw(2) << tEnd << "    ";
        while(tStart<=totalNumberOfTracks-1){
            cout << seekTime(tStart,tEnd,r) << " ";
            tStart++;
        }
        cout << endl;
    }
}
double seekTime(double tStart_par, double tEnd_par, double r_par){
    return abs(tStart_par-tEnd_par)*r_par;
}
double RPS(int RPM_par){
    return RPM_par/60.0;
}
double rotationDelay(int RPM_par){
    return 1/RPS(RPM_par)/2;
}
double timeRead(int RPM_par, int sectorNum_par){
    return 1/RPS(RPM_par)/sectorNum_par;
}
void  testRotationTimes(){
    cout << "TESTING: Rotation Times\n"
            "-----------------------\n"
            "Now displaying the [rotation delay] per [track]."
            "\n   RPM      RPS   Rotation Delay     Read Track 1   Read Max Track" << endl;
    for(int RPM=4000; RPM<=15000; RPM=RPM+1000){
        cout << fixed << setprecision(2);
        cout << " " << setw(5) << RPM;
        cout << "   " << setw(6) << RPS(RPM);
        cout << fixed << setprecision(6);
        cout << "         " << setw(5) << rotationDelay(RPM);
        int trackNumber=0;
        cout << "         " << setw(5) << timeRead(RPM, numberSectorsPerTrack(trackNumber));
        trackNumber=totalNumberOfTracks-1;
        cout << "         " << setw(5) << timeRead(RPM, numberSectorsPerTrack(trackNumber)) << endl;

    }
}
int averageAccessTime(int trackNumber_par, int sectorNumber_par,int RPM_par){
    int total=0;
    for(int RPM=4000; RPM<=15000; RPM=RPM+1000){
        int total=rotationDelay(RPM_par)+total;
    }
    return sectorToTrack(sectorNumber_par,&trackNumber_par)+total/12+timeRead(RPM_par, numberSectorsPerTrack(trackNumber_par));
}
int randAverageTime(){
    srand(time(0));
}
void testAccessTimes(){
    cout << "TESTING: Access & Read Times\n"
            "----------------------------\n"
            "Now displaying time to [access and read] for some sectors for specific \n"
            "[RPM], [start track #] and [target sector #].";
}
void displayHardDriveStats(){
    bool repeat=1;
    int rotationsPerMin=0;
    while(repeat==1){
        cout << "Enter HD rotations per minute (RPM): ";
        cin >> rotationsPerMin;
        if (rotationsPerMin<1 || rotationsPerMin>50000){
            cout << "Error: Value must be between 1 and 50000.\n";
        }else{
            break;
        }
    }
    cout << endl;
    cout << "Hard Drive Statistics:\n"
            "----------------------\n";
    cout << "Number of tracks:             " << totalNumberOfTracks << endl;
    cout << "Total number of sectors:      " << totalNumberOfSelectors() << endl;
    cout << "Revolutions per minute (RPM): " << rotationsPerMin << endl;
    cout << fixed << setprecision(1);
    cout << "Revolutions per second (RPS): " << RPS(rotationsPerMin) << endl;
    cout << fixed << setprecision(6);
    cout << "Rotational delay (seconds):   " << rotationDelay(rotationsPerMin) << endl;
    cout << "Time to read first sector:    " << timeRead(rotationsPerMin, numberSectorsPerTrack(0)) << " seconds" << endl;
    cout << "Time to read last sector:     " << timeRead(rotationsPerMin, numberSectorsPerTrack(totalNumberOfTracks)) << " seconds" << endl;
    cout << "Average read time:            "                            << " seconds" << endl;

    cout << "Average (random) read time:   "                             << " seconds" << endl;
}




