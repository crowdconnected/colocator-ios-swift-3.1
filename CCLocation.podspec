Pod::Spec.new do |s|
  s.name                  = 'CCLocation'
  s.version               = '1.9.7'
  s.summary               = 'The CrowdConnected colocator iOS library'
  s.homepage              = 'https://github.com/crowdconnected/colocator-ios.git'
  s.social_media_url      = 'https://twitter.com/crowdconnected'

  s.author                = { 'CrowdConnected Ltd' => 'mail@crowdconnected.com' }
  s.source                = { :git => 'https://github.com/crowdconnected/colocator-ios.git', :tag => s.version.to_s }
  s.license               = { :type => 'Copyright', :text => 'Copyright (c) 2017 Crowd Connected Ltd' }

  s.documentation_url     = 'https://developers.colocator.net'

  s.source_files          = 'CCLocation.framework/Headers/*.h'
  s.vendored_frameworks   = 'CCLocation.framework'
  s.module_name           = 'CCLocation'

  s.ios.deployment_target = '8.0'

  s.frameworks            = 'CoreLocation', 'UIKit', 'CoreBluetooth'

  s.dependency 'CocoaLumberjack/Swift', '~> 3.2.0'
  s.dependency 'SocketRocket', '~> 0.4.2'
  s.dependency 'SwiftProtobuf'
  s.dependency 'ReSwift', '~> 4.0.0'
  s.dependency 'TrueTime'
  s.dependency 'Result', '~> 3.2.3'
end
