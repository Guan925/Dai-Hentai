//
//  UIAlertView+Hentai.h
//  e-Hentai
//
//  Created by 啟倫 陳 on 2014/10/1.
//  Copyright (c) 2014年 ChilunChen. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^HentaiClickBlock)(int clickIndex);
typedef void (^HentaiCancelBlock)(void);

@interface UIAlertView (Hentai) <UIAlertViewDelegate>

+ (UIAlertView *)hentai_alertViewWithTitle:(NSString *)title message:(NSString *)message;
+ (UIAlertView *)hentai_alertViewWithTitle:(NSString *)title message:(NSString *)message cancelButtonTitle:(NSString *)cancelButtonTitle;
+ (UIAlertView *)hentai_alertViewWithTitle:(NSString *)title message:(NSString *)message cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSArray *)otherButtons onClickIndex:(HentaiClickBlock)clicked onCancel:(HentaiCancelBlock)cancelled;

@property (nonatomic, copy) HentaiClickBlock hentaiClicked;
@property (nonatomic, copy) HentaiCancelBlock hentaiCancelled;

@end