# Created by: marino
# $FreeBSD: misc/compat6x/Makefile 319931 2013-06-04 22:24:50Z eadler $

PORTNAME=	compat34x
PORTVERSION=	20130624
CATEGORIES=	misc
MASTER_SITES=	http://leaf.dragonflybsd.org/~marino/dports-src/
PKGNAMESUFFIX=	-${ARCH}
DISTNAME=	${PORTNAME}-${ARCH}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convenience package to install the compat34x libraries

USE_XZ=		yes
NO_CONFIGURE=	yes
NO_BUILD=	yes
TARGET_DIR=	${PREFIX}/lib/compat
USE_LDCONFIG=	${TARGET_DIR}

.include <bsd.port.pre.mk>

do-install:
	@${MKDIR} -m 755 ${TARGET_DIR}
	cd ${WRKSRC}/lib && ${INSTALL_DATA} *.so.* ${TARGET_DIR}

.include <bsd.port.post.mk>
