# Created by: erich@FreeBSD.org
# $FreeBSD: multimedia/mplex/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mplex
PORTVERSION=	1.1
CATEGORIES=	multimedia
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=     sanpei

MAINTAINER=	sanpei@FreeBSD.org
COMMENT=	Multiplexes MPEG component streams into system layers

CONFLICTS=	mjpegtools-*

MAN1=		mplex.1
PLIST_FILES=	bin/mplex

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mplex ${PREFIX}/bin
	${INSTALL_MAN} ${FILESDIR}/mplex.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
