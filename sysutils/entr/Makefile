# $FreeBSD: sysutils/entr/Makefile 328889 2013-09-30 22:46:13Z danilo $

PORTNAME=	entr
PORTVERSION=	2.2
CATEGORIES=	sysutils
MASTER_SITES=	http://entrproject.org/code/

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Runs arbitrary commands when files change

WRKSRC=	${WRKDIR}/eradman-entr-963b395019be

MAKEFILE=	Makefile.bsd
MAKE_ARGS=	MANPREFIX=${MANPREFIX}/man
PLIST_FILES=	bin/entr man/man1/entr.1.gz

.include <bsd.port.mk>
