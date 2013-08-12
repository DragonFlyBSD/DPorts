# $FreeBSD: misc/kbdscan/Makefile 323129 2013-07-16 21:59:48Z eadler $

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
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/

.include <bsd.port.mk>
