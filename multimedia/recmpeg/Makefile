# Created by: ijliao
# $FreeBSD: multimedia/recmpeg/Makefile 337561 2013-12-26 17:15:08Z wg $

PORTNAME=	recmpeg
PORTVERSION=	1.0.5
PORTREVISION=	1
CATEGORIES=	multimedia
MASTER_SITES=	SF/fame/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple video encoder

LIB_DEPENDS=	libfame-0.9.so:${PORTSDIR}/multimedia/libfame

GNU_CONFIGURE=	yes

MAN1=		recmpeg.1
PLIST_FILES=	bin/recmpeg \
		man/man1/recmpeg.1.gz

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.pre.mk>

.if ${ARCH} == "ia64"
BROKEN=		Fails to link on ia64
.endif

.include <bsd.port.post.mk>
