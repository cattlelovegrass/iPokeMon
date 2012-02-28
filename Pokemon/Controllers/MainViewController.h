//
//  MainViewController.h
//  Pokemon
//
//  Created by Kaijie Yu on 1/31/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MapViewController;
@class UtilityViewController;
@class PoketchTabViewController;
@class CustomNavigationController;
@class GameMainViewController;

@interface MainViewController : UIViewController
{
  UIButton * centerMainButton_;
  
  MapViewController * mapViewController_;
  UtilityViewController * utilityViewController_;
  PoketchTabViewController * poketchViewController_;
  CustomNavigationController * utilityNavigationController_;
  GameMainViewController * gameMainViewController_;
}

@property (nonatomic, retain) UIButton * centerMainButton;

@property (nonatomic, retain) MapViewController * mapViewController;
@property (nonatomic, retain) UtilityViewController * utilityViewController;
@property (nonatomic, retain) PoketchTabViewController * poketchViewController;
@property (nonatomic, retain) CustomNavigationController * utilityNavigationController;
@property (nonatomic, retain) GameMainViewController * gameMainViewController;

// Button Action
- (void)openBallMenuView:(id)sender;

@end
