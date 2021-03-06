/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface UIStoryboardSegue : NSObject {
    id _destinationViewController;
    NSString *_identifier;
    id _performHandler;
    id _sourceViewController;
}

@property(readonly) id destinationViewController;
@property(readonly) NSString * identifier;
@property(copy) id performHandler;
@property(readonly) id sourceViewController;

+ (id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(id)arg4;

- (void)dealloc;
- (id)destinationViewController;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)perform;
- (id)performHandler;
- (void)setPerformHandler:(id)arg1;
- (id)sourceViewController;

@end
