/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSCHLegendGenericPropertyMap : TSSPropertyMap {
}

+ (id)imageFillProperties;
+ (id)properties;
+ (void)savePropertyMap:(id)arg1 toArchive:(struct LegendGenericPropertyMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FillArchive {} *x3; int x4; float x5; struct ShadowArchive {} *x6; struct StrokeArchive {} *x7; int x8; unsigned int x9[1]; }*)arg2 archiver:(id)arg3;

- (id)initWithArchive:(const struct LegendGenericPropertyMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FillArchive {} *x3; int x4; float x5; struct ShadowArchive {} *x6; struct StrokeArchive {} *x7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct LegendGenericPropertyMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FillArchive {} *x3; int x4; float x5; struct ShadowArchive {} *x6; struct StrokeArchive {} *x7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;

@end