# Created by: Jose Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/emulators/loemu/Makefile 380468 2015-03-05 01:45:47Z amdmi3 $

PORTNAME=	loemu
PORTVERSION=	0.3.1
PORTREVISION=	10
CATEGORIES=	emulators python
MASTER_SITES=	http://loemu.pegueroles.com/dists/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple frontend for various game emulators

LICENSE=	GPLv2 # or later

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/gtk-2.0/gtk/__init__.py:${PORTSDIR}/x11-toolkits/py-gtk2 \
		${PYTHON_SITELIBDIR}/libxml2.py:${PORTSDIR}/textproc/py-libxml2 \
		${PYTHON_SITELIBDIR}/libxslt.py:${PORTSDIR}/textproc/py-libxslt

USES=		gettext python shebangfix
USE_PYTHON=	distutils
NO_BUILD=	yes
SHEBANG_FILES=	setup.py

OPTIONS_DEFINE=	MAME SNES9X ZSNES
OPTIONS_DEFAULT=	MAME SNES9X

MAME_DESC=		Install mame emulator
SNES9X_DESC=		Install snes9x emulator
ZSNES_DESC=		Install zsnes emulator
MAME_RUN_DEPENDS=	mame>=0.154:${PORTSDIR}/emulators/mame
SNES9X_RUN_DEPENDS=	snes9x:${PORTSDIR}/emulators/snes9x
ZSNES_RUN_DEPENDS=	zsnes:${PORTSDIR}/emulators/zsnes

post-patch:
	${REINPLACE_CMD} -i '' -e 's|/usr/bin/env python|${PYTHON_CMD}|' \
		${WRKSRC}/scripts/loemu \
		${WRKSRC}/scripts/loemu-builder	

.include <bsd.port.mk>
