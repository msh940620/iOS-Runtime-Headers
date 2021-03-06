/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPPTLoadingLatencyMeter : NSObject {
    struct { 
        double minValue; 
        double maxValue; 
        double totalValue; 
        unsigned long long count; 
    }  _highQualityResults;
    struct { 
        double minValue; 
        double maxValue; 
        double totalValue; 
        unsigned long long count; 
    }  _lowQualityResults;
    struct { 
        double minValue; 
        double maxValue; 
        double totalValue; 
        unsigned long long count; 
    }  _mediumQualityResults;
}

@property (nonatomic, readonly) NSDictionary *measurementsDictionaryRepresentation;

+ (id)sharedInstance;
+ (void)startMeasurements;
+ (void)stopMeasurements;

- (id)_measurementsDictionaryForImageQuality:(long long)arg1;
- (id)init;
- (id)measurementsDictionaryRepresentation;
- (struct { double x1; double x2; double x3; unsigned long long x4; })measurementsForImageQuality:(long long)arg1;
- (void)reportLatency:(double)arg1 forImageQuality:(long long)arg2;

@end
