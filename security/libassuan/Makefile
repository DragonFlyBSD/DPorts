# Created by: Michael Nottebrock <lofi@FreeBSD.org>
# $FreeBSD: head/security/libassuan/Makefile 456875 2017-12-20 23:57:50Z jhale $

PORTNAME=	libassuan
PORTVERSION=	2.5.1
CATEGORIES=	security devel
MASTER_SITES=	GNUPG/${PORTNAME}

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	IPC library used by GnuPG and gpgme

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

LIB_DEPENDS=	libgpg-error.so:security/libgpg-error

USES=		libtool tar:bzip2
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

INFO=		assuan

.include <bsd.port.mk>
