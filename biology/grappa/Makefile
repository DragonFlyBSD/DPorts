# Created by: dbader@ece.unm.edu
# $FreeBSD: biology/grappa/Makefile 336071 2013-12-10 17:25:38Z bapt $

PORTNAME=	grappa
PORTVERSION=	2.0
CATEGORIES=	biology
MASTER_SITES=	http://www.cs.unm.edu/~moret/GRAPPA/
DISTNAME=	GRAPPA20

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Genome Rearrangements Analysis and Phylogeny Software

USES=	gmake
MAKE_ARGS=	CC="${CC}"

PLIST_FILES=	bin/grappa bin/invdist bin/distmat

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/grappa ${STAGEDIR}${PREFIX}/bin
	${LN} -sf ${PREFIX}/bin/grappa ${STAGEDIR}${PREFIX}/bin/invdist
	${LN} -sf ${PREFIX}/bin/grappa ${STAGEDIR}${PREFIX}/bin/distmat

.include <bsd.port.mk>
