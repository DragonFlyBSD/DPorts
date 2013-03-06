# Created by: David Naylor <naylor.b.david@gmail.com>
# $FreeBSD: ports/emulators/wine-mono/Makefile,v 1.4 2013/01/16 20:24:41 svnexp Exp $

PORTNAME=	wine-mono
DISTVERSION=	0.0.8
CATEGORIES=	emulators
MASTER_SITES=	SF/wine/Wine%20Mono/${DISTVERSION}
EXTRACT_SUFX=	.msi
EXTRACT_ONLY=

MAINTAINER=	dbn@FreeBSD.org
COMMENT=	Mono .NET implementation for Wine development branch (HTML support)

LICENSE=	MIT GPLv2 LGPL20
LICENSE_COMB=	multi

NO_BUILD=	yes
PLIST_SUB+=	MONO_VERSION="${DISTVERSION}"
DATADIR=	${PREFIX}/share/wine
PLIST_FILES=	%%DATADIR%%/mono/wine-mono-%%MONO_VERSION%%.msi
PLIST_DIRSTRY=	%%DATADIR%%/mono %%DATADIR%%

do-install:
	@${MKDIR} ${DATADIR}/mono
	${INSTALL_DATA} ${DISTDIR}/wine-mono-${DISTVERSION}.msi \
		${DATADIR}/mono

.include <bsd.port.mk>
