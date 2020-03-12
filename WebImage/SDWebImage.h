/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 * (c) Florent Vilmart
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <TSDWebImage/SDWebImageCompat.h>

#if SD_UIKIT
#import <UIKit/UIKit.h>
#endif

//! Project version number for WebImage.
FOUNDATION_EXPORT double WebImageVersionNumber;

//! Project version string for WebImage.
FOUNDATION_EXPORT const unsigned char WebImageVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <WebImage/PublicHeader.h>

#import <TSDWebImage/SDWebImageManager.h>
#import <TSDWebImage/SDWebImageCacheKeyFilter.h>
#import <TSDWebImage/SDWebImageCacheSerializer.h>
#import <TSDWebImage/SDImageCacheConfig.h>
#import <TSDWebImage/SDImageCache.h>
#import <TSDWebImage/SDMemoryCache.h>
#import <TSDWebImage/SDDiskCache.h>
#import <TSDWebImage/SDImageCacheDefine.h>
#import <TSDWebImage/SDImageCachesManager.h>
#import <TSDWebImage/UIView+WebCache.h>
#import <TSDWebImage/UIImageView+WebCache.h>
#import <TSDWebImage/UIImageView+HighlightedWebCache.h>
#import <TSDWebImage/SDWebImageDownloaderConfig.h>
#import <TSDWebImage/SDWebImageDownloaderOperation.h>
#import <TSDWebImage/SDWebImageDownloaderRequestModifier.h>
#import <TSDWebImage/SDImageLoader.h>
#import <TSDWebImage/SDImageLoadersManager.h>
#import <TSDWebImage/UIButton+WebCache.h>
#import <TSDWebImage/SDWebImagePrefetcher.h>
#import <TSDWebImage/UIView+WebCacheOperation.h>
#import <TSDWebImage/UIImage+Metadata.h>
#import <TSDWebImage/UIImage+MultiFormat.h>
#import <TSDWebImage/UIImage+MemoryCacheCost.h>
#import <TSDWebImage/SDWebImageOperation.h>
#import <TSDWebImage/SDWebImageDownloader.h>
#import <TSDWebImage/SDWebImageTransition.h>
#import <TSDWebImage/SDWebImageIndicator.h>
#import <TSDWebImage/SDImageTransformer.h>
#import <TSDWebImage/UIImage+Transform.h>
#import <TSDWebImage/SDAnimatedImage.h>
#import <TSDWebImage/SDAnimatedImageView.h>
#import <TSDWebImage/SDAnimatedImageView+WebCache.h>
#import <TSDWebImage/SDImageCodersManager.h>
#import <TSDWebImage/SDImageCoder.h>
#import <TSDWebImage/SDImageAPNGCoder.h>
#import <TSDWebImage/SDImageGIFCoder.h>
#import <TSDWebImage/SDImageIOCoder.h>
#import <TSDWebImage/SDImageFrame.h>
#import <TSDWebImage/SDImageCoderHelper.h>
#import <TSDWebImage/SDImageGraphics.h>
#import <TSDWebImage/UIImage+GIF.h>
#import <TSDWebImage/UIImage+ForceDecode.h>
#import <TSDWebImage/NSData+ImageContentType.h>
#import <TSDWebImage/SDWebImageDefine.h>
#import <TSDWebImage/SDWebImageError.h>
#import <TSDWebImage/SDWebImageOptionsProcessor.h>

// Mac
#if __has_include(<TSDWebImage/NSImage+Compatibility.h>)
#import <TSDWebImage/NSImage+Compatibility.h>
#endif
#if __has_include(<TSDWebImage/NSButton+WebCache.h>)
#import <TSDWebImage/NSButton+WebCache.h>
#endif
#if __has_include(<TSDWebImage/SDAnimatedImageRep.h>)
#import <TSDWebImage/SDAnimatedImageRep.h>
#endif

// MapKit
#if __has_include(<TSDWebImage/MKAnnotationView+WebCache.h>)
#import <TSDWebImage/MKAnnotationView+WebCache.h>
#endif
