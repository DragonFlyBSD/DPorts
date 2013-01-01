# $FreeBSD: ports/misc/kbdscan/Makefile,v 1.5 2012/12/13 19:14:27 svnexp Exp $

PORTNAME=	kbdscan
PORTVERSION=	20110507
CATEGORIES=	misc
MASTER_SITES=	http://hack.org/mc/hacks/${PORTNAME}/

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Kbdscan shows the scancodes of keys pressed

USE_BZIP2=	yes

LICENSE=	ISC
LICENSE_NAME=	ISC License - ISCL
LICENSE_GROUPS=	FSF GPL OSI
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept
# cut and paste the text from kbdscan.c
LICENSE_FILE=	${FILESDIR}/LICENSE-kbdscan

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/

.include <bsd.port.mk>
