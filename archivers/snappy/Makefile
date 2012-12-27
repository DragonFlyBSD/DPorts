# Created by: Vanilla I. Shu <vanilla@FreeBSD.org>
# $FreeBSD: ports/archivers/snappy/Makefile,v 1.11 2012/12/18 08:04:12 svnexp Exp $

PORTNAME=	snappy
PORTVERSION=	1.0.5
PORTREVISION=	0
CATEGORIES=	archivers
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Fast compressor/decompressor library

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

post-patch:
.if defined(NOPORTDOCS)
	${REINPLACE_CMD} -e \
		'/^install-data-am:/ s|install-dist_docDATA||' \
		${WRKSRC}/Makefile.in
.endif

.include <bsd.port.pre.mk>

.if ${ARCH} == "sparc64"
BROKEN=		Does not compile on sparc64
.endif

.include <bsd.port.post.mk>
