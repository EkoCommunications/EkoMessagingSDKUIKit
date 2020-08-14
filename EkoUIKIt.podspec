
Pod::Spec.new do |s|
    s.name         = "EkoUIKit"
    s.version      = "1.0.0"
    s.summary      = "A brief description of EkoUIKit project."
    s.description  = "An extended description of EkoUIKit project."
    s.homepage     = "https://github.com/EkoCommunications/EkoMessagingSDKUIKit"
    s.license = { :type => 'Copyright', :text => <<-LICENSE
                   Copyright 2018
                   Permission is granted to...
                  LICENSE
                }
    s.author             = { "$(git config user.name)" => "$(git config user.email)" }
    s.source       = { :git => 'https://github.com/EkoCommunications/EkoMessagingSDKUIKit', :tag => "#{s.version}" }
    s.vendored_frameworks = 'EkoUIKit.framework', 'EkoChat.framework', 'Realm.framework'
    s.platform = :ios
    s.swift_version = "5"
    s.ios.deployment_target  = '11.1'
end
