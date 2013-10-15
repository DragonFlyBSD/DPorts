# Created by: KANOU Hiroki <kanou@khdd.net>
# $FreeBSD: textproc/libuninameslist/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	libuninameslist
PORTVERSION=	20091231
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}%20sources/Unicode_5.2-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A library of Unicode annotation data

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool
ALL_TARGET=	both
USE_LDCONFIG=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
