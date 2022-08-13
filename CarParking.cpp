#include<bits/stdc++.h>
using namespace std;
#define ui UserInput
int main()
{
    cout<<"\t\t C A R  P A R K I N G"<<endl;
    int car=0, bike=0, rickshaw=0;
    while(true) // Project run for infinite time
    {   int Enter;

        cout<<"Press 1 to Enter a Car\n";
        cout<<"Press 2 to Enter a Bike\n";
        cout<<"Press 3 to Enter a Rickshaw\n";
        cout<<"Press 4 to show the Record\n";
        cout<<"Press 5 to Delete the Record\n";
        cout<<"Press 6 to Exit\n\n";
        //int UserInput;
        cin>>Enter;
        if(Enter == 1){//add car
            car++;
            system("CLS");
            cout<<"Car Added\n\n";
        }
        else if(Enter==2){//add bike
            bike++;
            system("CLS");
            cout<<"Bike Added\n\n";
        }
        else if(Enter==3){//add rickshaw
            rickshaw++;
            system("CLS");
            cout<<"Rickshaw Added\n\n";
        }
        else if(Enter==4){//show the record
                system("CLS");
            cout<<"Cars: "<<car<<endl;
            cout<<"Bike: "<<bike<<endl;
            cout<<"Rickshaw: "<<rickshaw<<"\n\n";
        }
        else if(Enter==5){//Delete All record
            car=0;
            bike=0;
            rickshaw=0;
            system("CLS");
            cout<<"All Record Cleared\n\n";
        }
        else if(Enter==6){//Exit The Program
            cout<<"Program Exit, Thank You for Using the Program\n";
            break;
        }
        else {
            cout<<"Enter a valid number\n\n";
        }

    }
    return 0;
}
