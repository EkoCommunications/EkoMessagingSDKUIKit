# AmityUIKit

<p align="center" >
  <img src="https://global-uploads.webflow.com/5eddccffdb3c6a27f79757c1/604f017e59681e734c3bd995_nav-logo.png" alt="Amity" title="AmityUIKit">
</p>

[![Carthage Compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)

AmityUIKit is a delightful UIKit library for iOS. It is extending the powerful high-level messaging abstractions with the beautiful and elegant customizable UI styling provided by [Amity](https://www.amity.co) and work on top of our AmitySDK. It has a scalable customizable styling with well-designed, feature-rich APIs that are a joy to use.

## How To Get Started

- [Download Latest AmityUIKit manually](https://docs.amity.co/uikit/ios/changelog)
- Read the ["Getting Started" Documentation](https://docs.amity.co/uikit/ios/getting-started)

### Installation

There are multiple ways to setup AmityUIKit to be able work
Once setup below has done, go to official [Amity](https://docs.amity.co/uikit/ios/getting-started) documentation and follow another step.

### Manual Installation

Refer to this [link](https://docs.amity.co/uikit/ios/getting-started) for manual installation.

### Carthage

[Carthage](https://github.com/Carthage/Carthage) is a decentralized dependency manager that builds your dependencies and provides you with binary frameworks. To integrate AmityUIKit, add the following to your `Cartfile`.

```
binary "https://github.com/EkoCommunications/EkoMessagingSDKUIKit/releases/download/2.4.0/AmityUIKit.json" ~> 2.4.0
```

> Note: You can change 2.4.0 with the supported release tag

### Cocoapod

To integrate AmityUIKit into your Xcode project using CocoaPods, specify it in your `Podfile`:

```
pod 'AmityUIKit' :source => "https://github.com/EkoCommunications/EkoMessagingSDKUIKit.git"
```

> Note: After that you must do [Step-3](https://docs.amity.co/uikit/ios/getting-started) to complete the installation and bypass the AppStore submission.

### Swift Package Manager

- Soon

## Communication

- If you **need help**, contact [Amity representatives](https://www.amity.co).
- If you'd like to **ask a general question**, use the provided Eko Application / some chat channel for communication between client and us.
- If you **found a bug**, _and can provide steps to reliably reproduce it_, open an issue and put the related release tag with a label.
- If you **have a feature request**, open an issue.

## Requirements

| AmityUIKit Version | AmitySDK Version | Minimum iOS Target | Supported Language
| 2.4.0 | 5.0.2 | iOS 12.0 | Swift 5.3.1

## Dependencies

AmityUIKit has dependencies with Realm and AmitySDK SDK. Currently we are only able to work with Realm version 5.5.0.

## Sample App

AmityUIKit has sample app you can play along with it. It is written with Swift.

## License

Public Framework. Copyright (c) 2020 [Amity](https://www.amity.co).
