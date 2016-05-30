; drush make --no-core libre_scholar.make ../../
; drush site-install libre_scholar --db-url=mysql://root:islandora@localhost:3306/drupal7
core = 7.x
api = 2

projects[ctools] = 1.9
projects[entity] = 1.7
projects[libraries] = 2.3
projects[navbar] = 1.7
projects[views] = 3.13
projects[date] = 2.9
projects[datepicker] = 1.0
projects[views_data_export] = 3.0-beta9
projects[fpa] = 2.6
projects[module_filter] = 2.0
projects[rules] = 2.9
projects[features] = 2.10
projects[panels] = 3.5
projects[radix_layouts] = 3.4
projects[uuid] = 1.0-beta1
projects[node_export] = 3.1
projects[features_extra] = 1.0
projects[strongarm] = 2.0
projects[jquery_update] = 2.7
projects[imagemagick] = 1.0
projects[ckeditor] = 1.17
projects[logintoboggan] = 1.5
projects[colorbox] = 2.10
projects[xmlsitemap] = 2.3
projects[views_slideshow] = 3.1
projects[addtoany] = 4.12
projects[scholarly_lite] = 1.1

libraries[tuque][download][type] = git
libraries[tuque][download][url] = https://github.com/Islandora/tuque.git
libraries[tuque][download][branch] = 1.7

libraries[citeproc-php][download][type] = git
libraries[citeproc-php][download][url] = https://github.com/Islandora/citeproc-php.git
libraries[citeproc-php][download][branch] = master

libraries[backbone][download][type] = get
libraries[backbone][download][url] = https://github.com/jashkenas/backbone/archive/1.3.3.tar.gz

libraries[underscore][download][type] = get
libraries[underscore][download][url] = https://github.com/jashkenas/underscore/archive/1.8.3.zip

libraries[modernizr][directory_name] = modernizr
libraries[modernizr][download][type] = get
libraries[modernizr][download][url] = https://raw.githubusercontent.com/contentmath/navbar_modernizr/master/modernizr-min.js

projects[islandora][type] = module
projects[islandora][download][type] = git
projects[islandora][download][url] = https://github.com/Islandora/islandora.git
projects[islandora][download][branch] = 7.x-1.7

projects[islandora_solution_pack_collection][type] = module
projects[islandora_solution_pack_collection][download][type] = git
projects[islandora_solution_pack_collection][download][url] = https://github.com/Islandora/islandora_solution_pack_collection.git
projects[islandora_solution_pack_collection][download][branch] = 7.x-1.7

projects[islandora_solr_search][type] = module
projects[islandora_solr_search][download][type] = git
projects[islandora_solr_search][download][url] = https://github.com/Islandora/islandora_solr_search.git
projects[islandora_solr_search][download][branch] = 7.x-1.7

projects[islandora_scholar][type] = module
projects[islandora_scholar][download][type] = git
projects[islandora_scholar][download][url] = https://github.com/Islandora/islandora_scholar.git
projects[islandora_scholar][download][branch] = 7.x-1.7

projects[islandora_solr_metadata][type] = module
projects[islandora_solr_metadata][download][type] = git
projects[islandora_solr_metadata][download][url] = https://github.com/Islandora/islandora_solr_metadata.git
projects[islandora_solr_metadata][download][branch] = 7.x-1.7

projects[islandora_solr_views][type] = module
projects[islandora_solr_views][download][type] = git
projects[islandora_solr_views][download][url] = https://github.com/Islandora/islandora_solr_views.git
projects[islandora_solr_views][download][branch] = 7.x-1.7

projects[islandora_bookmark][type] = module
projects[islandora_bookmark][download][type] = git
projects[islandora_bookmark][download][url] = https://github.com/Islandora/islandora_bookmark.git
projects[islandora_bookmark][download][branch] = 7.x-1.7

