//
//  ReactNativeBridge.h
//  ReactNativeIntegrator
//
//  Created by Agastya Darma on 17/01/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ReactNativeBridge : NSObject
-(void)startReactNative:(void(^)(void))onBundleLoaded;
@end

NS_ASSUME_NONNULL_END
