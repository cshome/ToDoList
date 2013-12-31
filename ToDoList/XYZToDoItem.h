//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by 唐文明 on 13-12-31.
//  Copyright (c) 2013年 唐文明. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
