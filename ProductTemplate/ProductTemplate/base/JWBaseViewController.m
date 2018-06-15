//
//  JWBaseViewController.m
//  ProductTemplate
//
//  Created by Nongmuren075 on 2018/6/15.
//  Copyright © 2018年 JeffWang. All rights reserved.
//

#import "JWBaseViewController.h"
#import <RTRootNavigationController/RTRootNavigationController.h>
//#import <JKCategories/JKUIKit.h>




@interface JWBaseViewController ()


@end


@implementation JWBaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}


-(void)setNavigationTitle:(NSString *)navigationTitle
{
    self.navigationItem.title=navigationTitle;
}

-(void)createBackButton
{
   self.navigationItem.backBarButtonItem=[self rt_customBackItemWithTarget:self action:@selector(onLeftGoBackTouchClick)];
}

-(void)createLeftButton
{
    //self.navigationItem.leftBarButtonItem=[self getLeftSelfNavtionControllerItem:(RTRootNavigationController*)self.navigationController];
}


-(void)onLeftGoBackTouchClick
{
    
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
