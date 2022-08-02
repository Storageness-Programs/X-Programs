[Variables]

[mTime]
Measure=Time

[mTime3]
Measure=Time
Format=%d:%m:%Y

[mSec]
Measure=Time
Format="%S"

[mHM]
Measure=Time
Format=%H:%M

[mNewDate]
Measure=Time
Format=%d

[mNewDay]
Measure=Time
Format=%A
Substitute=#DayName#

[mNewMonth]
Measure=Time
Format="%B"
Substitute=#MonthName#

[mNewYear]
Measure=Time
Format="%Y"

;---

[mYear]
Measure=Time
Format="%Y"

[mDate]
Measure=Time
Format=%d

[mHour]
Measure=Time
Format="%H"

[mMin]
Measure=Time
Format="%M"

[mSec]
Measure=Time
Format="%S"
MaxValue=59

[mMonth]
Measure=Time
Format="%B"
Substitute=#MonthName#

[mDay]
Measure=Time
Format=%A
Substitute=#DayName#

;---

[mTimes]
Measure=Time
Format=%H:%M:%S

[mSecs]
Measure=Time
Format=%S
MaxValue=59

[mDates]
Measure=Time
Format=%A  %d  %B  %Y
Substitute=#DayMonthName#


