#
#  Be sure to run `pod spec lint DYNSync.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name             = 'DYNSync'
  s.version          = '1.1.0'
  s.summary          = 'A short description of DYNSync.'
  s.description      = 'DYNSync'
			

  s.homepage         = 'https://github.com/WinkyShan/DYNSync.git'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'WinkyShan' => '2297971509@qq.com' }
  s.source           = { :git => 'https://github.com/WinkyShan/DYNSync.git', :tag => s.version.to_s }

  s.ios.deployment_target = '10.0'
  
  s.requires_arc = true

  s.source_files = "DYNSync/**/*.{h,m,mm}"
  s.public_header_files = 'DYNSync/**/*.h'
  s.private_header_files = 'DYNSync/crypto/x11/*.h'
  s.libraries = 'bz2', 'sqlite3'
  s.resource_bundles = {'DYNSync' => ['DYNSync/*.xcdatamodeld', 'DYNSync/*.plist', 'DYNSync/*.lproj', 'DYNSync/MasternodeLists/*.dat']}
  
  s.framework = 'Foundation', 'UIKit', 'SystemConfiguration', 'CoreData', 'BackgroundTasks'
  s.compiler_flags = '-Wno-comma'
  s.dependency 'secp256k1_dash', '0.1.2'
  s.dependency 'bls-signatures-pod', '0.2.9'
  s.dependency 'CocoaLumberjack', '3.6.0'
  s.dependency 'DYNAlertController', '1.0.0'
  s.dependency 'DSDynamicOptions', '0.1.0'
  s.prefix_header_contents = '#import "DSEnvironment.h"'

end
