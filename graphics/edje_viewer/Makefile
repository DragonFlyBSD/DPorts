# Created by: Stanislav Sedov <ssedov@mbsd.msk.ru>
# $FreeBSD: ports/graphics/edje_viewer/Makefile,v 1.19 2012/12/22 21:09:57 svnexp Exp $

PORTNAME=	edje_viewer
PORTVERSION=	20120918
CATEGORIES=	graphics enlightenment
MASTER_SITES=	http://files.roorback.net/e17/extra/

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	A simple viewer for .edj files

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_EFL=	evas ecore edje elementary
USE_EFL_ECORE=	file
USE_GNOME=	gnomehack pkgconfig
USE_LDCONFIG=	yes

.include <bsd.port.mk>
