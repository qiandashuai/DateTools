// Copyright (C) 2014 by Matthew York
//
// Permission is hereby granted, free of charge, to any
// person obtaining a copy of this software and
// associated documentation files (the "Software"), to
// deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge,
// publish, distribute, sublicense, and/or sell copies of the
// Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall
// be included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
// BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
// ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#ifndef DateToolsLocalizedStrings
#define DateToolsLocalizedStrings(key) \
NSLocalizedStringFromTableInBundle(key, @"DateTools", [NSBundle bundleWithPath:[[[NSBundle bundleForClass:[DTError class]] resourcePath] stringByAppendingPathComponent:@"DateTools.bundle"]], nil)
#endif

#import <Foundation/Foundation.h>
#import "DTConstants.h"

@interface NSDate (DateTools)

#pragma mark - Time Ago
+ (NSString*)mt_timeAgoSinceDate:(NSDate*)date;
+ (NSString*)mt_shortTimeAgoSinceDate:(NSDate*)date;
+ (NSString *)mt_weekTimeAgoSinceDate:(NSDate *)date;

- (NSString*)mt_timeAgoSinceNow;
- (NSString *)mt_shortTimeAgoSinceNow;
- (NSString *)mt_weekTimeAgoSinceNow;

- (NSString *)mt_timeAgoSinceDate:(NSDate *)date;
- (NSString *)mt_timeAgoSinceDate:(NSDate *)date numericDates:(BOOL)useNumericDates;
- (NSString *)mt_timeAgoSinceDate:(NSDate *)date numericDates:(BOOL)useNumericDates numericTimes:(BOOL)useNumericTimes;


- (NSString *)mt_shortTimeAgoSinceDate:(NSDate *)date;
- (NSString *)mt_weekTimeAgoSinceDate:(NSDate *)date;


#pragma mark - Date Components Without Calendar
- (NSInteger)mt_era;
- (NSInteger)mt_year;
- (NSInteger)mt_month;
- (NSInteger)mt_day;
- (NSInteger)mt_hour;
- (NSInteger)mt_minute;
- (NSInteger)mt_second;
- (NSInteger)mt_weekday;
- (NSInteger)mt_weekdayOrdinal;
- (NSInteger)mt_quarter;
- (NSInteger)mt_weekOfMonth;
- (NSInteger)mt_weekOfYear;
- (NSInteger)mt_yearForWeekOfYear;
- (NSInteger)mt_daysInMonth;
- (NSInteger)mt_dayOfYear;
-(NSInteger)mt_daysInYear;
-(BOOL)mt_isInLeapYear;
- (BOOL)mt_isToday;
- (BOOL)mt_isTomorrow;
-(BOOL)mt_isYesterday;
- (BOOL)mt_isWeekend;
-(BOOL)mt_isSameDay:(NSDate *)date;
+ (BOOL)mt_isSameDay:(NSDate *)date asDate:(NSDate *)compareDate;

#pragma mark - Date Components With Calendar


- (NSInteger)mt_eraWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_yearWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_monthWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_dayWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_hourWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_minuteWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_secondWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_weekdayWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_weekdayOrdinalWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_quarterWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_weekOfMonthWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_weekOfYearWithCalendar:(NSCalendar *)calendar;
- (NSInteger)mt_yearForWeekOfYearWithCalendar:(NSCalendar *)calendar;


#pragma mark - Date Creating
+ (NSDate *)mt_dateWithYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;
+ (NSDate *)mt_dateWithYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day hour:(NSInteger)hour minute:(NSInteger)minute second:(NSInteger)second;
+ (NSDate *)mt_dateWithString:(NSString *)dateString formatString:(NSString *)formatString;
+ (NSDate *)mt_dateWithString:(NSString *)dateString formatString:(NSString *)formatString timeZone:(NSTimeZone *)timeZone;


#pragma mark - Date Editing
#pragma mark Date By Adding
- (NSDate *)mt_dateByAddingYears:(NSInteger)years;
- (NSDate *)mt_dateByAddingMonths:(NSInteger)months;
- (NSDate *)mt_dateByAddingWeeks:(NSInteger)weeks;
- (NSDate *)mt_dateByAddingDays:(NSInteger)days;
- (NSDate *)mt_dateByAddingHours:(NSInteger)hours;
- (NSDate *)mt_dateByAddingMinutes:(NSInteger)minutes;
- (NSDate *)mt_dateByAddingSeconds:(NSInteger)seconds;
#pragma mark Date By Subtracting
- (NSDate *)mt_dateBySubtractingYears:(NSInteger)years;
- (NSDate *)mt_dateBySubtractingMonths:(NSInteger)months;
- (NSDate *)mt_dateBySubtractingWeeks:(NSInteger)weeks;
- (NSDate *)mt_dateBySubtractingDays:(NSInteger)days;
- (NSDate *)mt_dateBySubtractingHours:(NSInteger)hours;
- (NSDate *)mt_dateBySubtractingMinutes:(NSInteger)minutes;
- (NSDate *)mt_dateBySubtractingSeconds:(NSInteger)seconds;

