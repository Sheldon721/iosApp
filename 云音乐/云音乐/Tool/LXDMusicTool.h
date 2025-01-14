//
//  LXDMusicTool.h
//  云音乐
//
//  Created by 李晓东 on 2017/9/25.
//  Copyright © 2017年 李晓东. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RankingListModel.h"
@interface LXDMusicTool : NSObject

@property(nonatomic,assign)NSInteger index;//当前播放音乐的索引
@property(nonatomic,strong)NSMutableArray *musicModelAry;//所有的音乐模型数组
//返回上一首音乐
- (RankingListModel *)previousMusic;
//返回下一首音乐
- (RankingListModel *)nextMusic;
//解析歌词
- (NSMutableArray *)lrcToolWithLrcName:(NSString *)lrcName;
@end
