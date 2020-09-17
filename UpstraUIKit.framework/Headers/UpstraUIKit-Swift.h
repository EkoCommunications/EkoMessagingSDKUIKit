// Generated by Apple Swift version 5.2.4 (swiftlang-1103.0.32.9 clang-1103.0.32.53)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import Photos;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="UpstraUIKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class PHAsset;

SWIFT_CLASS("_TtC11UpstraUIKit10AssetStore")
@interface AssetStore : NSObject
@property (nonatomic, readonly, copy) NSArray<PHAsset *> * _Nonnull assets;
- (nonnull instancetype)initWithAssets:(NSArray<PHAsset *> * _Nonnull)assets OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) NSInteger count;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSCoder;

SWIFT_CLASS("_TtC11UpstraUIKit24BottomSheetSeparatorView")
@interface BottomSheetSeparatorView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11UpstraUIKit20BottomSheetTitleView")
@interface BottomSheetTitleView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end

@class NSBundle;

SWIFT_CLASS("_TtC11UpstraUIKit25BottomSheetViewController")
@interface BottomSheetViewController : UIViewController
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11UpstraUIKit7EkoView")
@interface EkoView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


/// Eko avatar view
/// An object that displays a single image or load image from url remote resource
SWIFT_CLASS("_TtC11UpstraUIKit13EkoAvatarView")
@interface EkoAvatarView : EkoView
- (void)awakeFromNib;
- (nonnull instancetype)init;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end


/// Eko button for custom display and states
SWIFT_CLASS("_TtC11UpstraUIKit9EkoButton")
@interface EkoButton : UIButton
@property (nonatomic, getter=isSelected) BOOL selected;
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11UpstraUIKit17EkoViewController")
@interface EkoViewController : UIViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
/// Text for navigation bar
@property (nonatomic, copy) NSString * _Nullable title;
- (void)viewDidLoad;
@end


/// Eko chat home
SWIFT_CLASS("_TtC11UpstraUIKit29EkoChatHomePageViewController")
@interface EkoChatHomePageViewController : EkoViewController
- (void)viewDidLoad;
@end





@class UITableView;
@class UITableViewCell;

SWIFT_CLASS("_TtC11UpstraUIKit34EkoColorPaletteTableViewController")
@interface EkoColorPaletteTableViewController : UITableViewController
- (void)viewDidLoad;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11UpstraUIKit34EkoCommunityHomePageViewController")
@interface EkoCommunityHomePageViewController : EkoViewController
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)viewDidLoad;
@end






SWIFT_CLASS("_TtC11UpstraUIKit27EkoCreatePostViewController")
@interface EkoCreatePostViewController : EkoViewController
- (void)viewDidLoad;
@end


@interface EkoCreatePostViewController (SWIFT_EXTENSION(UpstraUIKit)) <UINavigationControllerDelegate>
@end









@class EkoPhotoViewerController;
@class UIPanGestureRecognizer;
@class UIScrollView;

SWIFT_PROTOCOL("_TtP11UpstraUIKit32EkoPhotoViewerControllerDelegate_")
@protocol EkoPhotoViewerControllerDelegate <NSObject>
@optional
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController didScrollToPhotoAt:(NSInteger)index;
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController didZoomOnPhotoAtIndex:(NSInteger)didZoomOnPhotoAtIndex atScale:(CGFloat)scale;
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController didEndZoomingOnPhotoAtIndex:(NSInteger)didEndZoomingOnPhotoAtIndex atScale:(CGFloat)scale;
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController willZoomOnPhotoAtIndex:(NSInteger)willZoomOnPhotoAtIndex;
- (void)photoViewerControllerDidReceiveTapGesture:(EkoPhotoViewerController * _Nonnull)photoViewerController;
- (void)photoViewerControllerDidReceiveDoubleTapGesture:(EkoPhotoViewerController * _Nonnull)photoViewerController;
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController willBeginPanGestureRecognizer:(UIPanGestureRecognizer * _Nonnull)gestureRecognizer;
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController didEndPanGestureRecognizer:(UIPanGestureRecognizer * _Nonnull)gestureRecognizer;
- (void)photoViewerControllerDidEndPresentingAnimation:(EkoPhotoViewerController * _Nonnull)photoViewerController;
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController scrollViewDidScroll:(UIScrollView * _Nonnull)scrollViewDidScroll;
@end


