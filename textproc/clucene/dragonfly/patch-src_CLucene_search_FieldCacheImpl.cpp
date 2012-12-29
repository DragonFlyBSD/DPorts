  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>pkgsrc/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp at trunk · jsonn/pkgsrc · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon-precomposed" sizes="57x57" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="114x114" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="72x72" href="apple-touch-icon-144.png" />
    <link rel="apple-touch-icon-precomposed" sizes="144x144" href="apple-touch-icon-144.png" />
    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="rIfYb1+oXCKnx5fuvb5UfN66R+RIbifHCHQQHjLTbH0=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-136f905f03a0a6ce0292d2e017a31c4fe548e2d0.css" media="screen" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-6fb37f4beb26b76fec8bcd25a34a112492a75cd5.css" media="screen" rel="stylesheet" type="text/css" />
    


    <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-eee761b9d5e06efb064aaaf528c44ef8e1601e71.js" type="text/javascript"></script>
    <script src="https://a248.e.akamai.net/assets.github.com/assets/github-1bd94aaabef1bda186c4e943876bfdc83cce2a9e.js" type="text/javascript"></script>
    

        <link rel='permalink' href='/jsonn/pkgsrc/blob/6f02cdeede37a1e11112794f54cace64d0487855/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp'>
    <meta property="og:title" content="pkgsrc"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/jsonn/pkgsrc"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/d1a3053dbb8a5ec649c1c6633db9378e?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="Automatically updated conversion of the &quot;pkgsrc&quot; module from anoncvs.netbsd.org"/>

    <meta name="description" content="Automatically updated conversion of the &quot;pkgsrc&quot; module from anoncvs.netbsd.org" />

  <link href="https://github.com/jsonn/pkgsrc/commits/trunk.atom" rel="alternate" title="Recent Commits to pkgsrc:trunk" type="application/atom+xml" />

  </head>


  <body class="logged_out page-blob  vis-public env-production ">
    <div id="wrapper">

      

      

      


        <div class="header header-logged-out">
          <div class="container clearfix">

            <a class="header-logo-wordmark" href="https://github.com/">
              <img alt="GitHub" class="github-logo-4x" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x.png?1340659530" />
              <img alt="GitHub" class="github-logo-4x-hover" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x-hover.png?1340659530" />
            </a>

              
<ul class="top-nav">
    <li class="explore"><a href="https://github.com/explore">Explore GitHub</a></li>
  <li class="search"><a href="https://github.com/search">Search</a></li>
  <li class="features"><a href="https://github.com/features">Features</a></li>
    <li class="blog"><a href="https://github.com/blog">Blog</a></li>
