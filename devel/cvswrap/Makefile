PORTNAME=	cvswrap
PORTVERSION=	0.2
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES+=	LOCAL/alfred

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Helper for multiple CVS repositories

USES=		desthack

GNU_CONFIGURE=	yes

dfly-patch:
	${REINPLACE_CMD} -e 's@sys/types.h@sys/param.h@g' \
		${WRKSRC}/cvswrap.c

.include <bsd.port.mk>
