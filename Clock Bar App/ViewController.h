#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController

@property (weak) IBOutlet NSButton *autoLoginState;
@property (weak) IBOutlet NSButton *showInMenuBarState;
@property (weak) IBOutlet NSComboBox *selectTimeFormat;



- (IBAction)showMenuBarChanged:(id)sender;

- (IBAction)whiteButtonClicked:(id)sender;
- (IBAction)redButtonClicked:(id)sender;
- (IBAction)yellowButtonClicked:(id)sender;
- (IBAction)blueButtonClicked:(id)sender;
- (IBAction)greenButtonClicked:(id)sender;
- (IBAction)pinkButtonClicked:(id)sender;


@end

