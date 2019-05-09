
Pod::Spec.new do |spec|

  spec.name         = "StarView"
  spec.version      = "1.0.0"
  spec.summary      = "简单粗暴的评分视图"
  spec.description  = <<-DESC
  一个简单粗暴的评分视图,传入对应参数,设置好视图大小就 OK 了,支持半星和全星展示
                   DESC

  spec.homepage      = "https://github.com/Aries123456"
  spec.license      = { :type => "MIT", :file => "LICENSE"}
  spec.author        = { "lk" => "348994901@qq.com" }
  spec.source        = { :git => "https://github.com/Aries123456/StarView.git", :tag => "#{spec.version}" }
  spec.source_files  = "StarView", "StarView/**/*.{h,m,png}"
  spec.platform      = :ios, "8.0"

end
