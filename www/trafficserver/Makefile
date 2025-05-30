PORTNAME=	trafficserver
PORTVERSION=	9.2.1
CATEGORIES=	www
MASTER_SITES=	APACHE/${PORTNAME}

MAINTAINER=	gaod@hychen.org
COMMENT=	Fast, scalable and extensible HTTP proxy server
WWW=		https://trafficserver.apache.org/

LICENSE=	APACHE20

ONLY_FOR_ARCHS=	amd64 powerpc64 powerpc64le

LIB_DEPENDS=	libcurl.so:ftp/curl \
		libhwloc.so:devel/hwloc2 \
		libpcre.so:devel/pcre \
		libxml2.so:textproc/libxml2 \
		libbrotlienc.so:archivers/brotli

USES=		compiler:c++17-lang cpe gmake libtool localbase luajit \
		ncurses pathfix perl5 pkgconfig sqlite ssl tar:bzip2 tcl
CPE_VENDOR=	apache
CPE_PRODUCT=	traffic_server
USE_PERL5=	build run
USE_LDCONFIG=	yes
USE_RC_SUBR=	${PORTNAME}

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

USERS=		${WWWOWN}
GROUPS=		${WWWGRP}
PLIST_SUB=	WWWOWN="${WWWOWN}" WWWGRP="${WWWGRP}" PORTVERSION="${PORTVERSION}"

CONFIGURE_ARGS=	--with-pcre=${LOCALBASE} \
		--with-openssl=${OPENSSLBASE} \
		--with-tcl=${TCL_LIBDIR} \
		--localstatedir=/var \
		--with-user=${USERS} \
		--with-group=${GROUPS} \
		--disable-maintainer-mode \
		--disable-dependency-tracking \
		--enable-mime-sanity-check \
		--enable-experimental-plugins

OPTIONS_DEFINE=	DOCS GEOIP WCCP MEMCACHED IMAGEMAGICK X11
OPTIONS_SUB=	yes
PLIST_SUB+=	ARCH="${ARCH:C/powerpc64.*/powerpc/}"

GEOIP_LIB_DEPENDS=	libmaxminddb.so:net/libmaxminddb
WCCP_DESC=	Enable WCCPv2 protocol
WCCP_CONFIGURE_ENABLE=	wccp

MEMCACHED_DESC=		Enable memcache & memcached_remap plugin
MEMCACHED_LIB_DEPENDS=	libmemcached.so:databases/libmemcached

IMAGEMAGICK_DESC=	Enable ats-magick & webp convert plugin

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MIMAGEMAGICK}
.if ${PORT_OPTIONS:MX11}
USES+=		magick:6
.else
USES+=		magick:6,nox11
.endif
.endif

post-patch:
	@${REINPLACE_CMD} \
		-e '/cachedir:/s,$${localstatedir}+,$${localstatedir}/cache+,' \
		-e '/runtimedir:/s,$${localstatedir}+,$${localstatedir}/run+,' \
		${WRKSRC}/config.layout
	@${REINPLACE_CMD} -e 's/#ifdef HAVE_EVENTFD/#if defined(HAVE_EVENTFD) \&\& TS_USE_EPOLL == 1/' \
		${WRKSRC}/src/tscore/EventNotify.cc \
		${WRKSRC}/include/tscore/EventNotify.h

post-install:
	${RMDIR} ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${ETCDIR}/snapshots
	(cd ${STAGEDIR}${ETCDIR} && for f in *.config *.yaml; do ${MV} $$f $$f.sample; done)
	${SED} -i '' -e 's|^${STAGEDIR}||g' \
		${STAGEDIR}${PREFIX}/lib/perl5/${ARCH:C/powerpc64.*/powerpc/}-${OPSYS:tl}-thread-multi/auto/Apache/TS/.packlist

.include <bsd.port.post.mk>
