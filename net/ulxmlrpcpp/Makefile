# Created by: ijliao
# $FreeBSD: net/ulxmlrpcpp/Makefile 331873 2013-10-28 17:23:35Z pawel $

PORTNAME=	ulxmlrpcpp
PORTVERSION=	1.7.5
CATEGORIES=	net devel
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Ultra lightweight xml-rpc library written in C++

LIB_DEPENDS=	libexpat.so:${PORTSDIR}/textproc/expat2

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USE_BZIP2=	yes
USES=		pathfix iconv
USE_OPENSSL=	yes
USE_AUTOTOOLS=	libtool
CONFIGURE_ENV=	PTHREAD_CFLAGS="${PTHREAD_CFLAGS}" \
		PTHREAD_LIBS="${PTHREAD_LIBS}"
USE_LDCONFIG=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	@${REINPLACE_CMD} -e \
		'/^SUBDIRS/s| docs | |g' ${WRKSRC}/ulxmlrpcpp/Makefile.in

.include <bsd.port.mk>
