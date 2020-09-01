//
//  EventCalendar.h
//  EventkitDemo
//
//  Created by iOS on 2020/9/1.
//  Copyright © 2020 SGT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EventKit/EventKit.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EventCalendar : NSObject

+ (instancetype)sharedEventCalendar;



/**查询日历事件*/
-(EKEvent *)queryEKEventForIdentifier;
/**添加日历事件*/
-(void)createEKEventTitle:(NSString *)title startData:(NSDate *)startData endDate:(NSDate *)endDate;
/**删除日历事件*/
-(void)deleteEKEventIdentifier:(NSString *)Identifier;
/**修改日历事件*/
-(void)updateEKEventTitle:(NSString *)title startData:(NSDate *)startData endDate:(NSDate *)endDate;



/**添加提醒事项*/
-(void)addReminderNotifyTitle:(NSString *)title startData:(NSDate *)startData endDate:(NSDate *)endDate;
/**删除提醒事项*/
-(void)removeEKEntityTypeReminderCalendarItemIdentifier:(NSString *)calendarItemIdentifier;
/**修改提醒事项*/
-(void)updateReminderCalendarItemIdentifier:(NSString *)calendarItemIdentifier;

@end

NS_ASSUME_NONNULL_END