</ul>


            <div class="header-actions">
                <a class="button primary classy" href="https://github.com/signup">Sign up for free</a>
              <a class="button classy" href="https://github.com/login?return_to=%2Fjsonn%2Fpkgsrc%2Fblob%2Ftrunk%2Ftextproc%2Flibclucene%2Fpatches%2Fpatch-src_CLucene_search_FieldCacheImpl.cpp">Sign in</a>
            </div>

          </div>
        </div>


      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu">
          <div class="container">
            <div class="title-actions-bar">
              


                  <ul class="pagehead-actions">


          <li>
            <span class="star-button"><a href="/login?return_to=%2Fjsonn%2Fpkgsrc" class="minibutton js-toggler-target entice tooltipped leftwards" title="You must be signed in to use this feature" rel="nofollow"><span class="mini-icon mini-icon-star"></span>Star</a><a class="social-count js-social-count" href="/jsonn/pkgsrc/stargazers">37</a></span>
          </li>
          <li>
            <a href="/login?return_to=%2Fjsonn%2Fpkgsrc" class="minibutton js-toggler-target fork-button entice tooltipped leftwards"  title="You must be signed in to fork a repository" rel="nofollow"><span class="mini-icon mini-icon-fork"></span>Fork</a><a href="/jsonn/pkgsrc/network" class="social-count">21</a>
          </li>
    </ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-icon mega-icon-public-repo"></span>
                <span class="author vcard">
                  <a href="/jsonn" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">jsonn</span>
                  </a></span> /
                <strong><a href="/jsonn/pkgsrc" class="js-current-repository">pkgsrc</a></strong>
              </h1>
            </div>

            

  <ul class="tabs">
    <li><a href="/jsonn/pkgsrc" class="selected" highlight="repo_sourcerepo_downloadsrepo_commitsrepo_tagsrepo_branches">Code</a></li>
    <li><a href="/jsonn/pkgsrc/network" highlight="repo_network">Network</a></li>
    <li><a href="/jsonn/pkgsrc/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>0</span></a></li>

      <li><a href="/jsonn/pkgsrc/issues" highlight="repo_issues">Issues <span class='counter'>1</span></a></li>

      <li><a href="/jsonn/pkgsrc/wiki" highlight="repo_wiki">Wiki</a></li>


    <li><a href="/jsonn/pkgsrc/graphs" highlight="repo_graphsrepo_contributors">Graphs</a></li>


  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/jsonn/pkgsrc/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter blank">0</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">


    <div class="context-menu-container js-menu-container js-context-menu">
      <a href="#"
         class="minibutton bigger switcher js-menu-target js-commitish-button btn-branch repo-tree"
         data-hotkey="w"
         data-ref="trunk">
         <span><em class="mini-icon mini-icon-branch"></em><i>branch:</i> trunk</span>
      </a>

      <div class="context-pane commitish-context js-menu-content">
        <a href="#" class="close js-menu-close"><span class="mini-icon mini-icon-remove-close"></span></a>
        <div class="context-title">Switch branches/tags</div>
        <div class="context-body pane-selector commitish-selector js-navigation-container">
          <div class="filterbar">
            <input type="text" id="context-commitish-filter-field" class="js-navigation-enable js-filterable-field js-ref-filter-field" placeholder="Filter branches/tags">
            <ul class="tabs">
              <li><a href="#" data-filter="branches" class="selected">Branches</a></li>
                <li><a href="#" data-filter="tags">Tags</a></li>
            </ul>
          </div>

          <div class="js-filter-tab js-filter-branches">
            <div data-filterable-for="context-commitish-filter-field" data-filterable-type=substring>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/BMAKE/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="BMAKE" rel="nofollow">BMAKE</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/buildlink2/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="buildlink2" rel="nofollow">buildlink2</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/BZIP2/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="BZIP2" rel="nofollow">BZIP2</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/cube_native_xorg/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="cube_native_xorg" rel="nofollow">cube_native_xorg</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/cwrapper/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="cwrapper" rel="nofollow">cwrapper</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/databases_pgbouncer/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="databases_pgbouncer" rel="nofollow">databases_pgbouncer</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/FREEBSD/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="FREEBSD" rel="nofollow">FREEBSD</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/FSF/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="FSF" rel="nofollow">FSF</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/jlam_pkgviews/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="jlam_pkgviews" rel="nofollow">jlam_pkgviews</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/KIENTZLE/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="KIENTZLE" rel="nofollow">KIENTZLE</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/MRENDEL/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="MRENDEL" rel="nofollow">MRENDEL</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/netbsd_1_6/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="netbsd_1_6" rel="nofollow">netbsd_1_6</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/netbsd_1_6_1/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="netbsd_1_6_1" rel="nofollow">netbsd_1_6_1</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkg_install_renovation/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkg_install_renovation" rel="nofollow">pkg_install_renovation</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2003Q4/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2003Q4" rel="nofollow">pkgsrc_2003Q4</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2004Q1/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2004Q1" rel="nofollow">pkgsrc_2004Q1</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2004Q2/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2004Q2" rel="nofollow">pkgsrc_2004Q2</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2004Q3/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2004Q3" rel="nofollow">pkgsrc_2004Q3</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2004Q4/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2004Q4" rel="nofollow">pkgsrc_2004Q4</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2005Q1/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2005Q1" rel="nofollow">pkgsrc_2005Q1</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2005Q2/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2005Q2" rel="nofollow">pkgsrc_2005Q2</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2005Q3/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2005Q3" rel="nofollow">pkgsrc_2005Q3</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2005Q4/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2005Q4" rel="nofollow">pkgsrc_2005Q4</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2006Q1/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2006Q1" rel="nofollow">pkgsrc_2006Q1</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2006Q2/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2006Q2" rel="nofollow">pkgsrc_2006Q2</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2006Q3/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2006Q3" rel="nofollow">pkgsrc_2006Q3</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2006Q4/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2006Q4" rel="nofollow">pkgsrc_2006Q4</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2007Q1/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2007Q1" rel="nofollow">pkgsrc_2007Q1</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2007Q2/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2007Q2" rel="nofollow">pkgsrc_2007Q2</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2007Q3/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2007Q3" rel="nofollow">pkgsrc_2007Q3</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2007Q4/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2007Q4" rel="nofollow">pkgsrc_2007Q4</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2008Q1/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2008Q1" rel="nofollow">pkgsrc_2008Q1</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2008Q2/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2008Q2" rel="nofollow">pkgsrc_2008Q2</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2008Q3/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2008Q3" rel="nofollow">pkgsrc_2008Q3</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2008Q4/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2008Q4" rel="nofollow">pkgsrc_2008Q4</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2009Q1/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2009Q1" rel="nofollow">pkgsrc_2009Q1</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2009Q2/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2009Q2" rel="nofollow">pkgsrc_2009Q2</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2009Q3/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2009Q3" rel="nofollow">pkgsrc_2009Q3</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2009Q4/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2009Q4" rel="nofollow">pkgsrc_2009Q4</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2010Q1/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2010Q1" rel="nofollow">pkgsrc_2010Q1</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2010Q2/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2010Q2" rel="nofollow">pkgsrc_2010Q2</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2010Q3/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2010Q3" rel="nofollow">pkgsrc_2010Q3</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2010Q4/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2010Q4" rel="nofollow">pkgsrc_2010Q4</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2011Q1/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2011Q1" rel="nofollow">pkgsrc_2011Q1</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2011Q2/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2011Q2" rel="nofollow">pkgsrc_2011Q2</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2011Q3/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2011Q3" rel="nofollow">pkgsrc_2011Q3</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2011Q4/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2011Q4" rel="nofollow">pkgsrc_2011Q4</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2012Q1/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2012Q1" rel="nofollow">pkgsrc_2012Q1</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2012Q2/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2012Q2" rel="nofollow">pkgsrc_2012Q2</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgsrc_2012Q3/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgsrc_2012Q3" rel="nofollow">pkgsrc_2012Q3</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgviews/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgviews" rel="nofollow">pkgviews</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/pkgviews_mk/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="pkgviews_mk" rel="nofollow">pkgviews_mk</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/TNF/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="TNF" rel="nofollow">TNF</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/tnftp/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="tnftp" rel="nofollow">tnftp</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target selected">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/trunk/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="trunk" rel="nofollow">trunk</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/tv_derecurse/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="tv_derecurse" rel="nofollow">tv_derecurse</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/tv_libtool_1_5_18_tmpdirfix/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="tv_libtool_1_5_18_tmpdirfix" rel="nofollow">tv_libtool_1_5_18_tmpdirfix</a>
                  </h4>
                </div>
                <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                  <span class="mini-icon mini-icon-confirm"></span>
                  <h4>
                      <a href="/jsonn/pkgsrc/blob/ZLIB/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="js-navigation-open" data-name="ZLIB" rel="nofollow">ZLIB</a>
                  </h4>
                </div>
            </div>
            <div class="no-results">Nothing to show</div>


          </div>

            <div class="js-filter-tab js-filter-tags filter-tab-empty" style="display:none">
              <div data-filterable-for="context-commitish-filter-field" data-filterable-type=substring>
              </div>
              <div class="no-results">Nothing to show</div>
            </div>

        </div>
      </div><!-- /.commitish-context-context -->
    </div>
  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/jsonn/pkgsrc" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/jsonn/pkgsrc/commits/trunk" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/jsonn/pkgsrc/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">58</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:ae1a2963b9b9a9e24307b97a15c1be37 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:ae1a2963b9b9a9e24307b97a15c1be37 -->

