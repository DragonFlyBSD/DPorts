# Created by: Kim Scarborough <user@unknown.nu>
# $FreeBSD: misc/brs/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	brs
PORTVERSION=	4.03
CATEGORIES=	misc
MASTER_SITES=	http://www.unknown.nu/ports/
DISTFILES=	bible.data.tar.bz2 bible.tar.bz2
DIST_SUBDIR=	brs

MAINTAINER=	user@unknown.nu
COMMENT=	Interactive King James Bible

USE_BZIP2=	yes
NO_WRKSUBDIR=	yes
ALL_TARGET=
CFLAGS+=	-Wno-error=return-type
MAN1=		bible.1

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} 's=%%PREFIX%%=${PREFIX}=g' \
		${WRKSRC}/brl.c ${WRKSRC}/bible.1

.include <bsd.port.mk>