projects[islandora_solution_pack_entities][type] = module
projects[islandora_solution_pack_entities][download][type] = git
projects[islandora_solution_pack_entities][download][url] = https://github.com/Islandora/islandora_solution_pack_entities.git
projects[islandora_solution_pack_entities][download][branch] = 7.x-1.7

projects[php_lib][type] = module
projects[php_lib][download][type] = git
projects[php_lib][download][url] = https://github.com/Islandora/php_lib.git
projects[php_lib][download][branch] = 7.x-1.7

projects[objective_forms][type] = module
projects[objective_forms][download][type] = git
projects[objective_forms][download][url] = https://github.com/Islandora/objective_forms.git
projects[objective_forms][download][branch] = 7.x-1.7

projects[islandora_xml_forms][type] = module
projects[islandora_xml_forms][download][type] = git
projects[islandora_xml_forms][download][url] = https://github.com/Islandora/islandora_xml_forms.git
projects[islandora_xml_forms][download][branch] = 7.x-1.7

projects[islandora_oai][type] = module
projects[islandora_oai][download][type] = git
projects[islandora_oai][download][url] = https://github.com/Islandora/islandora_oai.git
projects[islandora_oai][download][branch] = 7.x-1.7

projects[islandora_xacml_editor][type] = module
projects[islandora_xacml_editor][download][type] = git
projects[islandora_xacml_editor][download][url] = https://github.com/Islandora/islandora_xacml_editor.git
projects[islandora_xacml_editor][download][branch] = 7.x-1.7

projects[islandora_solution_pack_image][type] = module
projects[islandora_solution_pack_image][download][type] = git
projects[islandora_solution_pack_image][download][url] = https://github.com/Islandora/islandora_solution_pack_image.git
projects[islandora_solution_pack_image][download][branch] = 7.x-1.7

projects[islandora_solution_pack_audio][type] = module
projects[islandora_solution_pack_audio][download][type] = git
projects[islandora_solution_pack_audio][download][url] = https://github.com/Islandora/islandora_solution_pack_audio.git
projects[islandora_solution_pack_audio][download][branch] = 7.x-1.7

projects[islandora_usage_stats][type] = module
projects[islandora_usage_stats][download][type] = git
projects[islandora_usage_stats][download][url] = https://github.com/Islandora/islandora_usage_stats.git
projects[islandora_usage_stats][download][branch] = 7.x-1.7

projects[islandora_populator][type] = module
projects[islandora_populator][download][type] = git
projects[islandora_populator][download][url] = https://github.com/Islandora/islandora_populator.git
projects[islandora_populator][download][branch] = 7.x-1.7

projects[islandora_simple_workflow][type] = module
projects[islandora_simple_workflow][download][type] = git
projects[islandora_simple_workflow][download][url] = https://github.com/Islandora/islandora_simple_workflow.git
projects[islandora_simple_workflow][download][branch] = 7.x-1.7

projects[islandora_videojs][type] = module
projects[islandora_videojs][download][type] = git
projects[islandora_videojs][download][url] = https://github.com/Islandora/islandora_videojs.git
projects[islandora_videojs][download][branch] = 7.x-1.7

projects[islandora_solution_pack_video][type] = module
projects[islandora_solution_pack_video][download][type] = git
projects[islandora_solution_pack_video][download][url] = https://github.com/Islandora/islandora_solution_pack_video.git
projects[islandora_solution_pack_video][download][branch] = 7.x-1.7

libraries[video-js][directory_name] = video-js
libraries[video-js][download][type] = get
libraries[video-js][download][url] = https://github.com/videojs/video.js/releases/download/v4.12.15/video-js-4.12.15.zip

projects[islandora_solution_pack_pdf][type] = module
projects[islandora_solution_pack_pdf][download][type] = git
projects[islandora_solution_pack_pdf][download][url] = https://github.com/Islandora/islandora_solution_pack_pdf.git
projects[islandora_solution_pack_pdf][download][branch] = 7.x-1.7