<div id="slider">


    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>
      <div class="breadcrumb">
        <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/jsonn/pkgsrc" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">pkgsrc</span></a></span></span> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/jsonn/pkgsrc/tree/trunk/textproc" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">textproc</span></a></span> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/jsonn/pkgsrc/tree/trunk/textproc/libclucene" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">libclucene</span></a></span> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/jsonn/pkgsrc/tree/trunk/textproc/libclucene/patches" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">patches</span></a></span> / <strong class="final-path">patch-src_CLucene_search_FieldCacheImpl.cpp</strong> <span class="js-clippy mini-icon mini-icon-clippy " data-clipboard-text="textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" data-copied-hint="copied!" data-copy-hint="copy to clipboard"></span>
      </div>

      <a href="/jsonn/pkgsrc/find/trunk" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>

        <div class="commit commit-loader file-history-tease js-deferred-content" data-url="/jsonn/pkgsrc/contributors/trunk/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp">
          Fetching contributors…

          <div class="participation">
            <p class="loader-loading"><img alt="Octocat-spinner-32-eaf2f5" height="16" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif?1340659530" width="16" /></p>
            <p class="loader-error">Cannot retrieve contributors at this time</p>
          </div>
        </div>

    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/jsonn/pkgsrc/blob/6f02cdeede37a1e11112794f54cace64d0487855/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" data-title="pkgsrc/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp at trunk · jsonn/pkgsrc · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>14 lines (11 sloc)</span>
                <span>0.572 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                      <a class="grouped-button minibutton bigger lighter js-entice" href=""
                         data-entice="You must be signed in and on a branch to make or propose changes">Edit</a>
                  </li>
                <li><a href="/jsonn/pkgsrc/raw/trunk/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="minibutton grouped-button bigger lighter" id="raw-url">Raw</a></li>
                  <li><a href="/jsonn/pkgsrc/blame/trunk/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="minibutton grouped-button bigger lighter">Blame</a></li>
                <li><a href="/jsonn/pkgsrc/commits/trunk/textproc/libclucene/patches/patch-src_CLucene_search_FieldCacheImpl.cpp" class="minibutton grouped-button bigger lighter" rel="nofollow">History</a></li>
              </ul>
            </div>
                <div class="data type-c">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="err">$</span><span class="nl">NetBSD:</span> <span class="n">patch</span><span class="o">-</span><span class="n">src_CLucene_search_FieldCacheImpl</span><span class="p">.</span><span class="n">cpp</span><span class="p">,</span><span class="n">v</span> <span class="mf">1.1</span> <span class="mi">2012</span><span class="o">/</span><span class="mi">11</span><span class="o">/</span><span class="mi">16</span> <span class="mo">01</span><span class="o">:</span><span class="mo">07</span><span class="o">:</span><span class="mi">27</span> <span class="n">joerg</span> <span class="n">Exp</span> <span class="err">$</span></div><div class='line' id='LC2'><br/></div><div class='line' id='LC3'><span class="o">---</span> <span class="n">src</span><span class="o">/</span><span class="n">CLucene</span><span class="o">/</span><span class="n">search</span><span class="o">/</span><span class="n">FieldCacheImpl</span><span class="p">.</span><span class="n">cpp</span><span class="p">.</span><span class="n">orig</span>	<span class="mi">2012</span><span class="o">-</span><span class="mi">11</span><span class="o">-</span><span class="mi">13</span> <span class="mi">16</span><span class="o">:</span><span class="mi">37</span><span class="o">:</span><span class="mf">37.000000000</span> <span class="o">+</span><span class="mo">0000</span></div><div class='line' id='LC4'><span class="o">+++</span> <span class="n">src</span><span class="o">/</span><span class="n">CLucene</span><span class="o">/</span><span class="n">search</span><span class="o">/</span><span class="n">FieldCacheImpl</span><span class="p">.</span><span class="n">cpp</span></div><div class='line' id='LC5'><span class="err">@@</span> <span class="o">-</span><span class="mi">414</span><span class="p">,</span><span class="mi">7</span> <span class="o">+</span><span class="mi">414</span><span class="p">,</span><span class="mi">7</span> <span class="err">@@</span> <span class="n">FieldCacheImpl</span><span class="o">::</span><span class="n">FileEntry</span><span class="o">::</span><span class="n">FileEntry</span> <span class="p">(</span><span class="n">co</span></div><div class='line' id='LC6'>&nbsp;	  <span class="n">_CLDECDELETE</span><span class="p">(</span><span class="n">term</span><span class="p">);</span></div><div class='line' id='LC7'>&nbsp;</div><div class='line' id='LC8'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">try</span> <span class="p">{</span></div><div class='line' id='LC9'><span class="o">-</span>        <span class="n">Term</span><span class="o">*</span> <span class="n">term</span> <span class="o">=</span> <span class="n">enumerator</span><span class="o">-&gt;</span><span class="n">term</span><span class="p">(</span><span class="kc">false</span><span class="p">);</span></div><div class='line' id='LC10'><span class="o">+</span>        <span class="n">term</span> <span class="o">=</span> <span class="n">enumerator</span><span class="o">-&gt;</span><span class="n">term</span><span class="p">(</span><span class="kc">false</span><span class="p">);</span></div><div class='line' id='LC11'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">term</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC12'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_CLTHROWA</span><span class="p">(</span><span class="n">CL_ERR_Runtime</span><span class="p">,</span><span class="s">&quot;no terms in field - cannot determine sort type&quot;</span><span class="p">);</span> <span class="c1">//todo: make rich error: &quot; + field + &quot; </span></div><div class='line' id='LC13'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>
      </div>

      <a href="#jump-to-line" rel="facebox" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
      <div id="jump-to-line" style="display:none">
        <h2>Jump to Line</h2>
        <form accept-charset="UTF-8" class="js-jump-to-line-form">
          <input class="textfield js-jump-to-line-field" type="text">
          <div class="full-button">
            <button type="submit" class="classy">
              Go
            </button>
          </div>
        </form>
      </div>

    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1347543525" height="64" width="64">
</div>


        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="https://github.com/about">About us</a></dd>
        <dd><a href="https://github.com/blog">Blog</a></dd>
        <dd><a href="https://github.com/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="https://github.com/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2012 <span title="0.06109s from fe17.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    <a class="left" href="https://github.com/">
      <span class="mega-icon mega-icon-invertocat"></span>
    </a>
    <ul id="legal">
        <li><a href="https://github.com/site/terms">Terms of Service</a></li>
        <li><a href="https://github.com/site/privacy">Privacy</a></li>
        <li><a href="https://github.com/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus command bar</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last js-hidden-pane" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
        <dd>Submit comment</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
        <dd>Preview comment</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle selection</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
          <dd>Preview comment</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues Dashboard</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div class="js-hidden-pane" >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first js-hidden-pane" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>w</dt>
          <dd>Switch branch/tag</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first">
        <h3>Browsing Commits</h3>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>escape</dt>
          <dd>Close form</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>p</dt>
          <dd>Parent commit</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o</dt>
          <dd>Other parent commit</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <h3>Notifications</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open notification</dd>
        </dl>
      </div><!-- /.column.first -->

      <div class="column second">
        <dl class="keyboard-mappings">
          <dt>e <em>or</em> shift i <em>or</em> y</dt>
          <dd>Mark as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift m</dt>
          <dd>Mute thread</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:

> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>


    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    
    
    <span id='server_response_time' data-time='0.06231' data-host='fe17'></span>
    
  </body>
</html>

