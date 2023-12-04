// Autogenerated from Pigeon (v11.0.1), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

/// The display of line endings.
typedef NS_ENUM(NSUInteger, FLTLineCap) {
  /// A cap with a squared-off end which is drawn to the exact endpoint of the line.
  FLTLineCapBUTT = 0,
  /// A cap with a rounded end which is drawn beyond the endpoint of the line at a radius of one-half of the line's width and centered on the endpoint of the line.
  FLTLineCapROUND = 1,
  /// A cap with a squared-off end which is drawn beyond the endpoint of the line at a distance of one-half of the line's width.
  FLTLineCapSQUARE = 2,
};

/// Wrapper for FLTLineCap to allow for nullability.
@interface FLTLineCapBox : NSObject
@property(nonatomic, assign) FLTLineCap value;
- (instancetype)initWithValue:(FLTLineCap)value;
@end

/// The display of lines when joining.
typedef NS_ENUM(NSUInteger, FLTLineJoin) {
  /// A join with a squared-off end which is drawn beyond the endpoint of the line at a distance of one-half of the line's width.
  FLTLineJoinBEVEL = 0,
  /// A join with a rounded end which is drawn beyond the endpoint of the line at a radius of one-half of the line's width and centered on the endpoint of the line.
  FLTLineJoinROUND = 1,
  /// A join with a sharp, angled corner which is drawn with the outer sides beyond the endpoint of the path until they meet.
  FLTLineJoinMITER = 2,
};

/// Wrapper for FLTLineJoin to allow for nullability.
@interface FLTLineJoinBox : NSObject
@property(nonatomic, assign) FLTLineJoin value;
- (instancetype)initWithValue:(FLTLineJoin)value;
@end

/// Controls the frame of reference for `line-translate`.
typedef NS_ENUM(NSUInteger, FLTLineTranslateAnchor) {
  /// The line is translated relative to the map.
  FLTLineTranslateAnchorMAP = 0,
  /// The line is translated relative to the viewport.
  FLTLineTranslateAnchorVIEWPORT = 1,
};

/// Wrapper for FLTLineTranslateAnchor to allow for nullability.
@interface FLTLineTranslateAnchorBox : NSObject
@property(nonatomic, assign) FLTLineTranslateAnchor value;
- (instancetype)initWithValue:(FLTLineTranslateAnchor)value;
@end

@class FLTPolylineAnnotation;
@class FLTPolylineAnnotationOptions;

@interface FLTPolylineAnnotation : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithId:(NSString *)id
    geometry:(nullable NSDictionary<NSString *, id> *)geometry
    lineJoin:(nullable FLTLineJoinBox *)lineJoin
    lineSortKey:(nullable NSNumber *)lineSortKey
    lineBlur:(nullable NSNumber *)lineBlur
    lineBorderColor:(nullable NSNumber *)lineBorderColor
    lineBorderWidth:(nullable NSNumber *)lineBorderWidth
    lineColor:(nullable NSNumber *)lineColor
    lineGapWidth:(nullable NSNumber *)lineGapWidth
    lineOffset:(nullable NSNumber *)lineOffset
    lineOpacity:(nullable NSNumber *)lineOpacity
    linePattern:(nullable NSString *)linePattern
    lineWidth:(nullable NSNumber *)lineWidth;
