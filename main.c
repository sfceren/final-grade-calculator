#include <stdio.h>
#include <math.h>
int calculaterequiredfinal(double midtermnote,double midtermpercent, double targetnote) {
double finalpercent=100-midtermpercent;
double midtermcontribution=(midtermnote*midtermpercent/100);
double neededpoint=targetnote-midtermcontribution;
double rawfinal=neededpoint*100/finalpercent;
rawfinal=ceil(rawfinal);
    return rawfinal;
}
int main() {
    double midtermnote;
    double midtermpercent;
    double targetnote;

    printf("enter your midterm note:");
    scanf("%lf",&midtermnote);
    printf("enter your midterm percent(example:20):");
    scanf("%lf", &midtermpercent);
    if(midtermpercent>=100 || midtermpercent<0) {
        printf("Error: Midterm percent must be between 0 and 99."); 
    return 1; }
    printf("enter your target note:");
    scanf("%lf",&targetnote);
    int necessarynote= calculaterequiredfinal( midtermnote,midtermpercent, targetnote);
    if (necessarynote > 100) {
        printf("Target is impossible! You need %d points, but max exam score is 100.", necessarynote);
    } 
    else if (necessarynote <= 0) {
        printf("Congratulations! You have already reached your target without taking the final.");
    } 
    else {
        printf("To achieve your target, you must score at least: %d", necessarynote);
    }
    return 0;
        
 }
