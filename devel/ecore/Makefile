# Created by: Stanislav Sedov <stas@FreeBSD.org>
# $FreeBSD: devel/ecore/Makefile 318442 2013-05-18 19:36:31Z gblach $

PORTNAME=	ecore
PORTVERSION=	1.7.7
PORTEPOCH=	2
CATEGORIES=	devel enlightenment
MASTER_SITES=	# none
DISTFILES=	# none
EXTRACT_ONLY=	# none

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Enlightenment core abstraction library (meta port)

NO_BUILD=	yes
USE_EFL=	ecore

OPTIONS_DEFINE=	CON EVAS FILE IMF IMF_EVAS INPUT INPUT_EVAS IPC SDL X11
OPTIONS_DEFAULT=CON EVAS FILE IMF IMF_EVAS INPUT INPUT_EVAS IPC X11

.for NODE in ${OPTIONS_DEFINE}
${NODE}_DESC=	Install ${NODE:tl} module
.endfor

.include <bsd.port.options.mk>

.for NODE in ${OPTIONS_DEFINE}
.  if ${PORT_OPTIONS:M${NODE}}
USE_EFL_ECORE+=	${NODE:tl}
.  endif
.endfor

do-install:
	${DO_NADA}

.include <bsd.port.mk>
