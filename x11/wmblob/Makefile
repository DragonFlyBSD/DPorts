# Created by: Denis Shaposhnikov <dsh@vlink.ru>
# $FreeBSD: x11/wmblob/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	wmblob
PORTVERSION=	1.0.3
PORTREVISION=	8
CATEGORIES=	x11 windowmaker
MASTER_SITES=	http://www.dockapps.org/files/155/541/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Showing moving blobs

USE_XORG=	xpm
USE_BZIP2=	yes
USE_GNOME=	gtk20
USES=		pkgconfig
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/wmblob man/man1/wmblob.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/wmblob ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/doc/wmblob.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
