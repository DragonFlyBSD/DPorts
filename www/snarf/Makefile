# Created by: Kris Kennaway <kris@FreeBSD.org>
# $FreeBSD: www/snarf/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	snarf
PORTVERSION=	7.0
CATEGORIES=	www
MASTER_SITES=	http://www.xach.com/snarf/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Another small command-line URL (http/ftp/gopher/finger) fetcher

GNU_CONFIGURE=	yes

MAN1=		snarf.1
PLIST_FILES=	bin/snarf

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/snarf ${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/snarf.1 ${PREFIX}/man/man1/

.include <bsd.port.mk>
