# Created by: Sergey A. Osokin <osa@FreeBSD.org>
# $FreeBSD: benchmarks/wrk/Makefile 317829 2013-05-10 16:45:53Z osa $

PORTNAME=	wrk
PORTVERSION=	2.0.0
PORTREVISION=	1
CATEGORIES=	benchmarks www
MASTER_SITES=	http://github.com/wg/${PORTNAME}/tarball/master/
DISTNAME=	${PORTNAME}-${PORTVERSION}-${GITVERSION}

MAINTAINER=	osa@FreeBSD.org
COMMENT=	The modern HTTP benchmarking tool

LICENSE=	AL2

FETCH_ARGS=	-pRr
GITVERSION=	0-g6fd3ee1
WRKSRC=		${WRKDIR}/wg-${PORTNAME}-${GITVERSION:S/^0-g//}
USE_GMAKE=	yes
CFLAGS+=	-std=c99 -D_DECLARE_C99_LDBL_MATH

PLIST_FILES=	bin/wrk

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 800000
BROKEN=		does not link on FreeBSD 7.x
.endif

post-patch:
	@${REINPLACE_CMD} '1d;2s/-lpthread/${PTHREAD_LIBS}/' ${WRKSRC}/Makefile

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.post.mk>
