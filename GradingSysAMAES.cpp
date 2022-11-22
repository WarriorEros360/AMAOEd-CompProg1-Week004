/*
Computation	Formula
Lec	((PQ1 * 0.25) + (PQ2 * 0.25) + (PLecEXAM * 0.50) * 0.3) + ((MQ1 * 0.25) + (MQ2 * 0.25) + (MLecEXAM * 0.50) * 0.3) + ((FQ1 * 0.25) + (FQ2 * 0.25) + (FLecEXAM * 0.50) * 0.4)
Lab	((PMP1 * 0.25) + (PMP2 * 0.25) + (PLabEXAM * 0.50) * 0.3) + ((MMP1 * 0.25) + (MMP2 * 0.25) + (MLabEXAM * 0.50) * 0.3) + ((FMP1 * 0.25) + (FMP2 * 0.25) + (FLabEXAM * 0.50) * 0.4)
LecLab	((PQ1 * 0.25) + (PQ2 * 0.25) + (PLecEXAM * 0.50) * 0.60) + (PMP1 * 0.25) + (PMP2 * 0.25) + (PLabEXAM * 0.50) * 0.40) + (MQ1 * 0.25) + (MQ2 * 0.25) + (MLecEXAM * 0.50) * 0.60) + (MMP1 * 0.25) + (MMP2 * 0.25) + (MLabEXAM * 0.50) * 0.40) + (FQ1 * 0.25) + (FQ2 * 0.25) + (FLecEXAM * 0.50) * 0.60) + (FMP1 * 0.25) + (FMP2 * 0.25) + (FLabEXAM * 0.50) * 0.40)
*/
#include <iostream>
using namespace std;
double PQ1, PQ2, PLecEXAM, PLecGrd;
double PMP1, PMP2, PLabEXAM, PLabGrd;
double MQ1, MQ2, MLecEXAM, MLecGrd;
double MMP1, MMP2, MLabEXAM, MLabGrd;
double FQ1, FQ2, FLecEXAM, FLecGrd;
double FMP1, FMP2, FLabEXAM, FLabGrd;
double preLecLab, midLecLab, finLecLab, totalLecLabGrd;

//PreLEC
double prelimLec()
{
    cout <<"---PRELIM LECTURE GRADES---";
    cout <<"\nEnter Prelim Quiz 1: ";
    cin >> PQ1;
    cout <<"Enter Prelim Quiz 2: ";
    cin >> PQ2;
    cout <<"Enter Prelim Lec Exam: ";
    cin >> PLecEXAM;
}
double prelimLecComp()
{
    PLecGrd = ((PQ1 * 0.25) + (PQ2 * 0.25) + (PLecEXAM * 0.50));
    cout <<"Your Prelim Lecture Grade is: "<<PLecGrd << endl;

}
//PreLAB
double prelimLab()
{
    cout <<"\n---PRELIM LAB GRADES---";
    cout <<"\nEnter Prelim LAB Quiz 1: ";
    cin >> PMP1;
    cout <<"Enter Prelim LAB Quiz 2: ";
    cin >> PMP2;
    cout <<"Enter Prelim LAB Exam: ";
    cin >> PLabEXAM;
}
double prelimLabComp()
{
    PLabGrd = ((PMP1 * 0.25) + (PMP2 * 0.25) + (PLabEXAM * 0.50));
    cout <<"Your Prelim LAB Grade is: "<<PLabGrd << endl;
    preLecLab = (PLecGrd * 0.60) + (PLabGrd * 0.40);
    cout << "Your Prelim LEC-LAB Grade is: " << preLecLab << endl;
}
//MidLEC
double midtermLec()
{
    cout <<"\n---Midterm LEC GRADES---";
    cout <<"\nEnter Midterm Lec Quiz 1: ";
    cin >> MQ1;
    cout <<"Enter Midterm Lec Quiz 2: ";
    cin >> MQ2;
    cout <<"Enter Midterm Lec Exam: ";
    cin >> MLecEXAM;
}
double midtermLecComp()
{
    MLecGrd = ((MQ1 * 0.25) + (MQ2 * 0.25) + (MLecEXAM * 0.50));
    cout <<"Your Midterm LEC Grade is: "<< MLecGrd << endl;
}
//MidLAB
double midtermLab()
{
    cout <<"\n---MIDTERM LAB GRADES---";
    cout <<"\nEnter Midterm LAB Quiz 1: ";
    cin >> MMP1;
    cout <<"Enter Midterm LAB Quiz 2: ";
    cin >> MMP2;
    cout <<"Enter Midterm LAB Exam: ";
    cin >> MLabEXAM;
}
double midtermLabComp()
{
    MLabGrd = ((MMP1 * 0.25) + (MMP2 * 0.25) + (MLabEXAM * 0.50));
    cout <<"Your Midterm LAB Grade is: "<<MLabGrd << endl;
    midLecLab = (MLecGrd * 0.60) + (MLabGrd * 0.40);
    cout << "Your Prelim LEC-LAB Grade is: " << midLecLab << endl;
    }
//FinLEC
double finalLec()
{
    cout <<"\n---Finals LEC GRADES---";
    cout <<"\nEnter Finals LEC Quiz 1: ";
    cin >> FQ1;
    cout <<"Enter Final LEC Quiz 2: ";
    cin >> FQ2;
    cout <<"Enter Final LEC Exam: ";
    cin >> FLecEXAM;
}
double finallLecComp()
{
    FLecGrd = ((FQ1 * 0.25) + (FQ2 * 0.25) + (FLecEXAM * 0.50));
    cout <<"Your Final LEC Grade is: "<< FLecGrd << endl;
}
//FinLAB
double finalLab()
{
    cout <<"\n---Finals LAB GRADES---";
    cout <<"\nEnter Finals LAB Quiz 1: ";
    cin >> FMP1;
    cout <<"Enter Final LAB Quiz 2: ";
    cin >> FMP2;
    cout <<"Enter Final LAB Exam: ";
    cin >> FLabEXAM;
}
double finalLabComp()
{
    FLabGrd = ((FMP1 * 0.25) + (FMP2 * 0.25) + (FLabEXAM * 0.50));
    cout <<"Your Final LAB Grade is: "<< FLabGrd << endl;
    finLecLab = (FLecGrd * 0.60) + (FLabGrd * 0.40);
    cout << "Your Prelim LEC-LAB Grade is: " << finLecLab << endl;
    }
//LecLab
double leclab()
{
    totalLecLabGrd = (preLecLab + midLecLab + finLecLab) * 0.03;
    cout << "\nWeighted Grade is: " <<totalLecLabGrd;
}

int main()
{
    prelimLec();
    prelimLecComp();
    prelimLab();
    prelimLabComp();
    midtermLec();
    midtermLecComp();
    midtermLab();
    midtermLabComp();
    finalLec();
    finallLecComp();
    finalLab();
    finalLabComp();
    leclab();
    return 0;
}