#pragma mark - Date Comparison
#pragma mark Time From
-(NSInteger)mt_yearsFrom:(NSDate *)date;
-(NSInteger)mt_monthsFrom:(NSDate *)date;
-(NSInteger)mt_weeksFrom:(NSDate *)date;
-(NSInteger)mt_daysFrom:(NSDate *)date;
-(double)mt_hoursFrom:(NSDate *)date;
-(double)mt_minutesFrom:(NSDate *)date;
-(double)mt_secondsFrom:(NSDate *)date;
#pragma mark Time From With Calendar
-(NSInteger)mt_yearsFrom:(NSDate *)date calendar:(NSCalendar *)calendar;
-(NSInteger)mt_monthsFrom:(NSDate *)date calendar:(NSCalendar *)calendar;
-(NSInteger)mt_weeksFrom:(NSDate *)date calendar:(NSCalendar *)calendar;
-(NSInteger)mt_daysFrom:(NSDate *)date calendar:(NSCalendar *)calendar;

#pragma mark Time Until
-(NSInteger)mt_yearsUntil;
-(NSInteger)mt_monthsUntil;
-(NSInteger)mt_weeksUntil;
-(NSInteger)mt_daysUntil;
-(double)mt_hoursUntil;
-(double)mt_minutesUntil;
-(double)mt_secondsUntil;
#pragma mark Time Ago
-(NSInteger)mt_yearsAgo;
-(NSInteger)mt_monthsAgo;
-(NSInteger)mt_weeksAgo;
-(NSInteger)mt_daysAgo;
-(double)mt_hoursAgo;
-(double)mt_minutesAgo;
-(double)mt_secondsAgo;
#pragma mark Earlier Than
-(NSInteger)mt_yearsEarlierThan:(NSDate *)date;
-(NSInteger)mt_monthsEarlierThan:(NSDate *)date;
-(NSInteger)mt_weeksEarlierThan:(NSDate *)date;
-(NSInteger)mt_daysEarlierThan:(NSDate *)date;
-(double)mt_hoursEarlierThan:(NSDate *)date;
-(double)mt_minutesEarlierThan:(NSDate *)date;
-(double)mt_secondsEarlierThan:(NSDate *)date;
#pragma mark Later Than
-(NSInteger)mt_yearsLaterThan:(NSDate *)date;
-(NSInteger)mt_monthsLaterThan:(NSDate *)date;
-(NSInteger)mt_weeksLaterThan:(NSDate *)date;
-(NSInteger)mt_daysLaterThan:(NSDate *)date;
-(double)mt_hoursLaterThan:(NSDate *)date;
-(double)mt_minutesLaterThan:(NSDate *)date;
-(double)mt_secondsLaterThan:(NSDate *)date;
#pragma mark Comparators
-(BOOL)mt_isEarlierThan:(NSDate *)date;
-(BOOL)mt_isLaterThan:(NSDate *)date;
-(BOOL)mt_isEarlierThanOrEqualTo:(NSDate *)date;
-(BOOL)mt_isLaterThanOrEqualTo:(NSDate *)date;

#pragma mark - Formatted Dates
#pragma mark Formatted With Style
-(NSString *)mt_formattedDateWithStyle:(NSDateFormatterStyle)style;
-(NSString *)mt_formattedDateWithStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;
-(NSString *)mt_formattedDateWithStyle:(NSDateFormatterStyle)style locale:(NSLocale *)locale;
-(NSString *)mt_formattedDateWithStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone locale:(NSLocale *)locale;
#pragma mark Formatted With Format
-(NSString *)mt_formattedDateWithFormat:(NSString *)format;
-(NSString *)mt_formattedDateWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone;
-(NSString *)mt_formattedDateWithFormat:(NSString *)format locale:(NSLocale *)locale;
-(NSString *)mt_formattedDateWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone locale:(NSLocale *)locale;

#pragma mark - Helpers
+(NSString *)mt_defaultCalendarIdentifier;
+ (void)mt_setDefaultCalendarIdentifier:(NSString *)identifier;
@end
