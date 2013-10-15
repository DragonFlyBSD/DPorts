# Created by: Dmitry Sivachenko <dima@Chg.RU>
# $FreeBSD: print/trueprint/Makefile 328888 2013-09-30 22:44:26Z danilo $

PORTNAME=	trueprint
PORTVERSION=	5.4
CATEGORIES=	print
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	trueprint

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Print program listings on postscript printer

USES=		gettext gmake
GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

INFO=		trueprint

PLIST_FILES=	bin/trueprint man/man1/trueprint.1.gz

.include <bsd.port.mk>
