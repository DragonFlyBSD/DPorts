# Created by: Andreas Klemm <andreas@klemm.gtn.com>
# $FreeBSD: sysutils/symlinks/Makefile 332015 2013-10-29 21:45:25Z olgeni $

PORTNAME=	symlinks
PORTVERSION=	1.4
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	utils/file

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Symbolic link maintenance utility

PLIST_FILES=	bin/symlinks \
		man/man8/symlinks.8.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/symlinks ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/symlinks.8 ${STAGEDIR}${MAN8PREFIX}/man/man8

.include <bsd.port.mk>
