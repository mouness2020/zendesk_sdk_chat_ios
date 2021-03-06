/*
 *
 *  ViewController.h
 *  ZDCChat
 *
 *  Created by Zendesk on 27/10/2014.
 *
 *  Copyright (c) 2016 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
 *  Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */


#import <UIKit/UIKit.h>
#import <ZDCChat/ZDCChat.h>


@interface ViewController : ZDUViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, assign) BOOL modal;
@property (nonatomic, assign) BOOL nested;


- (UIButton*) buildButtonWithFrame:(CGRect)frame andTitle:(NSString*)title;


@end

