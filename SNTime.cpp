//
//  CSNTime.cpp
//  
//
//  Created by Glyn Davies on 01/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <SNTime.h>



// Given a format string and a string, extract the date
void SNTime::SetTimeFromString(const std::string &format, const std::string &input)
{
    strptime(input.c_str(), format.c_str(), &m_time);
}


// Get date in YYYYMMDDHHMMSS format
void SNTime::GetStandardDate(std::string &date)
{
    char timebuf[14+1];
    strftime(timebuf, sizeof(timebuf), "%Y%m%d%H%M%S", &m_time);
    
    date = timebuf;
}