# Created by: Jille Timmermans (jille@quis.cx)
# $FreeBSD: ports/editors/tweak/Makefile,v 1.4 2012/11/17 05:57:18 svnexp Exp $

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

.include <bsd.port.mk>
