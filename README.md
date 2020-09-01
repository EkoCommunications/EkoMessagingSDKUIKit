# Upstra UIKit

<p align="center" >
  <img src="https://uploads-ssl.webflow.com/5ee51b71187c830280662208/5eec9a674479b0e4de630ac2_upstra-logo.svg" alt="Upstra" title="UpstraSDK">
</p>

[![Carthage Compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)

Upstra UIKit is a delightful UIKit library for iOS. It is extending the powerful high-level messaging abstractions with the beautiful and elegant customizable UI styling provided by [Eko](https://www.ekoapp.com/) and work on top of our EkoChat SDK. It has a scalable customizable styling with well-designed, feature-rich APIs that are a joy to use.

## How To Get Started

- [Download Latest Upstra UIKit manually](https://docs.upstra.co/ios/changelog) and try out the sample app.
- Read the ["Getting Started" Documentation](https://docs.upstra.co/ios/start)

### Installation

There are multiple ways to setup Upstra UIKit to be able work
Once setup below has done, go to official [Upstra](https://docs.upstra.co/ios/start) documentation and follow another step.

### Manual Installation

Refer to this [link](https://docs.upstra.co/ios/start) for manual installation.

### Carthage

[Carthage](https://github.com/Carthage/Carthage) is a decentralized dependency manager that builds your dependencies and provides you with binary frameworks. To integrate Upstra UIKit, add the following to your `Cartfile`.

```
binary "https://github.com/EkoCommunications/EkoMessagingSDKUIKit/releases/download/1.0.0/UpstraUIKit.json" ~> 0.1.0
```

> Note: You can change 0.1.0 with the supported release tag

### Cocoapod

To integrate UpstraUIKit into your Xcode project using CocoaPods, specify it in your `Podfile`:

```
pod 'UpstraUIKit', '1.0.0', :source => "https://github.com/EkoCommunications/EkoMessagingSDKUIKit.git"
```

> Note: After that you must do [Step-3](https://docs.upstra.co/ios/start) to complete the installation and bypass the AppStore submission.

> Note: You can change 3.2.5 with the supported release tag

### Swift Package Manager

- Soon

## Communication

- If you **need help**, contact [Upstra representatives](https://www.upstra.co/).
- If you'd like to **ask a general question**, use the provided Eko Application / some chat channel for communication between client and us.
- If you **found a bug**, _and can provide steps to reliably reproduce it_, open an issue and put the related release tag with a label.
- If you **have a feature request**, open an issue.

## Requirements

| UpstraUIKit Version | Minimum iOS Target | Supported Language
| 0.1.0 | iOS 11 | Swift 5.x

## Dependencies

UpstraUIKit has dependencies with Realm and EkoChat SDK. Currently we are only able to work with Realm version 4.x.x.

## Sample App

UpstraUIKit has sample app you can play along with it. It is written with Swift.

## License

Public Framework. Copyright (c) 2020 [Amity](https://ekoapp.com).
