//
//  DZNPhotoServiceConstants.h
//  DZNPhotoPickerController
//  https://github.com/dzenbot/DZNPhotoPickerController
//
//  Created by Ignacio Romero Zurbuchen on 2/14/14.
//  Copyright (c) 2014 DZN Labs. All rights reserved.
//  Licence: MIT-Licence
//

#import <Foundation/Foundation.h>
#import "DZNPhotoPickerControllerConstants.h"

@interface DZNPhotoServiceConstants : NSObject
@end

/**
 * Returns an unique key for saving data to the NSUserDefaults.
 *
 * @param type The integer type.
 * @param key The constant string key.
 * @returns The unique key.
 */
UIKIT_EXTERN NSString *NSUserDefaultsUniqueKey(NSUInteger type, NSString *key);

/**
 * Returns a base URL for creating an HTTP client based on the specified service.
 *
 * @param service The specified service type.
 * @returns The base URL.
 */
UIKIT_EXTERN NSURL *baseURLForService(DZNPhotoPickerControllerService service);

/**
 * Returns a key path for tags, to retrieve them from a JSON structure, for a specified service.
 *
 * @param service The specified service type.
 * @returns The key path for tags.
 */
UIKIT_EXTERN NSString *tagsResourceKeyPathForService(DZNPhotoPickerControllerService service);

/**
 * Returns the url path for tag search, for a specified service..
 *
 * @param service The specified service type.
 * @returns The url path to be append to the client's base URL.
 */
UIKIT_EXTERN NSString *tagSearchUrlPathForService(DZNPhotoPickerControllerService service);

/**
 * Returns a key path for photos, to retrieve them from a JSON structure, for a specified service.
 *
 * @param service The specified service type.
 * @returns The key path for photos.
 */
UIKIT_EXTERN NSString *photosResourceKeyPathForService(DZNPhotoPickerControllerService service);

/**
 * Returns the url path for photo search, for a specified service..
 *
 * @param service The specified service type.
 * @returns The url path to be append to the client's base URL.
 */
UIKIT_EXTERN NSString *photoSearchUrlPathForService(DZNPhotoPickerControllerService service);

/**
 * Returns a key to be used for setting a consumer acces key value, for a specified service.
 *
 * @param service The specified service type.
 * @returns The key for consumer consumer acces key.
 */
UIKIT_EXTERN NSString *keyForAPIConsumerKey(DZNPhotoPickerControllerService service);

/**
 * Returns a key to be used for setting a consumer acces secret value, for a specified service.
 *
 * @param service The specified service type.
 * @returns The key for consumer consumer acces secret.
 */
UIKIT_EXTERN NSString *keyForAPIConsumerSecret(DZNPhotoPickerControllerService service);

/**
 * Returns a key to be used for setting a photo search term value, for a specified service.
 *
 * @param service The specified service type.
 * @returns The key for photo search term.
 */
UIKIT_EXTERN NSString *keyForSearchTerm(DZNPhotoPickerControllerService service);

/**
 * Returns a key to be used for setting a tag search term value, for a specified service.
 *
 * @param service The specified service type.
 * @returns The key for tag search term.
 */
UIKIT_EXTERN NSString *keyForSearchTag(DZNPhotoPickerControllerService service);

/**
 * Returns a key to be used for setting a search result value per page, for a specified service.
 *
 * @param service The specified service type.
 * @returns The key for search result per page.
 */
UIKIT_EXTERN NSString *keyForSearchResultPerPage(DZNPhotoPickerControllerService service);

/**
 * Returns a key to be used for retrieving search tag content, for a specified service.
 *
 * @param service The specified service type.
 * @returns The key for tag search term.
 */
UIKIT_EXTERN NSString *keyForSearchTagContent(DZNPhotoPickerControllerService service);

/**
 * Returns a key path for photos or tags, to retrieve them from a JSON structure, for a specified service and object name.
 *
 * @param service The specified service type.
 * @param objectName The object name.
 * @returns The key path for photos or tags.
 */
UIKIT_EXTERN NSString *keyPathForObjectName(DZNPhotoPickerControllerService service, NSString *objectName);

/**
 * Creates and returns a HMAC-SHA1 string, to be used for some services that requieres oauth (work in progress).
 * @returns The HMAC-SHA1 string.
 */
UIKIT_EXTERN NSString *HMACSHA1(NSString *text, NSString *secret);

