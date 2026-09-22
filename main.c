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
    scanf("%lf",&midtermpercent);
    printf("enter your target note:");
    scanf("%lf",&targetnote);
    int necessarynote= calculaterequiredfinal( midtermnote,midtermpercent, targetnote);
printf("Notes of your should be:%d",necessarynote);
    return 0;
        
 }