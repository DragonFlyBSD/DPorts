# ex:ts=8
# Ports collection makefile for: kbdscan
# Date created:		April 23, 2010
# Whom:			Eitan Adler
#
# $FreeBSD: ports/misc/kbdscan/Makefile,v 1.4 2012/11/17 05:59:38 svnexp Exp $
#

PORTNAME=	kbdscan
PORTVERSION=	20110507
CATEGORIES=	misc
MASTER_SITES=	http://hack.org/mc/hacks/${PORTNAME}/

MAINTAINER=	ports@eitanadler.com
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
