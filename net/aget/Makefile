# Created by: Aaron Zauner <az_mail@gmx.at>
# $FreeBSD: net/aget/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	aget
PORTVERSION=	0.4.1
CATEGORIES=	net
MASTER_SITES=	http://www.enderunix.org/aget/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A multithreaded HTTP download accelerator

PLIST_FILES=	bin/aget
MAN1=	aget.1

NO_STAGE=	yes
post-patch:
# fix man prefix and make portlint happy :)
	@${REINPLACE_CMD} -e 's|/usr/share/man/man1/|${MANPREFIX}/man/man1/|g' -e \
		's|/usr/local/bin/|${PREFIX}/bin/|g' ${WRKSRC}/Makefile

.include <bsd.port.mk>
