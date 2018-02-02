//
//  Controller.cpp
//  SampleProject
//
//  Created by Weber, Dakota on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>

using namespace std;

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/dweb7573/download/Sprin 2018 2420/DataStructures/DataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for(int index = 1; index < myData.size(); index++)
        if (myData [minIndex] > myData [index])
        {
            minIndex = index;
        }
        if (myData [maxIndx] < myData[index])
        {
            maxIndex = index;
        }
    
}


