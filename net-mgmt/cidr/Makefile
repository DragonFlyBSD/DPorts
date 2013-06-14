# Created by: Domas Mituzas <midom@dammit.lt>
# $FreeBSD: net-mgmt/cidr/Makefile 317638 2013-05-07 22:35:42Z ehaupt $

PORTNAME=	cidr
PORTVERSION=	2.3.2
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	RFC 1878 subnet calculator / helper

LICENSE=	GPLv2

MAKE_JOBS_SAFE=	yes

MAN1=		cidr.1
PLIST_FILES=	bin/cidr

do-build:
	${CC} ${CFLAGS} ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${MAN1} ${MANPREFIX}/man/man1

.include <bsd.port.mk>
