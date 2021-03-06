/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKAuthenticatorEvaluationResponse : NSObject {
    bool  _biometricMatch;
    NSData * _credential;
    long long  _result;
}

@property (nonatomic, readonly) bool biometricMatch;
@property (nonatomic, readonly) NSData *credential;
@property (nonatomic, readonly) long long result;

+ (id)responseWithResult:(long long)arg1;
+ (id)responseWithResult:(long long)arg1 biometricMatch:(bool)arg2 credential:(id)arg3;

- (void).cxx_destruct;
- (bool)biometricMatch;
- (id)credential;
- (long long)result;

@end
