# Created by: Anders Nordby <anders@fix.no>
# $FreeBSD: graphics/libgphoto2/Makefile 331670 2013-10-26 09:58:00Z tijl $

PORTNAME=	libgphoto2
PORTVERSION=	2.4.14
PORTREVISION=	4
CATEGORIES=	graphics
MASTER_SITES=	SF/gphoto/libgphoto/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Universal digital camera control library

LICENSE=	LGPL21

LIB_DEPENDS=	libexif.so:${PORTSDIR}/graphics/libexif \
		libjpeg.so:${PORTSDIR}/graphics/jpeg

USES=		gmake pkgconfig
USE_BZIP2=	yes
USE_GNOME=	ltverhack
USE_AUTOTOOLS=	libtool libltdl
LIBTOOLFILES=	configure libgphoto2_port/configure
USE_LDCONFIG=	yes
CONFIGURE_ENV=	LTDLINCL="-I${LOCALBASE}/include" \
		LIBLTDL="-L${LOCALBASE}/lib -lltdl"
CFLAGS+=	-DENODATA=9999	# Safe because it's never used

PLIST_SUB=	VERSION="${PORTVERSION}" VERSION_PORT=0.8.0

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD && ${OSVERSION} < 1000040
CONFIGURE_ENV+=	LIBUSB1_CFLAGS=" " LIBUSB1_LIBS="-lusb"
.elif ${OPSYS} == DragonFly
USES+=		usb
.endif

.if ${PORT_OPTIONS:MNLS}
USES+=		gettext
PLIST_SUB+=	NLS=""
.else
USES+=		iconv
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

post-patch:
.for file in configure libgphoto2_port/configure
	@${REINPLACE_CMD} -e \
		's|{libdir}/pkgconfig|{prefix}/libdata/pkgconfig|g ; \
		 s|-g -O2||g ; \
		 /grep -i linux/s|; fi ; then|; else false; fi ; then|' \
			${WRKSRC}/${file}
.endfor
.if ${PORT_OPTIONS:MNLS}
	@${REINPLACE_CMD} -e 's|(LDFLAGS) -o|(LDFLAGS) -lintl -o|' \
		${WRKSRC}/libgphoto2_port/libgphoto2_port/Makefile.in
.endif
	@${REINPLACE_CMD} -e '/test.*udevscriptdir/d ; \
		s| "$$(DESTDIR)$$(udevscriptdir)"||' \
			${WRKSRC}/libgphoto2_port/usb/Makefile.in \
			${WRKSRC}/packaging/generic/Makefile.in
	@${REINPLACE_CMD} -e 's|linux-hotplug ||' \
		${WRKSRC}/packaging/Makefile.in
	@${REINPLACE_CMD} -e \
		's|@HAVE_DOXYGEN_TRUE@|#| ; s|@HAVE_DOXYGEN_FALSE@||' \
			${WRKSRC}/doc/Makefile.in
	@${REINPLACE_CMD} 's|with_hal=yes|with_hal=no|' \
		${WRKSRC}/libgphoto2_port/configure

.include <bsd.port.mk>
