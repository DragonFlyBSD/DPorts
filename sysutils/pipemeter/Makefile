# Created by: Len Sassama
# $FreeBSD: sysutils/pipemeter/Makefile 330690 2013-10-17 23:51:25Z amdmi3 $

PORTNAME=	pipemeter
PORTVERSION=	1.1.3
CATEGORIES=	sysutils
MASTER_SITES=	http://launchpadlibrarian.net/57215122/ \
		http://spamaps.org/files/pipemeter/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool for displaying pipe status information

LICENSE=	GPLv2 # (or later)

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/pipemeter \
		man/man1/pipemeter.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pipemeter ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/pipemeter.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
