# New ports collection makefile for: 	libgphoto2
# Date created:		26 May 1999
# Whom:			Anders Nordby <anders@fix.no>
#
# $FreeBSD: ports/graphics/libgphoto2/Makefile,v 1.67 2012/11/17 05:58:13 svnexp Exp $
#

PORTNAME=	libgphoto2
PORTVERSION=	2.4.14
CATEGORIES=	graphics
MASTER_SITES=	SF/gphoto/libgphoto/${PORTVERSION}

MAINTAINER=	pav@FreeBSD.org
COMMENT=	A universal digital camera picture control tool

LIB_DEPENDS=	exif.12:${PORTSDIR}/graphics/libexif \
		jpeg.11:${PORTSDIR}/graphics/jpeg

USE_BZIP2=	yes
USE_GNOME=	pkgconfig ltverhack
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool libltdl
LIBTOOLFILES=	configure libgphoto2_port/configure
USE_LDCONFIG=	yes
CONFIGURE_ENV=	LTDLINCL="-I${LOCALBASE}/include" LIBLTDL="-L${LOCALBASE}/lib -lltdl"
PLIST_SUB=	VERSION="${PORTVERSION}" VERSION_PORT=0.8.0
MAKE_JOBS_SAFE=	yes

MAN3=		libgphoto2.3 libgphoto2_port.3

.if defined(WITHOUT_NLS)
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
USE_ICONV=	yes
.else
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
.endif

.include <bsd.port.pre.mk>


.if ${OPSYS} == "DragonFly"
.  if exists(/usr/include/usb.h)
USE_OPTION=3
.  else
USE_OPTION=1
.  endif
.elif ${OSVERSION} < 800064
USE_OPTION=1
.elif ${OSVERSION} < 800069
USE_OPTION=2
.else
USE_OPTION=3
.endif

.if ${USE_OPTION} == 1
LIB_DEPENDS+=	usb-0.1.8:${PORTSDIR}/devel/libusb
.elif ${USE_OPTION} == 2
CONFIGURE_ENV+=	LIBUSB_LIBS="-L/usr/lib -lusb20" LIBUSB_CFLAGS="-I/usr/include/dev/usb -I/usr/include"
EXTRA_PATCHES=	${PATCHDIR}/extra-patch-usb20
.else
CONFIGURE_ENV+=	LIBUSB_LIBS="-lusb" LIBUSB_CFLAGS="-I/usr/include"
.endif

post-patch:
.for file in configure libgphoto2_port/configure
	@${REINPLACE_CMD} -e \
		's|{libdir}/pkgconfig|{prefix}/libdata/pkgconfig|g ; \
		 s|-g -O2||g ; \
		 /grep -i linux/s|; fi ; then|; else false; fi ; then|' ${WRKSRC}/${file}
.endfor
.if !defined(WITHOUT_NLS)
	@${REINPLACE_CMD} -e 's|(LDFLAGS) -o|(LDFLAGS) -lintl -o|' ${WRKSRC}/libgphoto2_port/libgphoto2_port/Makefile.in
.endif
	@${REINPLACE_CMD} -e '/test.*udevscriptdir/d ; s| "$$(DESTDIR)$$(udevscriptdir)"||' ${WRKSRC}/libgphoto2_port/usb/Makefile.in ${WRKSRC}/packaging/generic/Makefile.in
	@${REINPLACE_CMD} -e 's|linux-hotplug ||' ${WRKSRC}/packaging/Makefile.in
	@${REINPLACE_CMD} -e 's|@HAVE_DOXYGEN_TRUE@|#| ; s|@HAVE_DOXYGEN_FALSE@||' ${WRKSRC}/doc/Makefile.in
.if ${OSVERSION} >= 800064
	@${REINPLACE_CMD} -e '/Requires/d' ${WRKSRC}/libgphoto2_port/libgphoto2_port.pc.in
.endif

.include <bsd.port.post.mk>
