# Created by: darius@dons.net.au
# $FreeBSD: net/boclient/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	boclient
PORTVERSION=	1.21
CATEGORIES=	net security
MASTER_SITES=	http://www.cultdeadcow.com/tools/
DISTNAME=	bo121unix

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Client program for the Back Orifice Windows program

PLIST_FILES=	bin/bounix
WRKSRC=		${WRKDIR}/bo
GNU_CONFIGURE=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|g' ${WRKSRC}/Makefile.in

post-install:
		${STRIP_CMD} ${PREFIX}/bin/bounix

.include <bsd.port.mk>
