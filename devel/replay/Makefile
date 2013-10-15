# Created by: alfred@FreeBSD.org
# $FreeBSD: devel/replay/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	devel-replay
PORTVERSION=	1.0.4
CATEGORIES=	devel
MASTER_SITES=	http://people.freebsd.org/~alfred/sources/replay/
DISTNAME=	replay-${PORTVERSION}
USE_BZIP2=	yes

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Program that helps you fix a build interactively

PLIST_FILES=	bin/replay

post-patch:
	@${REINPLACE_CMD} -e "s/NOMAN/NO_MAN/" ${WRKSRC}/Makefile

.include <bsd.port.mk>
