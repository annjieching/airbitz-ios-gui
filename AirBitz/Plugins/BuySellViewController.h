//
//  BuySellViewController.h
//  AirBitz
//

#import <UIKit/UIKit.h>

@protocol BuySellViewControllerDelegate;

@interface BuySellViewController : UIViewController

@property (assign) id<BuySellViewControllerDelegate> delegate;
- (BOOL)launchPluginByCountry:(NSString *)country provider:(NSString *)provider;

@end


@protocol BuySellViewControllerDelegate <NSObject>

@required
- (void)BuySellViewControllerDone:(BuySellViewController *)vc;
@end
