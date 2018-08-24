//
//  ViewController.m
//  XHProgressBarDemo
//
//  Created by YZJMACMini on 2018/8/23.
//  Copyright © 2018年 Lxh.yzj. All rights reserved.
//

#import "ViewController.h"

#import <XHProgressView/XHProgressView.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];


    XH_ProgressBarView *barView = [[XH_ProgressBarView alloc]init];
    barView.XH_LineWidth = 6;
    barView.XH_Radius = 100;
    barView.XH_ProgressCoefficient = 0.8;
    barView.XH_ProgressCenter = CGPointMake(200, 400);
    barView.XH_ProgressBackgroundRadius = 100;
    barView.XH_ProgressStartLocation = XHProgressBarStartBottom;
    barView.isClockwise = NO;
//    barView.isAllowAnimation = YES;
    barView.XH_ProgressGradientArr = @[[UIColor redColor],[UIColor blackColor]];
    barView.XH_ProgressAnimationDuration = 3;
    [barView drawXH_ProgressView];
    [self.view addSubview:barView];

}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
