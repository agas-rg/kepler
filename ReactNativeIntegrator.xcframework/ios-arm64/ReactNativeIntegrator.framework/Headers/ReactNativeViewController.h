//
//  ReactNativeViewController.h
//  ReactNativeIntegrator
//
//  Created by Agastya Darma on 17/01/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ReactNativeViewController : NSObject
@property (nonatomic, copy) NSString *moduleName;
@property (nonatomic, copy, nullable) NSDictionary *initialProperties;

-(UIViewController *) viewController:(NSString *)moduleName;
-(UIViewController *) viewController:(NSString *)moduleName andInitialProperties:(NSDictionary*)initialProperties;

@end

NS_ASSUME_NONNULL_END
