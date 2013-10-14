# Created by: G. Adam Stanislav <adam@whizkidtech.net>
# $FreeBSD: converters/tuc/Makefile 327715 2013-09-20 16:05:24Z bapt $

PORTNAME=	tuc
PORTVERSION=	1.10
CATEGORIES=	converters
MASTER_SITES=	http://www.whizkidtech.redprince.net/fports/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Text to Unix Conversion

MAN1=		tuc.1

NO_CDROM=	Author does not allow CD-ROM distribution
PLIST_FILES=	bin/tuc

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tuc ${PREFIX}/bin
	$(INSTALL_MAN) ${WRKSRC}/tuc.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
