PORTNAME=	ephemera
PORTVERSION=	6.34
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://www.mammothcheese.ca/

MAINTAINER=	jimmy@mammothcheese.ca
COMMENT=	Blog server
WWW=		http://www.mammothcheese.ca/

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	munger:lang/munger

USES=		sqlite

MAKE_ARGS=	MANDIR="${STAGEDIR}${PREFIX}/share/man/man1/"
DATADIR=	${PREFIX}/share/ephemera

dfly-patch:
	${REINPLACE_CMD} -e '/malloc_np.h/d'	\
		${WRKSRC}/data.c

.include <bsd.port.mk>