@interface EkoCreatePostViewController (SWIFT_EXTENSION(UpstraUIKit)) <EkoPhotoViewerControllerDelegate>
- (void)photoViewerControllerDidEndPresentingAnimation:(EkoPhotoViewerController * _Nonnull)photoViewerController;
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController didScrollToPhotoAt:(NSInteger)index;
@end



@class UIImageView;
@class EkoPhotoCollectionViewCell;

SWIFT_PROTOCOL("_TtP11UpstraUIKit34EkoPhotoViewerControllerDataSource_")
@protocol EkoPhotoViewerControllerDataSource <NSObject>
/// Total number of photo in viewer.
- (NSInteger)numberOfItemsIn:(EkoPhotoViewerController * _Nonnull)photoViewerController SWIFT_WARN_UNUSED_RESULT;
/// Configure each photo in viewer
/// Implementation for photoViewerController:configurePhotoAt:withImageView is mandatory.
/// Not implementing this method will cause viewer not to work properly.
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController configurePhotoAt:(NSInteger)index withImageView:(UIImageView * _Nonnull)imageView;
@optional
/// This is usually used if you have custom EkoPhotoCollectionViewCell and configure each photo differently.
/// Remember this method cannot be a replacement of photoViewerController:configurePhotoAt:withImageView
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController configureCell:(EkoPhotoCollectionViewCell * _Nonnull)cell forPhotoAt:(NSInteger)index;
/// This method provide the specific referenced view for each photo item in viewer that will be used for smoother dismissal transition.
- (UIView * _Nullable)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController referencedViewForPhotoAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
@end


@interface EkoCreatePostViewController (SWIFT_EXTENSION(UpstraUIKit)) <EkoPhotoViewerControllerDataSource>
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController configureCell:(EkoPhotoCollectionViewCell * _Nonnull)cell forPhotoAt:(NSInteger)index;
- (UIView * _Nullable)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController referencedViewForPhotoAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfItemsIn:(EkoPhotoViewerController * _Nonnull)photoViewerController SWIFT_WARN_UNUSED_RESULT;
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController configurePhotoAt:(NSInteger)index withImageView:(UIImageView * _Nonnull)imageView;
@end


SWIFT_CLASS("_TtC11UpstraUIKit11EkoDocument")
@interface EkoDocument : UIDocument
- (id _Nullable)contentsForType:(NSString * _Nonnull)typeName error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (BOOL)loadFromContents:(id _Nonnull)contents ofType:(NSString * _Nullable)typeName error:(NSError * _Nullable * _Nullable)error;
- (nonnull instancetype)initWithFileURL:(NSURL * _Nonnull)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11UpstraUIKit17EkoDocumentPicker")
@interface EkoDocumentPicker : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface EkoDocumentPicker (SWIFT_EXTENSION(UpstraUIKit)) <UINavigationControllerDelegate>
@end

@class UIDocumentPickerViewController;

@interface EkoDocumentPicker (SWIFT_EXTENSION(UpstraUIKit)) <UIDocumentPickerDelegate>
- (void)documentPicker:(UIDocumentPickerViewController * _Nonnull)controller didPickDocumentsAtURLs:(NSArray<NSURL *> * _Nonnull)urls;
- (void)documentPickerWasCancelled:(UIDocumentPickerViewController * _Nonnull)controller;
@end

@class NSAttributedString;

/// EkoExpandableLabel
SWIFT_CLASS("_TtC11UpstraUIKit18EkoExpandableLabel")
@interface EkoExpandableLabel : UILabel
/// Set ‘true’ if the label can be expanded or ‘false’ if not.
/// The default value is ‘true’.
@property (nonatomic) IBInspectable BOOL shouldExpand;
/// Set ‘true’ if the label can be collapsed or ‘false’ if not.
/// The default value is ‘false’.
@property (nonatomic) IBInspectable BOOL shouldCollapse;
@property (nonatomic) NSInteger numberOfLines;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, strong) NSAttributedString * _Nullable attributedText;
@end

@class UITouch;
@class UIEvent;

@interface EkoExpandableLabel (SWIFT_EXTENSION(UpstraUIKit))
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end




SWIFT_CLASS("_TtC11UpstraUIKit28EkoGalleryCollectionViewCell")
@interface EkoGalleryCollectionViewCell : UICollectionViewCell
- (void)awakeFromNib;
- (void)prepareForReuse;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11UpstraUIKit27EkoGlobalFeedViewController")
@interface EkoGlobalFeedViewController : EkoViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
@end






@interface EkoGlobalFeedViewController (SWIFT_EXTENSION(UpstraUIKit)) <UITableViewDataSource>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end