projects[islandora_paged_content][type] = module
projects[islandora_paged_content][download][type] = git
projects[islandora_paged_content][download][url] = https://github.com/Islandora/islandora_paged_content.git
projects[islandora_paged_content][download][branch] = 7.x-1.7

projects[islandora_solution_pack_book][type] = module
projects[islandora_solution_pack_book][download][type] = git
projects[islandora_solution_pack_book][download][url] = https://github.com/Islandora/islandora_solution_pack_book.git
projects[islandora_solution_pack_book][download][branch] = 7.x-1.7

libraries[colorbox][directory_name] = colorbox
libraries[colorbox][download][type] = get
libraries[colorbox][download][url] = https://github.com/jackmoore/colorbox/archive/1.x.zip

projects[islandora_internet_archive_bookreader][type] = module
projects[islandora_internet_archive_bookreader][download][type] = git
projects[islandora_internet_archive_bookreader][download][url] = https://github.com/Islandora/islandora_internet_archive_bookreader.git
projects[islandora_internet_archive_bookreader][download][branch] = 7.x-1.7

libraries[bookreader][directory_name] = bookreader
libraries[bookreader][download][type] = git
libraries[bookreader][download][url] = https://github.com/Islandora/internet_archive_bookreader.git
libraries[bookreader][download][branch] = master

projects[islandora_solution_pack_large_image][type] = module
projects[islandora_solution_pack_large_image][download][type] = git
projects[islandora_solution_pack_large_image][download][url] = https://github.com/Islandora/islandora_solution_pack_large_image.git
projects[islandora_solution_pack_large_image][download][branch] = 7.x-1.7

projects[islandora_openseadragon][type] = module
projects[islandora_openseadragon][download][type] = git
projects[islandora_openseadragon][download][url] = https://github.com/contentmath/islandora_openseadragon.git
projects[islandora_openseadragon][download][branch] = 7.x

libraries[openseadragon][directory_name] = openseadragon
libraries[openseadragon][download][type] = get
libraries[openseadragon][download][url] = http://openseadragon.github.io/releases/openseadragon-bin-0.9.129.zip

projects[islandora_solution_pack_newspaper][type] = module
projects[islandora_solution_pack_newspaper][download][type] = git
projects[islandora_solution_pack_newspaper][download][url] = https://github.com/Islandora/islandora_solution_pack_newspaper.git
projects[islandora_solution_pack_newspaper][download][branch] = 7.x-1.7

projects[islandora_ocr][type] = module
projects[islandora_ocr][download][type] = git
projects[islandora_ocr][download][url] = https://github.com/Islandora/islandora_ocr.git
projects[islandora_ocr][download][branch] = 7.x-1.7

projects[islandora_xmlsitemap][type] = module
projects[islandora_xmlsitemap][download][type] = git
projects[islandora_xmlsitemap][download][url] = https://github.com/Islandora/islandora_xmlsitemap.git
projects[islandora_xmlsitemap][download][branch] = 7.x-1.7

projects[islandora_fits][type] = module
projects[islandora_fits][download][type] = git
projects[islandora_fits][download][url] = https://github.com/Islandora/islandora_fits.git
projects[islandora_fits][download][branch] = 7.x-1.7

projects[islandora_binary_object][type] = module
projects[islandora_binary_object][download][type] = git
projects[islandora_binary_object][download][url] = https://github.com/Islandora-Labs/islandora_binary_object.git
projects[islandora_binary_object][download][branch] = 7.x

projects[islandora_solution_pack_compound][type] = module
projects[islandora_solution_pack_compound][download][type] = git
projects[islandora_solution_pack_compound][download][url] = https://github.com/Islandora/islandora_solution_pack_compound.git
projects[islandora_solution_pack_compound][download][branch] = 7.x

libraries[jquery-cycle][directory_name] = jquery.cycle
libraries[jquery-cycle][download][type] = get
libraries[jquery-cycle][download][url] = http://malsup.github.io/jquery.cycle.all.js