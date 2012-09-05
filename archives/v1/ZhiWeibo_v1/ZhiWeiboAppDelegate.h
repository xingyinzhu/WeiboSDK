//
//  ZhiWeiboAppDelegate.h
//  ZhiWeibo
//
//  Created by junmin liu on 10-11-20.
//  Copyright 2010 Openlab. All rights reserved.
//

#import <Foundation/Foundation.h>


@class Status;
@class Comment;
@class User;
@class Draft;
@class WeiboAccount;

@interface ZhiWeiboAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    BOOL connectionStatus;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

+(ZhiWeiboAppDelegate*)getAppDelegate;

+ (void) increaseNetworkActivityIndicator;
+ (void) decreaseNetworkActivityIndicator;

- (void)alert:(NSString*)title message:(NSString*)message;

- (void)signIn:(WeiboAccount *)user;
- (void)signOut;
- (void)closeAuthenticateView;
- (void)openAuthenticateView;

- (void)refresh;

- (void)composeNewTweet;

- (void)replyTweet:(Status *)status comment:(Comment *)comment;

- (void)retweet:(Status*)status;

- (void)loadDraft:(Draft *)draft;

- (void)newDM;

- (void)advise;

@end
