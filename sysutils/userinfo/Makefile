# Created by: Ben Kibbey <bjk@arbornet.org>
# $FreeBSD: sysutils/userinfo/Makefile 315820 2013-04-16 15:27:52Z zi $

PORTNAME=	userinfo
PORTVERSION=	2.4
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Show information about local users

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_AUTOTOOLS=	libtool
USE_BZIP2=	yes
GNU_CONFIGURE=	yes

MAN1=		ui.1
MLINKS=		ui.1 userinfo.1

.include <bsd.port.mk>
