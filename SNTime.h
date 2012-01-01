//
//  CSNTime.h
//  
//
//  Created by Glyn Davies on 01/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef _CSNTime_h
#define _CSNTime_h

#include <time.h>
#include <string.h>

class SNTime
{
private:
    struct tm m_time;

public:
    virtual void SetTimeFromString(const std::string &format, const std::string &input);
    virtual void GetStandardDate(std::string &date);
};


#endif
