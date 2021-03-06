//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSFacebookErrorInfo.h"
#import "SSFacebookUser.h"
#import "SSFacebookTypeDef.h"

/**
 *	@brief	添加好友对话框对象
 */
@protocol ISSFacebookAddFriendDialog <NSObject>

/**
 *	@brief	会话中的视图
 *
 *	@return	视图
 */
- (UIView *)view;

/**
 *	@brief	打开对话
 *
 *  @param  result  返回回调 
 */
- (void)show:(void(^)(SSFacebookFriendsDialogResult result, SSFacebookUser *user, SSFacebookErrorInfo *error))result;

/**
 *	@brief	取消会话
 */
- (void)cancel;

@end
