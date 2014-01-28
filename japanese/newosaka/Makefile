# Created by: Yukihiro Nakai <Nakai@Mlab.t.u-tokyo.ac.jp>
# $FreeBSD: japanese/newosaka/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	newosaka
PORTVERSION=	1.0
CATEGORIES+=	japanese
MASTER_SITES=	${MASTER_SITE_PORTS_JP}
DISTFILES=	new-osaka.tar.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Translator of Japanese EUC documents into Osaka language

PLIST_FILES=	bin/osaka
WRKSRC=		${WRKDIR}/${PORTNAME}

NO_STAGE=	yes
do-build:
	(cd ${WRKSRC}; ${CC} ${CFLAGS} -o osaka osaka.c -I${WRKSRC})

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/osaka ${PREFIX}/bin

.include <bsd.port.mk>