/// The id for annotation
@property(nonatomic, copy) NSString * id;
/// The geometry that determines the location/shape of this annotation
@property(nonatomic, strong, nullable) NSDictionary<NSString *, id> * geometry;
/// The display of lines when joining.
@property(nonatomic, strong, nullable) FLTLineJoinBox * lineJoin;
/// Sorts features in ascending order based on this value. Features with a higher sort key will appear above features with a lower sort key.
@property(nonatomic, strong, nullable) NSNumber * lineSortKey;
/// Blur applied to the line, in pixels.
@property(nonatomic, strong, nullable) NSNumber * lineBlur;
/// The color of the line border. If line-border-width is greater than zero and the alpha value of this color is 0 (default), the color for the border will be selected automatically based on the line color.
@property(nonatomic, strong, nullable) NSNumber * lineBorderColor;
/// The width of the line border. A value of zero means no border.
@property(nonatomic, strong, nullable) NSNumber * lineBorderWidth;
/// The color with which the line will be drawn.
@property(nonatomic, strong, nullable) NSNumber * lineColor;
/// Draws a line casing outside of a line's actual path. Value indicates the width of the inner gap.
@property(nonatomic, strong, nullable) NSNumber * lineGapWidth;
/// The line's offset. For linear features, a positive value offsets the line to the right, relative to the direction of the line, and a negative value to the left. For polygon features, a positive value results in an inset, and a negative value results in an outset.
@property(nonatomic, strong, nullable) NSNumber * lineOffset;
/// The opacity at which the line will be drawn.
@property(nonatomic, strong, nullable) NSNumber * lineOpacity;
/// Name of image in sprite to use for drawing image lines. For seamless patterns, image width must be a factor of two (2, 4, 8, ..., 512). Note that zoom-dependent expressions will be evaluated only at integer zoom levels.
@property(nonatomic, copy, nullable) NSString * linePattern;
/// Stroke thickness.
@property(nonatomic, strong, nullable) NSNumber * lineWidth;
@end

@interface FLTPolylineAnnotationOptions : NSObject
+ (instancetype)makeWithGeometry:(nullable NSDictionary<NSString *, id> *)geometry
    lineJoin:(nullable FLTLineJoinBox *)lineJoin
    lineSortKey:(nullable NSNumber *)lineSortKey
    lineBlur:(nullable NSNumber *)lineBlur
    lineBorderColor:(nullable NSNumber *)lineBorderColor
    lineBorderWidth:(nullable NSNumber *)lineBorderWidth
    lineColor:(nullable NSNumber *)lineColor
    lineGapWidth:(nullable NSNumber *)lineGapWidth
    lineOffset:(nullable NSNumber *)lineOffset
    lineOpacity:(nullable NSNumber *)lineOpacity
    linePattern:(nullable NSString *)linePattern
    lineWidth:(nullable NSNumber *)lineWidth;
/// The geometry that determines the location/shape of this annotation
@property(nonatomic, strong, nullable) NSDictionary<NSString *, id> * geometry;
/// The display of lines when joining.
@property(nonatomic, strong, nullable) FLTLineJoinBox * lineJoin;
/// Sorts features in ascending order based on this value. Features with a higher sort key will appear above features with a lower sort key.
@property(nonatomic, strong, nullable) NSNumber * lineSortKey;
/// Blur applied to the line, in pixels.
@property(nonatomic, strong, nullable) NSNumber * lineBlur;
/// The color of the line border. If line-border-width is greater than zero and the alpha value of this color is 0 (default), the color for the border will be selected automatically based on the line color.
@property(nonatomic, strong, nullable) NSNumber * lineBorderColor;
/// The width of the line border. A value of zero means no border.
@property(nonatomic, strong, nullable) NSNumber * lineBorderWidth;
/// The color with which the line will be drawn.
@property(nonatomic, strong, nullable) NSNumber * lineColor;
/// Draws a line casing outside of a line's actual path. Value indicates the width of the inner gap.
@property(nonatomic, strong, nullable) NSNumber * lineGapWidth;
/// The line's offset. For linear features, a positive value offsets the line to the right, relative to the direction of the line, and a negative value to the left. For polygon features, a positive value results in an inset, and a negative value results in an outset.
@property(nonatomic, strong, nullable) NSNumber * lineOffset;
/// The opacity at which the line will be drawn.
@property(nonatomic, strong, nullable) NSNumber * lineOpacity;
/// Name of image in sprite to use for drawing image lines. For seamless patterns, image width must be a factor of two (2, 4, 8, ..., 512). Note that zoom-dependent expressions will be evaluated only at integer zoom levels.
@property(nonatomic, copy, nullable) NSString * linePattern;
/// Stroke thickness.
@property(nonatomic, strong, nullable) NSNumber * lineWidth;
@end

