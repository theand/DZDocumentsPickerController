
//
//  DZAlertCenter.h
//  DZDocumentsPickerController
//
//  Created Ignacio Romero Zurbuchen on 5/4/12.
//  Copyright (c) 2011 DZen Interaktiv.
//  Licence: MIT-Licence
//

#import <Foundation/Foundation.h>
#import <objc/message.h>

@interface DZAlertCenter : NSObject <UIAlertViewDelegate>
{
    NSArray *selectors;
    id actionTarget;
}

@property (nonatomic, strong) UIAlertView *alert;
@property (nonatomic, strong) NSString *alertMode;
@property (nonatomic, strong) NSString *firstAction;
@property (nonatomic, strong) NSString *secondAction;
@property (nonatomic, strong) UIProgressView *uploadProgressView;

+ (DZAlertCenter *)sharedCenter;
+ (void)setSharedCenter:(DZAlertCenter *)center;

- (void)alertWithTitle:(NSString *)title message:(NSString *)mssg cancelButtonTitle:(NSString *)cancelTitle withTarget:(id)target andSingleAction:(NSString *)selector;

- (void)loadingAlertWithTitle:(NSString *)title message:(NSString *)mssg cancelButtonTitle:(NSString *)cancelTitle withTarget:(id)target andSingleAction:(NSString *)selector;

- (void)loginActionAlertWithTitle:(NSString *)title cancelButtonTitle:(NSString *)cancelTitle actionButtonTitle:(NSString *)actionTitle withTarget:(id)target andActions:(NSArray *)someSelectors;

- (void)noActionAlertWithTitle:(NSString *)title withMessage:(NSString *)mssg withCancelButton:(NSString *)btnTitle;

- (void)noInternetConnectionAlert;

- (void)closeAlertView;

@end
