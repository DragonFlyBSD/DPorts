# Created by: Jille Timmermans (jille@quis.cx)
# $FreeBSD: editors/tweak/Makefile 327720 2013-09-20 16:36:23Z bapt $

PORTNAME=	tweak
PORTVERSION=	3.01
CATEGORIES=	editors
MASTER_SITES=	http://www.chiark.greenend.org.uk/~sgtatham/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An efficient hex editor

MAN1=		tweak.1
MANCOMPRESSED=	yes
PLIST_FILES=	bin/tweak

MAKEFILE=	${FILESDIR}/Makefile.in
MAKE_ENV+=	BINDIR="${LOCALBASE}/bin" MANDIR="${PREFIX}/man/man"

NO_STAGE=	yes
.include <bsd.port.mk>
