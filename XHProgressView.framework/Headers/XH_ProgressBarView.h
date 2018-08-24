//
//  XHProgressBarView.h
//  XHProgressBarDemo
//
//  Created by YZJMACMini on 2018/8/23.
//  Copyright © 2018年 Lxh.yzj. All rights reserved.
//

#import <UIKit/UIKit.h>



typedef NS_ENUM(NSInteger,XHProgressBarStartLocation) {
    
    XHProgressBarStartRight = 0,
    XHProgressBarStartBottom,
    XHProgressBarStartLeft,
    XHProgressBarStartTop,
};


@interface XH_ProgressBarView : UIView


-(void)drawXH_ProgressView;


/**
 进度条中心点
 */
@property (nonatomic,assign)CGPoint XH_ProgressCenter;

/**
 进度条宽度
 默认 3
 */
@property (assign ) CGFloat XH_LineWidth;


/**
 进度条半径
 默认 30
 */
@property (assign ) CGFloat XH_Radius;

/**
 进度系数 0-1
 默认 0
 */
@property (nonatomic,assign ) CGFloat XH_ProgressCoefficient;


/**
 进度条颜色
 默认为[UIColor greenColor]
 与XH_ProgressGradientArr互斥,请选择其一设置,两者都设置取XH_ProgressColor
 */
@property (nonatomic,strong)UIColor * XH_ProgressColor;

/**
 进度条渐变颜色数组
 默认为空
 与XH_ProgressColor互斥,请选择其一设置,两者都设置取XH_ProgressColor
 */
@property (nonatomic,strong)NSArray<UIColor *> * XH_ProgressGradientArr;

/**
 进度条渐进颜色比例
 默认平均分配
 */
@property (nonatomic,strong)NSArray * XH_ProgressGradientProportionArr;

/**
 进度条背景颜色
 默认[UIColor clearColor]
 */
@property (nonatomic,strong ) UIColor *XH_ProgressBackgroundColor;

/**
 进度条背景宽度
 默认3
 */
@property (nonatomic,assign ) CGFloat XH_ProgressBackgroundLineWidth;

/**
 进度条背景半径
 默认 30
 */
@property (assign ) CGFloat XH_ProgressBackgroundRadius;

/**
 是否允许动画
 默认 不允许动画
 */
@property (assign ) BOOL isAllowAnimation;

/**
 动画时间
 默认 1秒
 */
@property (assign ) CGFloat XH_ProgressAnimationDuration;


/**
 是否顺时针
 默认 逆时针
 */
@property (assign ) BOOL isClockwise;

/**
 起始点位置
 顶部,
 底部,
 左边,
 右边.
 默认右边
 */
@property (assign ) XHProgressBarStartLocation  XH_ProgressStartLocation;











+(instancetype) new __attribute__((unavailable("call sharedInstance instead")));
-(instancetype) copy __attribute__((unavailable("call sharedInstance instead")));
-(instancetype) mutableCopy __attribute__((unavailable("call sharedInstance instead")));
+(instancetype) allocWithZone __attribute__((unavailable("call sharedInstance instead")));

@end