@class Settings;
@class UIBarButtonItem;

SWIFT_CLASS("_TtC11UpstraUIKit24EkoImagePickerController")
@interface EkoImagePickerController : UINavigationController
@property (nonatomic, strong) Settings * _Nonnull settings;
@property (nonatomic, strong) UIBarButtonItem * _Nonnull doneButton;
@property (nonatomic, strong) UIBarButtonItem * _Nonnull cancelButton;
@property (nonatomic, strong) UIButton * _Nonnull albumButton;
@property (nonatomic, readonly, copy) NSArray<PHAsset *> * _Nonnull selectedAssets;
/// Title to use for button
@property (nonatomic, copy) NSString * _Nonnull doneButtonTitle;
- (nonnull instancetype)initWithSelectedAssets:(NSArray<PHAsset *> * _Nonnull)selectedAssets OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface EkoImagePickerController (SWIFT_EXTENSION(UpstraUIKit))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) PHAuthorizationStatus currentAuthorization;)
+ (PHAuthorizationStatus)currentAuthorization SWIFT_WARN_UNUSED_RESULT;
@end

@class UIPresentationController;

@interface EkoImagePickerController (SWIFT_EXTENSION(UpstraUIKit)) <UIAdaptivePresentationControllerDelegate>
- (BOOL)presentationControllerShouldDismiss:(UIPresentationController * _Nonnull)presentationController SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=13);
- (void)presentationControllerDidDismiss:(UIPresentationController * _Nonnull)presentationController SWIFT_AVAILABILITY(ios,introduced=13);
@end








@interface EkoImagePickerController (SWIFT_EXTENSION(UpstraUIKit))
- (void)imagePicker:(EkoImagePickerController * _Nonnull)imagePicker didSelectAsset:(PHAsset * _Nonnull)asset;
- (void)imagePicker:(EkoImagePickerController * _Nonnull)imagePicker didDeselectAsset:(PHAsset * _Nonnull)asset;
- (void)imagePicker:(EkoImagePickerController * _Nonnull)imagePicker didFinishWithAssets:(NSArray<PHAsset *> * _Nonnull)assets;
- (void)imagePicker:(EkoImagePickerController * _Nonnull)imagePicker didCancelWithAssets:(NSArray<PHAsset *> * _Nonnull)assets;
- (void)imagePicker:(EkoImagePickerController * _Nonnull)imagePicker didReachSelectionLimit:(NSInteger)count;
@end

@class UIColor;

IB_DESIGNABLE
SWIFT_CLASS("_TtC11UpstraUIKit23EkoImagePickerImageView")
@interface EkoImagePickerImageView : UIView
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic, strong) UIColor * _Null_unspecified tintColor;
@property (nonatomic) UIViewContentMode contentMode;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end

@class UIImage;

@interface EkoImagePickerImageView (SWIFT_EXTENSION(UpstraUIKit))
/// See UIImageView documentation
@property (nonatomic, strong) IBInspectable UIImage * _Nullable image;
/// See UIImageView documentation
@property (nonatomic, strong) IBInspectable UIImage * _Nullable highlightedImage;
/// See UIImageView documentation
@property (nonatomic) IBInspectable BOOL isHighlighted;
@end


SWIFT_CLASS("_TtC11UpstraUIKit28EkoMessageListViewController")
@interface EkoMessageListViewController : EkoViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
@end









@class UIImagePickerController;

@interface EkoMessageListViewController (SWIFT_EXTENSION(UpstraUIKit)) <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<UIImagePickerControllerInfoKey, id> * _Nonnull)info;
- (void)imagePickerControllerDidCancel:(UIImagePickerController * _Nonnull)picker;
@end


@interface EkoMessageListViewController (SWIFT_EXTENSION(UpstraUIKit)) <UITableViewDelegate>
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Nonnull)targetContentOffset;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end




@interface EkoMessageListViewController (SWIFT_EXTENSION(UpstraUIKit)) <UITableViewDataSource>
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC11UpstraUIKit25EkoNewsfeedViewController")
@interface EkoNewsfeedViewController : EkoViewController
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)viewDidLoad;
@end



@protocol UIViewControllerContextTransitioning;

SWIFT_CLASS("_TtC11UpstraUIKit16EkoPhotoAnimator")
@interface EkoPhotoAnimator : NSObject
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (void)animationEnded:(BOOL)transitionCompleted;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11UpstraUIKit26EkoPhotoCollectionViewCell")
@interface EkoPhotoCollectionViewCell : UICollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)prepareForReuse;
- (void)layoutSubviews;
@end


