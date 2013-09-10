# Created by: Mykola Dzham <i@levsha.me>
#
# $FreeBSD: audio/libbpm/Makefile 325966 2013-09-02 10:06:03Z bapt $
#

PORTNAME=	libbpm
PORTVERSION=	0.3
CATEGORIES=	audio
MASTER_SITES=	http://www.hep.ucl.ac.uk/~bino/libbpm/dist/ http://levsha.me/ports/distfiles/

MAINTAINER=	i@levsha.me
COMMENT=	C-library contains low level beam position monitor signal processing

GNU_CONFIGURE=	yes

USE_LDCONFIG=	yes
USES=		pathfix pkgconfig

post-patch:
	${SED} -i '' 's/\(-release .*\)/\1 -version-info 0/' ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in

.include <bsd.port.mk>
