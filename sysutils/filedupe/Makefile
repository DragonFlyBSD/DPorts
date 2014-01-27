# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: sysutils/filedupe/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	filedupe
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	sysutils
MASTER_SITES=	http://sammy.net/~sammy/hacks/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utility for quickly finding duplicate files

LIB_DEPENDS=	gdbm:${PORTSDIR}/databases/gdbm

PLIST_FILES=	bin/filedupe

post-patch:
	${REINPLACE_CMD} -e 's|filename\[80\]|filename[1024]|g; \
		s|your_database|/var/db/filedupe.db|' ${WRKSRC}/filedupe.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/filedupe ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
