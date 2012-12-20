# New ports collection makefile for:	icon-bluecurve-theme
# Date created:			29 May 2005
# Whom:				Jean-Yves Lefort <jylefort@FreeBSD.org>
#
# $FreeBSD: ports/x11-themes/icon-bluecurve-theme/Makefile,v 1.9 2012/11/17 06:03:32 svnexp Exp $
#

PORTNAME=	icon-bluecurve-theme

COMMENT=	The Bluecurve icon set

BUILD_DEPENDS=	icon-slicer:${PORTSDIR}/graphics/icon-slicer \
		pamrgbatopng:${PORTSDIR}/graphics/netpbm

MASTERDIR=	${.CURDIR}/../bluecurve-themes

WANT_GNOME=	yes
INSTALLS_ICONS=	yes

BUILD_WRKSRC=	${WRKSRC}/art/icon/Bluecurve/sheets
BC_HIERS=	${BUILD_WRKSRC}/Bluecurve:${PREFIX}/share/icons/Bluecurve

do-build:
	@BUILD_WRKSRC="${BUILD_WRKSRC}" ${SH} ${SCRIPTDIR}/do-build

pre-install:
	@${ECHO_CMD} "@dirrm share/icons/Bluecurve" >> ${PLIST}
	@${ECHO_CMD} "@dirrmtry share/icons" >> ${PLIST}

.include "${MASTERDIR}/Makefile"
