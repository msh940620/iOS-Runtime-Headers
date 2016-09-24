/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUContactAutoFillValue : NSObject {
    NSString * _displayValue;
    NSString * _label;
    NSArray * _matches;
    BOOL  _selected;
}

@property (nonatomic, readonly, copy) NSString *displayValue;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSArray *matches;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (id)displayValue;
- (id)initWithMatches:(id)arg1 displayValue:(id)arg2 label:(id)arg3;
- (id)label;
- (id)matches;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;

@end