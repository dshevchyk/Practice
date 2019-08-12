//
//  Interval.h
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/12/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#ifndef Interval_h
#define Interval_h

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

#endif /* Interval_h */
