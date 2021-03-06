//
//  XGNotesDataModel.h
//  XG_Notes
//
//  Created by 贾  on 16/4/28.
//  Copyright © 2016年 XiaoGang. All rights reserved.
//  github: https://github.com/jiaxiaogang/XG_Notes
//

#import <Foundation/Foundation.h>
#import "XGUtils.h"


/**
 *  MARK:--------------------本地存储 未发布,审核中,未通过 三种状态的草稿--------------------
 */
@interface XGNotesDataModel : NSObject


-(id) initWithDraftDic:(NSDictionary*)dic;

@property (strong,nonatomic) NSString *title;
@property (strong,nonatomic) NSString *articleContent;
@property (strong,nonatomic) NSString *addTime;
@property (strong,nonatomic) NSString *articleid;
@property (strong,nonatomic) NSString *brief;
@property (strong,nonatomic) NSString *lastUpdateTime;

-(void)saveToDisk;

@end