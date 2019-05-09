//
//  StarView.h
//  star
//
//  Created by lk on 2019/5/9.
//  Copyright © 2019 lk. All rights reserved.
//

#import <UIKit/UIKit.h>

@class StarView;
typedef NS_ENUM(NSInteger, RateStyle)
{
    WholeStar = 0, //只能整星评论
    HalfStar = 1,  //允许半星评论
};
@protocol StarViewDelegate <NSObject>

-(void)starView:(StarView *)starView currentScore:(CGFloat)currentScore;

@end
@interface StarView : UIView
@property(nonatomic,assign)BOOL isIndicator;
@property (nonatomic,assign)RateStyle rateStyle;    //评分样式    默认是WholeStar
@property (nonatomic,assign)CGFloat currentScore;   // 当前评分：0-5  默认0
@property (nonatomic, weak) id<StarViewDelegate>delegate;
-(instancetype)initWithFrame:(CGRect)frame;
-(instancetype)initWithFrame:(CGRect)frame numberOfStars:(NSInteger)numberOfStars rateStyle:(RateStyle)rateStyle delegate:(id)delegate;
-(instancetype)initWithFrame:(CGRect)frame finish:(void(^)(CGFloat currentScore))finish;
-(instancetype)initWithFrame:(CGRect)frame numberOfStars:(NSInteger)numberOfStars rateStyle:(RateStyle)rateStyle finish:(void(^)(CGFloat currentScore))finish;
@end


