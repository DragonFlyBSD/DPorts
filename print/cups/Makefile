# Created by: Alan Eldridge <alane@geeksrus.net>
# $FreeBSD: print/cups/Makefile 331423 2013-10-23 20:45:10Z ak $

PORTNAME=	cups
PORTVERSION=	1.5.4
CATEGORIES=	print
MASTER_SITES=	# empty
DISTFILES=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Common UNIX Printing System: Metaport to install complete system

BUILD_DEPENDS=	espgs:${PORTSDIR}/${PKGCATEGORY}/cups-pstoraster \
		cupsd:${PORTSDIR}/${PKGCATEGORY}/cups-base
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_BUILD=	yes
NO_INSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