/// The codec used by FLTOnPolylineAnnotationClickListener.
NSObject<FlutterMessageCodec> *FLTOnPolylineAnnotationClickListenerGetCodec(void);

@interface FLTOnPolylineAnnotationClickListener : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)onPolylineAnnotationClickAnnotation:(FLTPolylineAnnotation *)annotation completion:(void (^)(FlutterError *_Nullable))completion;
@end

/// The codec used by FLT_PolylineAnnotationMessager.
NSObject<FlutterMessageCodec> *FLT_PolylineAnnotationMessagerGetCodec(void);

@protocol FLT_PolylineAnnotationMessager
- (void)createManagerId:(NSString *)managerId annotationOption:(FLTPolylineAnnotationOptions *)annotationOption completion:(void (^)(FLTPolylineAnnotation *_Nullable, FlutterError *_Nullable))completion;
- (void)createMultiManagerId:(NSString *)managerId annotationOptions:(NSArray<FLTPolylineAnnotationOptions *> *)annotationOptions completion:(void (^)(NSArray<FLTPolylineAnnotation *> *_Nullable, FlutterError *_Nullable))completion;
- (void)updateManagerId:(NSString *)managerId annotation:(FLTPolylineAnnotation *)annotation completion:(void (^)(FlutterError *_Nullable))completion;
- (void)deleteManagerId:(NSString *)managerId annotation:(FLTPolylineAnnotation *)annotation completion:(void (^)(FlutterError *_Nullable))completion;
- (void)deleteAllManagerId:(NSString *)managerId completion:(void (^)(FlutterError *_Nullable))completion;
- (void)setLineCapManagerId:(NSString *)managerId lineCap:(FLTLineCap)lineCap completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getLineCapManagerId:(NSString *)managerId completion:(void (^)(FLTFLTLineCapBox *_Nullable, FlutterError *_Nullable))completion;
- (void)setLineMiterLimitManagerId:(NSString *)managerId lineMiterLimit:(NSNumber *)lineMiterLimit completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getLineMiterLimitManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setLineRoundLimitManagerId:(NSString *)managerId lineRoundLimit:(NSNumber *)lineRoundLimit completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getLineRoundLimitManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setLineDasharrayManagerId:(NSString *)managerId lineDasharray:(NSArray<NSNumber *> *)lineDasharray completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getLineDasharrayManagerId:(NSString *)managerId completion:(void (^)(NSArray<NSNumber *> *_Nullable, FlutterError *_Nullable))completion;
- (void)setLineDepthOcclusionFactorManagerId:(NSString *)managerId lineDepthOcclusionFactor:(NSNumber *)lineDepthOcclusionFactor completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getLineDepthOcclusionFactorManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setLineEmissiveStrengthManagerId:(NSString *)managerId lineEmissiveStrength:(NSNumber *)lineEmissiveStrength completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getLineEmissiveStrengthManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setLineTranslateManagerId:(NSString *)managerId lineTranslate:(NSArray<NSNumber *> *)lineTranslate completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getLineTranslateManagerId:(NSString *)managerId completion:(void (^)(NSArray<NSNumber *> *_Nullable, FlutterError *_Nullable))completion;
- (void)setLineTranslateAnchorManagerId:(NSString *)managerId lineTranslateAnchor:(FLTLineTranslateAnchor)lineTranslateAnchor completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getLineTranslateAnchorManagerId:(NSString *)managerId completion:(void (^)(FLTFLTLineTranslateAnchorBox *_Nullable, FlutterError *_Nullable))completion;
- (void)setLineTrimOffsetManagerId:(NSString *)managerId lineTrimOffset:(NSArray<NSNumber *> *)lineTrimOffset completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getLineTrimOffsetManagerId:(NSString *)managerId completion:(void (^)(NSArray<NSNumber *> *_Nullable, FlutterError *_Nullable))completion;
@end

extern void FLT_PolylineAnnotationMessagerSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FLT_PolylineAnnotationMessager> *_Nullable api);

NS_ASSUME_NONNULL_END
