# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: x11-themes/kde-icons-gartoon-svg/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gartoon
PORTVERSION=	1.3
MASTER_SITES=	${MASTER_SITE_LOCAL} \
		http://ns.ael.ru/ports/distfiles/KDE/
MASTER_SITE_SUBDIR=	fluffy
PKGNAMESUFFIX=	-svg
DISTNAME=	ICONS-Gartoon-SVG-v${PORTVERSION}

COMMENT=	KDE Gartoon SVG iconset

USE_BZIP2=	yes

WRKSRC=		${WRKDIR}/Gartoon
PORT_SHAREDIR?=	"${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}"

PLIST_DIR_PATTERN_EXTRA=	-v "extra/work"
PLIST_FILE_PATTERN_EXTRA=	-v "extra/work"

NO_STAGE=	yes
.include "${.CURDIR}/../kde-icons-noia/Makefile.icons"
