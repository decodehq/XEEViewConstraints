//
//  ViewController.m
//  XEEViewConstraints
//
//  Created by Andrija Cajic on 14/11/13.
//  Copyright (c) 2013 Andrija Cajic. All rights reserved.
//

#import "ViewController.h"
#import "UIView+XEEConstraints.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    UIView* redView = [[UIView alloc] init];
    redView.backgroundColor = [UIColor redColor];
    [self.view addSubview:redView];

    UIView* yellowView = [[UIView alloc] init];
    yellowView.backgroundColor = [UIColor yellowColor];
    [self.view addSubview:yellowView];
    
    UIView* blueView = [[UIView alloc] init];
    blueView.backgroundColor = [UIColor blueColor];
    [self.view addSubview:blueView];
    
    [self.view addConstraints:[redView setViewToFillSuperviewWidth]]; // setting width and x position
    [self.view addConstraint:[redView setViewHeight:45.f]]; // setting height
    [self.view addConstraint:[redView setViewAlignToSuperviewsVerticalCenter]]; // setting y position
    
    [self.view addConstraint:[yellowView setViewCenterXToCenterXOf:redView withMargin:50.f]]; // setting x position
    [self.view addConstraint:[yellowView setViewWidthToPercentageOfSuperviewWidth:0.2f]]; // setting width
    [self.view addConstraint:[yellowView setViewHeightToHeightOf:redView]]; // setting heigth
    [self.view addConstraint:[yellowView setViewAlignToSuperviewsBottomWithMargin:20.f]]; // setting y position

    [self.view addConstraint:[blueView setViewAlignToSuperviewsRightWithMargin:10.f]];
    [self.view addConstraint:[blueView setViewAlignToSuperviewsTopWithMargin:40.f]];
    [self.view addConstraints:[blueView setViewWidth:60.f height:40.f]];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
