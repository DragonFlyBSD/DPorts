# New ports collection makefile for:   newosaka
# Date created:        20 January 1997
# Whom:                Yukihiro Nakai <Nakai@Mlab.t.u-tokyo.ac.jp>
#
# $FreeBSD: ports/japanese/newosaka/Makefile,v 1.12 2012/11/17 05:58:37 svnexp Exp $
#

PORTNAME=	newosaka
PORTVERSION=	1.0
CATEGORIES+=	japanese
MASTER_SITES=	${MASTER_SITE_PORTS_JP}
DISTFILES=	new-osaka.tar.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Translator of Japanese EUC documents into Osaka language

PLIST_FILES=	bin/osaka
WRKSRC=		${WRKDIR}/${PORTNAME}

do-build:
	(cd ${WRKSRC}; ${CC} ${CFLAGS} -o osaka osaka.c -I${WRKSRC})

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/osaka ${PREFIX}/bin

.include <bsd.port.mk>
