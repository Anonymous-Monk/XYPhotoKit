//
//  XYPhotoBottomPreviewCell.h
//  XYPhotoKitDemo
//
//  Created by XcodeYang on 01/09/2017.
//  Copyright © 2017 XcodeYang. All rights reserved.
//

@import UIKit;
@import Photos;

NS_ASSUME_NONNULL_BEGIN

@interface XYPhotoBottomPreviewCell : UICollectionViewCell

@property (nonatomic, readonly) PHAsset *asset;
@property(nonatomic, readonly) UIImageView *imageView;

- (void)setAsset:(PHAsset *)asset indexPath:(NSIndexPath *)indexPath collectionView:(UICollectionView *)collectionView;

@end

NS_ASSUME_NONNULL_END
