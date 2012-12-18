# New ports collection makefile for:	gbdfed
# Date created:				2012-06-05
# Whom:					Zhihao Yuan <lichray@gmail.com>
#
# $FreeBSD: ports/x11-fonts/gbdfed/Makefile,v 1.2 2012/11/17 06:03:28 svnexp Exp $
#

PORTNAME=	gbdfed
PORTVERSION=	1.6
CATEGORIES=	x11-fonts
MASTER_SITES=	http://sofia.nmsu.edu/~mleisher/Software/gbdfed/

MAINTAINER=	lichray@gmail.com
COMMENT=	A GTK2 bitmap font editor

LICENSE=	MIT

USE_BZIP2=	yes
USE_GETTEXT=	yes
USE_GNOME=	gtk20 pkgconfig
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include

MAN1=		gbdfed.1
PLIST_FILES=	bin/gbdfed

.include <bsd.port.mk>
