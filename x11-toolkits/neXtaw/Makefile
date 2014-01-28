# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: x11-toolkits/neXtaw/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	neXtaw
PORTVERSION=	0.15.1
PORTREVISION=	3
CATEGORIES=	x11-toolkits
MASTER_SITES=	http://siag.nu/pub/neXtaw/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Athena Widgets with N*XTSTEP appearance

USE_AUTOTOOLS=	libtool
USE_XORG=	xmu x11 xext
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|version-info.*$$|version-info 8:0:0|g' \
		${WRKSRC}/X11/neXtaw/Makefile.in

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/CHANGES ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/FAQ ${DOCSDIR}
.endif

.include <bsd.port.mk>