@interface EkoPhotoCollectionViewCell (SWIFT_EXTENSION(UpstraUIKit)) <UIScrollViewDelegate>
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewWillBeginZooming:(UIScrollView * _Nonnull)scrollView withView:(UIView * _Nullable)view;
- (void)scrollViewDidZoom:(UIScrollView * _Nonnull)scrollView;
@end


SWIFT_CLASS("_TtC11UpstraUIKit18EkoPhotoScrollView")
@interface EkoPhotoScrollView : UIScrollView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIGestureRecognizer;

@interface EkoPhotoScrollView (SWIFT_EXTENSION(UpstraUIKit)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end

@protocol UIViewControllerTransitionCoordinator;

SWIFT_CLASS("_TtC11UpstraUIKit24EkoPhotoViewerController")
@interface EkoPhotoViewerController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIStatusBarAnimation preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@protocol UIViewControllerAnimatedTransitioning;

@interface EkoPhotoViewerController (SWIFT_EXTENSION(UpstraUIKit)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
@end



@class UICollectionView;

@interface EkoPhotoViewerController (SWIFT_EXTENSION(UpstraUIKit)) <UICollectionViewDataSource>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end





@class UICollectionViewLayout;

@interface EkoPhotoViewerController (SWIFT_EXTENSION(UpstraUIKit)) <UICollectionViewDelegateFlowLayout>
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewDidZoom:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDragging:(UIScrollView * _Nonnull)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
@end




SWIFT_CLASS("_TtC11UpstraUIKit27EkoPostDetailViewController")
@interface EkoPostDetailViewController : EkoViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
@end










@interface EkoPostDetailViewController (SWIFT_EXTENSION(UpstraUIKit)) <UITableViewDataSource>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end






@interface EkoPostDetailViewController (SWIFT_EXTENSION(UpstraUIKit)) <UITableViewDelegate>
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end




SWIFT_CLASS("_TtC11UpstraUIKit20EkoPostTableViewCell")
@interface EkoPostTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet EkoExpandableLabel * _Null_unspecified contentLabel;
- (void)awakeFromNib;
- (void)prepareForReuse;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end




@interface EkoPostTableViewCell (SWIFT_EXTENSION(UpstraUIKit)) <EkoPhotoViewerControllerDelegate>
- (void)photoViewerControllerDidEndPresentingAnimation:(EkoPhotoViewerController * _Nonnull)photoViewerController;
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController didScrollToPhotoAt:(NSInteger)index;
@end




@interface EkoPostTableViewCell (SWIFT_EXTENSION(UpstraUIKit)) <EkoPhotoViewerControllerDataSource>
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController configureCell:(EkoPhotoCollectionViewCell * _Nonnull)cell forPhotoAt:(NSInteger)index;
- (UIView * _Nullable)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController referencedViewForPhotoAt:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfItemsIn:(EkoPhotoViewerController * _Nonnull)photoViewerController SWIFT_WARN_UNUSED_RESULT;
- (void)photoViewerController:(EkoPhotoViewerController * _Nonnull)photoViewerController configurePhotoAt:(NSInteger)index withImageView:(UIImageView * _Nonnull)imageView;
@end




SWIFT_CLASS("_TtC11UpstraUIKit19EkoViewPagerTabView")
@interface EkoViewPagerTabView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end






/// Settings for BSImagePicker
SWIFT_CLASS("_TtC11UpstraUIKit8Settings")
@interface Settings : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Settings * _Nonnull shared;)
+ (Settings * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end








































@interface UIViewController (SWIFT_EXTENSION(UpstraUIKit))
/// Present a image picker
/// \param imagePicker The image picker to present
///
/// \param animated Should presentation be animated
///
/// \param select Selection callback
///
/// \param deselect Deselection callback
///
/// \param cancel Cancel callback
///
/// \param finish Finish callback
///
/// \param completion Presentation completion callback
///
- (void)presentImagePicker:(EkoImagePickerController * _Nonnull)imagePicker animated:(BOOL)animated select:(void (^ _Nullable)(PHAsset * _Nonnull))select deselect:(void (^ _Nullable)(PHAsset * _Nonnull))deselect cancel:(void (^ _Nullable)(NSArray<PHAsset *> * _Nonnull))cancel finish:(void (^ _Nullable)(NSArray<PHAsset *> * _Nonnull))finish completion:(void (^ _Nullable)(void))completion;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
