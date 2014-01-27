# Created by: D'Arcy J.M. Cain <darcy@druid.net>
# $FreeBSD: devel/generate/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	generate
PORTVERSION=	2.8
CATEGORIES=	devel
MASTER_SITES=	http://www.druid.net/darcy/
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple text pre-processor

USES=		gmake

MAKE_ARGS=	BINDIR=${STAGEDIR}${PREFIX}/bin \
		MANDIR=${STAGEDIR}${PREFIX}/man

PLIST_FILES=	bin/generate bin/rgenerate man/man1/generate.1.gz

post-patch:
	@${REINPLACE_CMD} -e 's,^CFLAGS *=,CFLAGS +=,' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
