# New ports collection makefile for:	metacity-bluecurve-theme
# Date created:			29 May 2005
# Whom:				Jean-Yves Lefort <jylefort@FreeBSD.org>
#
# $FreeBSD: ports/x11-themes/metacity-bluecurve-theme/Makefile,v 1.3 2012/11/17 06:03:33 svnexp Exp $
#

PORTNAME=	metacity-bluecurve-theme

COMMENT=	The Bluecurve Metacity themes

MASTERDIR=	${.CURDIR}/../bluecurve-themes

NO_BUILD=	yes
USE_GNOME=	gnomehier

.for t in Bluecurve Bluecurve-classic
BC_HIERS+=	${WRKSRC}/art/metacity/${t}:${PREFIX}/share/themes/${t}/metacity-1
PLIST_DIRS+=	share/themes/${t}/metacity-1 share/themes/${t} share/themes
.endfor

.include "${MASTERDIR}/Makefile"
