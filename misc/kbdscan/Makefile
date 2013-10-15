# $FreeBSD: misc/kbdscan/Makefile 328333 2013-09-26 04:03:59Z eadler $

PORTNAME=	kbdscan
PORTVERSION=	20110507
CATEGORIES=	misc
MASTER_SITES=	http://hack.org/mc/hacks/${PORTNAME}/

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Kbdscan shows the scancodes of keys pressed

LICENSE=	ISCL

USE_BZIP2=	yes

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
