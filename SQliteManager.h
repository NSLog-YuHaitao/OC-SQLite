//
//  SQliteManager.h
//  LOLBox
//
//  Created by 于海涛 on 16/5/19.
//  Copyright © 2016年 千锋. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SQliteManager : NSObject

//单例形式的创建方法
+ (instancetype)defaultSqliteManager;

//提供外部方法
//增加
- (BOOL)menuWithID:(NSString *)menuID;

//判断是否已经收藏
- (BOOL)isExsitMenuWithID:(NSString *)menuID;

//查询
- (NSArray *)selectMenuWithID;

//删除
- (void)deleteMenuWithID:(NSString *)menuID;

@end
