# Created by: Roland Jesse <roland.jesse@gmx.net>
# $FreeBSD: ports/graphics/pho/Makefile,v 1.25 2012/11/17 05:58:18 svnexp Exp $

PORTNAME=	pho
DISTVERSION=	0.9.8
CATEGORIES=	graphics
MASTER_SITES=	http://shallowsky.com/software/pho/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lightweight image viewer

LICENSE=	GPLv2

USE_GMAKE=	yes
USE_GNOME=	gtk20
MAKE_ARGS=	INSTALLPREFIX="${PREFIX}"
ALL_TARGET=	${PORTNAME}
WRKSRC=		${WRKDIR}/${PORTNAME}

MAN1=		${PORTNAME}.1
PLIST_FILES=	bin/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's|make|$$(MAKE)| ; \
		/bin/s|$$(INSTALL)|${INSTALL_PROGRAM}| ; \
		/man/s|$$(INSTALL)|${INSTALL_MAN}| ; \
		/CFLAGS/s|-g ||' ${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e 's|-Wall -g -O2 ||' ${WRKSRC}/exif/Makefile

.include <bsd.port.mk>
