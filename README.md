# XHProgressView
# 环形进度条
## 使用方法
### 1. 创建ProgressView
         XH_ProgressBarView *barView = [[XH_ProgressBarView alloc]init];
   

### 2. 设置参数
          barView.XH_LineWidth = 6; //进度条宽度
          barView.XH_Radius = 100;  //进度条半径
          barView.XH_ProgressCoefficient = 0.8; //进度条进度参数
          barView.XH_ProgressCenter = CGPointMake(200, 400); 进度条中心点
          barView.XH_ProgressBackgroundRadius = 100;  //进度条背景半径
          barView.XH_ProgressStartLocation = XHProgressBarStartBottom; //起始点位置
          barView.isClockwise = NO; //是否是顺时针选择
          barView.isAllowAnimation = YES; //是否允许动画
          barView.XH_ProgressGradientArr = @[[UIColor redColor],[UIColor blackColor]]; //进度条渐进颜色数组
          barView.XH_ProgressGradientProportionArr = @[@0,@0.5,@1]; //进度条颜色渐进比例数组
          barView.XH_ProgressAnimationDuration = 3; //动画时间


### 3. 调用绘制
        
          [barView drawXH_ProgressView];
