# Created by: Romain Tartiere <romain@FreeBSD.org>
# $FreeBSD: ports-mgmt/portshaker-config/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	portshaker-config
CATEGORIES=	ports-mgmt

MAINTAINER=	romain@FreeBSD.org
COMMENT=	Simple configuration manager for portshaker

BUILD_DEPENDS=	portshaker:${PORTSDIR}/ports-mgmt/portshaker
RUN_DEPENDS:=	${BUILD_DEPENDS}

MASTERDIR=	${.CURDIR}/../portshaker
BUILD_WRKSRC=	${WRKSRC}/examples
INSTALL_WRKSRC=	${BUILD_WRKSRC}
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
