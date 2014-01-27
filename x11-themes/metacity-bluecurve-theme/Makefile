# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: x11-themes/metacity-bluecurve-theme/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	metacity-bluecurve-theme

COMMENT=	The Bluecurve Metacity themes

MASTERDIR=	${.CURDIR}/../bluecurve-themes

NO_BUILD=	yes
USE_GNOME=	gnomehier

.for t in Bluecurve Bluecurve-classic
BC_HIERS+=	${WRKSRC}/art/metacity/${t}:${PREFIX}/share/themes/${t}/metacity-1
PLIST_DIRS+=	share/themes/${t}/metacity-1 share/themes/${t} share/themes
.endfor

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
