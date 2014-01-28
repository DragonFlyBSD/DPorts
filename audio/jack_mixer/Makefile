# Created by: gahr
# $FreeBSD: audio/jack_mixer/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	jack_mixer
PORTVERSION=	9
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://download.gna.org/${PORTNAME:S/_//}/

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	A mixer for the jack audio connection kit

LIB_DEPENDS=	libjack.so:${PORTSDIR}/audio/jack
BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/fpconst.py:${PORTSDIR}/math/py-fpconst \
   		${LOCALBASE}/include/pygtk-2.0/pygtk/pygtk.h:${PORTSDIR}/x11-toolkits/py-gtk2
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		pkgconfig
NO_STAGE=	yes
USE_PYTHON=	yes
USE_GNOME=	gconf2
GCONF_SCHEMAS=	jack_mixer.schemas
INSTALLS_ICONS=	yes

GNU_CONFIGURE=	yes

.include <bsd.port.mk>
