# Created by: ABURAYER Rewsirow <rewsirow@ff.iij4u.or.jp>
# $FreeBSD: astro/luna/Makefile 334184 2013-11-18 13:04:09Z bapt $

PORTNAME=	luna
PORTVERSION=	1.9
CATEGORIES=	astro games
MASTER_SITES=	http://ftp.vector.co.jp/pack/dos/edu/science/space/
DISTNAME=	luna19s

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Display the moon's phase

USES=		dos2unix
USE_LHA=	yes
NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/luna
MAKEFILE=	makefile

post-patch:
	@${REINPLACE_CMD} -e 's|varargs.h|stdarg.h|' ${WRKSRC}/iprintf/idoprnt.c

.include <bsd.port.mk>
