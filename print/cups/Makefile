# Created by: Alan Eldridge <alane@geeksrus.net>
# $FreeBSD: print/cups/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	cups
PORTVERSION=	1.5.4
CATEGORIES=	print
MASTER_SITES=	# empty
DISTFILES=	# empty

MAINTAINER=	c.petrik.sosa@gmail.com
COMMENT=	Common UNIX Printing System: Metaport to install complete system

BUILD_DEPENDS=	espgs:${PORTSDIR}/${PKGCATEGORY}/cups-pstoraster \
		cupsd:${PORTSDIR}/${PKGCATEGORY}/cups-base
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_BUILD=	yes
NO_INSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
