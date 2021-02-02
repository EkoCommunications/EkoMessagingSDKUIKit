
Pod::Spec.new do |s|
    s.name         = "UpstraUIKit"
    s.version      = "1.9.0"
    s.summary      = "A brief description of UpstraUIKit project."
    s.description  = "An extended description of UpstraUIKit project."
    s.homepage     = "https://github.com/EkoCommunications/EkoMessagingSDKUIKit"
    s.license = { :type => 'Copyright', :text => <<-LICENSE
                   Copyright 2020
                   Permission is granted to...
                  LICENSE
                }
    s.author             = { "$(git config user.name)" => "$(git config user.email)" }
    s.source       = { :git => 'https://github.com/EkoCommunications/EkoMessagingSDKUIKit.git', :tag => "#{s.version}" }
    s.vendored_frameworks = 'Distribution/UpstraUIKit.xcframework', 'Distribution/EkoChat.xcframework', 'Distribution/Realm.xcframework'
    s.platform = :ios
    s.swift_version = "5"
    s.ios.deployment_target  = '12.0'
end