# Created by: ijliao
# $FreeBSD: games/poker-eval/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	poker-eval
PORTVERSION=	0.138
CATEGORIES=	games
MASTER_SITES=	http://download.gna.org/pokersource/sources/
DISTNAME=	${PORTNAME}-${PORTVERSION:E}.0

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A C library to evaluate poker hands

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USES=		pkgconfig
USE_GMAKE=	yes
USE_LDCONFIG=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e \
		's|{libdir}/pkgconfig|(prefix)/libdata/pkgconfig|g' \
		${WRKSRC}/Makefile.in

test:
	@cd ${WRKSRC} && ${GMAKE} check

.include <bsd.port.mk>
